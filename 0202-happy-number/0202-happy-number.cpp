class Solution {
public:
    bool isHappy(int n) {
        set<int>s;
        while(n>1){
            s.insert(n);
            int temp=0;
            while(n){
                int num=n%10;
                temp+=num*num;
                n/=10;
            }
            n=temp;
            if(s.find(n)!=s.end()){return false;}
        }
        return n==1;
    }
};