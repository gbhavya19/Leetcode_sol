class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int> cowsS(10, 0);
        vector<int> cowsG(10, 0);

        int bulls{0}, cows{0};
        for (int i{0}; i<secret.size(); ++i) {
            if (secret[i]==guess[i]) bulls++;
            else {
                
                cowsS[secret[i]-'0']++;
                cowsG[guess[i]-'0']++;
            }
        }

        for (int i{0}; i<cowsG.size(); ++i) {
           
            cows+=min(cowsG[i], cowsS[i]);
        }
        return to_string(bulls)+'A'+to_string(cows)+'B';

    }
};