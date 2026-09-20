class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> s;

        int n=candyType.size();

        for(auto x: candyType){
            s.insert(x);
        }

        if(s.size()<=n/2){
            return s.size();
            }
        else{
            return n/2;
        }

     
     return 0;



    }
};