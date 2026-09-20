class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            int n=stones.size();
            int a = stones[n-1]-stones[n-2];
            stones.pop_back();
            stones.pop_back();
            if(a>0){
                stones.push_back(a);
            }
           
        }

        return stones.empty() ? 0 : stones[0];    }
};