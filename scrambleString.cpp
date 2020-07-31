class Solution {
public:

    unordered_map<string, int> dp;

    bool isScramble(string s1, string s2) {

        int l1 = s1.length();
        int l2 = s2.length();

        if(l1!=l2) return false;
        if(l1==0) return true;
        if(s1.compare(s2)==0) return true;

        string key_1 = s1 + " " + s2;
        string key_2 = s2 + " " + s1;

        if(dp.find(key_1)!=dp.end()) return dp[key_1];
        if(dp.find(key_2)!=dp.end()) return dp[key_2];

        bool flag = false;
        int n = l1;
        for(int i =1; i<n; i++){
            if(isScramble(s1.substr(0,i), s2.substr(0,i)) && isScramble(s1.substr(i, n-i), s2.substr(i,n-i)) || isScramble(s1.substr(0,i), s2.substr(n-i, i)) && isScramble(s1.substr(i, n-i), s2.substr(0,n-i))){
                flag = true;
                break;
            }
        }

        dp[key_1] = flag;
        dp[key_2] = flag;

        return flag;

    }
};
