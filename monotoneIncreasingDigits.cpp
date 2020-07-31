class Solution {
public:
    int monotoneIncreasingDigits(int N) {

        string s = to_string(N);

        int n = s.length();
        if(n==1) return N;
        int i =0;

        while(s[0]>'0')
        {
            i = (i>0? i-1: 0);

            while(i<n-1 && s[i]<=s[i+1])
                i++;

            if(i==n-1) break;

            else{
                s[i]--;
                for(int j =i+1; j<n; j++){
                    s[j] = '9';
                }
            }

        }

        while(s[0]=='0') s.erase(s.begin());

        return stoi(s);
    }
};
