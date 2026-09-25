class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> a;
        int n = prices.size();

        for(int i = 0; i < n; i++) {

            bool found = false;

            for(int j = i + 1; j < n; j++) {

                if(prices[j] <= prices[i]) {
                    a.push_back(prices[i] - prices[j]);
                    found = true;
                    break;
                }
            }

            if(!found) {
                a.push_back(prices[i]);
            }
        }

        return a;
    }
};