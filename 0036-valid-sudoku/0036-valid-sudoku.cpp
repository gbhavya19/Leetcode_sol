class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& mat) {
        
        
        
        unordered_set<string> s;
        
       
        
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(mat[i][j] != '.')
                {
              
                    
                    if(s.count("row" + to_string(i) + "*" + to_string(mat[i][j])))
                    {
                        return false;
                    }
                
                    if(s.count("col" + to_string(j) + "*" + to_string(mat[i][j])))
                    {
                         return false;
                    }
                
                    if(s.count("box" + to_string((i / 3) * 3 + j / 3) + "*" + to_string(mat[i][j])))
                    {
                        return false;
                    }
                    
                  
                    s.insert("row" + to_string(i) + "*" + to_string(mat[i][j]));
                
                    s.insert("col" + to_string(j) + "*" + to_string(mat[i][j]));
                
                    s.insert("box" + to_string((i / 3) * 3 + j / 3) + "*" + to_string(mat[i][j]));
                }
            }
        }
        
        return true;
    }
};