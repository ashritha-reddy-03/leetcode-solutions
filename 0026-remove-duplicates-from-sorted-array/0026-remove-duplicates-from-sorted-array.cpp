class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=size(nums);
        int rem=1,trv=1;
        while(trv<n){
            if(nums[trv]!=nums[trv-1])
            {
                nums[rem]=nums[trv];
                rem++;
            }
            trv++;
        }
        return rem;
        
    }
};