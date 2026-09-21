class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        int min = *min_element(nums.begin(),nums.end());
        int max = *max_element(nums.begin(),nums.end());

        while(min!=0){
           int temp=min;
           min=max%min;
           max=temp;
        }
        return max;

    }
};