class Solution {
public:
    vector<vector<int>> ans;
    void help(vector<int> output,int i,int g,int j,int n){
        if(output.size()==g){
            ans.push_back(output);
            return;
        }
        for(int k=n+1;k<=i;k++){
            output.push_back(k);
            help(output,i,g,j+1,k);
            output.pop_back();
        }

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>output;
        help(output,n,k,0,0);
        return ans;
    }
};