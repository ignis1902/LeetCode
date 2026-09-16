class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans;
        set<int> s;

        for(auto x : nums){
            s.insert(x);
        }

        for(int i = 1; i <= n; i++){
            ans.push_back(i);
        }

        for(int i = 0; i < ans.size(); i++){

            if(s.find(ans[i]) != s.end()){
                ans.erase(ans.begin() + i);
                i--;
            }
        }

        return ans;
    }
};