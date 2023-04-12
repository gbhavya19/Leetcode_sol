class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size(), k=needle.size();
        int indx=-1;
        for(int i=0;i<n-k+1;i++){
            string temp=haystack.substr(i,k);
            if(temp == needle){
                indx=i; break;
            }
        }
        return indx;
    }
};