class Solution {
public:
    int thirdMax(vector<int>& nums) {

        set<int> s;

        for(auto x : nums){
            s.insert(x);
        }

        if(s.size() < 3){
            return *s.rbegin();
        }

        auto it = s.rbegin();

        it++;  
        it++;  

        return *it;
    }
};