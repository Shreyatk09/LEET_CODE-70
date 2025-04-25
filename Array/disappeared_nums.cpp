//brute force
class Solution {
  public:
      vector<int> findDisappearedNumbers(vector<int>& nums) {
          int n=nums.size();
          vector<int>result;
          bool found=0;
          for(int i=1;i<=n;i++){
              found=0;
              for(int j=0;j<n;j++){
                  if(nums[j]==i){
                      found=1;
                      break;
                  }
              }
              if(!found){
                  result.push_back(i);
              }
          }
          return result;
      }
  };

  //optimized
  class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& a) {
            int n=a.size();
            for(int i=0;i<n;i++){
                while(a[a[i]-1]!=a[i]){
                    swap(a[i],a[a[i]-1]);
                }
            }
            vector<int>ans;
            for(int i=0;i<n;i++){
                if(a[i]!=i+1)
                    ans.push_back(i+1);
            }
            return ans;
        }
    }
