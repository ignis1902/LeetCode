class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
           int count =0;
        for(int i=0;i<nums.size()-1;i++){
            if ((nums[i]^nums[i+1])==0){
            count++;
            nums.erase(nums.begin() + i + 1);
            i--;
        }
        }

  
        return nums.size();
    }
};