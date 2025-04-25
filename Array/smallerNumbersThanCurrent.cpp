//optimized problm
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>count(101,0);
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for(int i=1;i<101;i++){
            count[i]+=count[i-1];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums[i]=0;
            }
            else{
                nums[i]=count[nums[i]-1];
            }
        }
        return nums;
    }
};
