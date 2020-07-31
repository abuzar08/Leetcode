class Solution {
public:
    string removeKdigits(string num, int k) {
        //Find the first peak and delete (over and over for k times)
        int i = 0, nexti = 1;
        const int n = num.size();
        if(n==k) return "0";
        if(n==0||n==1) return num;


        while(k>0){
            i = i > 0? (i-1): 0;
            while(i<n-1 && num[i]<=num[i+1]) i++;

            num.erase(num.begin() + i);
            k--;

        }
        while(num[0]=='0') num.erase(num.begin());
        if(num.size()==0) num = "0";
        return num;

    }
};
