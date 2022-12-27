class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        int arr[26];
        memset(arr,0,sizeof(arr));
        if(n>m){
            return false;
        }
        
        for(int i=0; i<n; i++){
            arr[s1[i]-'a']--;
            arr[s2[i]-'a']++;
        }
        
        for(int j=0; j<26; j++){
                if(arr[j]!=0){
                    break;
                }
                else if(j==25 && arr[j]==0){
                    return true;
                }
            }
        
        for(int i=n; i<m; i++){
            arr[s2[i]-'a']++;
            arr[s2[i-n]-'a']--;
            for(int j=0; j<26; j++){
                if(arr[j]!=0){
                    break;
                }
                else if(j==25 && arr[j]==0){
                    return true;
                }
            }
        }
        return false; 
    }
};