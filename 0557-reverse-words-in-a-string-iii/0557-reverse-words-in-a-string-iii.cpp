class Solution {
public:
    string reverseWords(string s) {
        int i=0, j=0, n=s.length(); 
        while(j < n){
            if(s[j+1]==' ' || j==n-1){ // j traverse through the word until it reaches its last letter
                int k = j;
                while(k>=i)
                    swap(s[k--], s[i++]); // Reverse the word by swapping its letters
                j++;
                i = j+1; // i maintains position of first letter of word
            }
            j++;
        }
        return s;
    }
};

