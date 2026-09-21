class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for (int x : nums) {
            mp[x]++;
        }
        int dp = -1, ms = -1;
        for (int i = 1; i <= n; i++) {
            if (mp[i] == 2) dp = i;
            if (mp[i] == 0) ms = i;
        }
        return {dp, ms};
    }
};