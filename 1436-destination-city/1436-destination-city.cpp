class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> freq;

        for (auto& p : paths) {
            freq[p[0]]++;
            freq[p[1]]++;
        }

        vector<string> cand;
        for (auto& [city, cnt] : freq) {
            if (cnt == 1) {
                cand.push_back(city);
            }
        }

        for (auto& p : paths) {
            for (auto& c : cand) {
                if (p[1] == c) {
                    return c;
                }
            }
        }

        return "";
    }
};