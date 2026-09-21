class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> v;
        int n = operations.size();
        
        for(int i = 0; i < n; i++){
            if(operations[i] == "C"){
                v.pop_back();
            }
            else if(operations[i] == "D"){
                int a = v[v.size()-1];
                v.push_back(2*a);
            }
            else if(operations[i] == "+"){
                int a = v[v.size()-1] + v[v.size()-2];
                v.push_back(a);
            }
            else{
                v.push_back(stoi(operations[i]));
            }
        }
        return accumulate(v.begin(), v.end(), 0);
    }
};