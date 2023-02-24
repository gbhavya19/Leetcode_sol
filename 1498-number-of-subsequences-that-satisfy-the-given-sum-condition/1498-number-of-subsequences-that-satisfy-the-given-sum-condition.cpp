class Solution {
public:
    int numSubseq(vector<int>& arr, int target) {
        int mod = 1e9+7, n=arr.size();

        vector<int> pow = {1};
        for(int i=0; i<n; i++) pow.push_back((pow.back()*2) % mod);
        // pow = to calculate the number of subsequences for a size
        // e.g. for (r-l)=0 pow is 1 -> [3] is one subseq
        // for (r-l)=2 pow is 4 -> [3,4,5] is 4 subseq -> [3], [3,4], [3,5], [3,4,5]
        // for (r-l)=3 pow is 8 -> [3,4,5,6]-> [3], [3,4], [3,5], [3,6], [3,4,5], [3,4,6], [3,5,6], [3,4,5,6]

        int l=0, r=n-1, ans=0;
        sort(arr.begin(), arr.end());

        while(l<=r){ // simple 2 pointer
            if(arr[l]+arr[r]<=target){ // valid subsequence
                ans= (ans+pow[r-l]) % mod; // pow of current length of subseq
                l++; 
            }
            else r--; // decrease the sum
        }
        return ans;
    }
};