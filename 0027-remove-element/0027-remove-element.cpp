class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     int n= nums.size();
     int cnt=0;
     for(int i=0;i<n;i++){
        if(val==nums[i]){
            nums.erase(nums.begin()+i);
            cnt++;
            n--;
            i--;
        }
     }
     return n;
    }
};