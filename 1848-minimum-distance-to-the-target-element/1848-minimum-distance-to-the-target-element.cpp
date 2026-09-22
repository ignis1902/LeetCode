class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int max =INT_MAX;
      for(int i=0;i<nums.size();i++){
        if(target==nums[i]){
            int b = abs(i-start);
            if(b<max){
                max=b;
            }
        }
      }
      return max;
    }
};