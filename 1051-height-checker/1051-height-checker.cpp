class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n= heights.size();
        vector<int> duplicate(n);
        
        for(int i=0;i<n;i++){
            duplicate[i]=heights[i];
        }
        sort(duplicate.begin(),duplicate.end());
        int count=0;
        for(int i=0;i<n;i++){
            
                if(duplicate[i]!=heights[i]){
                    count++;
                
            }
        }
        return count;
    }
};