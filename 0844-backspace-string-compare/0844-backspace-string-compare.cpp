class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> pt;

        for(auto x : s){
            if(x == '#'){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(x);
            }
        }
        
        for(auto x : t){
            if(x == '#'){
                if(!pt.empty()){
                    pt.pop();
                }
            }
            else{
                pt.push(x);
            }
        }

        if(st == pt){
            return true;
        }

        return false;
    }
};