class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> a;
        set<int> b;
        for(auto x : nums1){
            a.insert(x);
        }
        for(auto x : nums2){
            b.insert(x);
        }
        set<int> common;
        for (int x : a) {
            if (b.count(x)) common.insert(x);
        }
        
        return vector<int>(common.begin(), common.end());
    
        
    }
};