//brute force
class Solution {
  public:
      int missingNumber(vector<int>& nums) {
          int flag=0;
          for(int i=0;i<=nums.size();i++){
              flag=0;
              for(int j=0;j<nums.size();j++){
                  if(nums[j]==i){
                      flag=1;
                      break;
                  }
              }
              if(flag==0)
                  return i;
          }
          return -1;
      }
  };

  //optimized approach
  int missingNumber(int* nums, int n) {
    int sum =(n*(n+1))/2;
    int arrsum=0;
    for(int i=0;i<n;i++){
       arrsum+=nums[i];
    }
    if(arrsum==sum)
    return 0;
    else
    return sum-arrsum;
}
