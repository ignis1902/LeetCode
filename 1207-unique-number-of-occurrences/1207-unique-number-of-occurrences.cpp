class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        unordered_map<int, int> freqOfFreq; 
        for (auto x : arr) {
            freq[x]++;
        }
        for (auto& p : freq) {
            freqOfFreq[p.second]++;
            if (freqOfFreq[p.second] > 1) {
                return false; 
            }
        }

        return true;
    }
};