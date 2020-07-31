vector<int> children[100001];
class Solution {
public:
    int w = 0, h = 1;
    vector<int> dp;
    int maxEnvelopes(vector<vector<int>>& env) {

        const int n = env.size();
        if(n<=1) return n;
        for(int i =0; i<n; i++){
            dp.push_back(-1);
        }

        for(int i=0; i<n; i++){

            vector<int> cur;

            for(int j =0; j<n; j++){

                if(i!=j){
                    if(env[i][h]<env[j][h] && env[i][w]<env[j][w]){

                        cur.push_back(j);
                    }
                }
            }

            children[i] = cur;
        }

        int ans = 0;

        for(int i =0; i<n; i++){
            int temp = solve(children[i], i);
            ans = max(ans,temp);
        }

        return ans;

    }

    int solve(vector<int>& child, int root)
    {
        if(child.size()==0)
            return dp[root] = 1;
        if(dp[root]!=-1){
            return dp[root];
        }

        const int n = child.size();
        int ret = 0;

        for(int i =0; i<n; i++)
        {
            int x = child[i];
            int temp = 1 + solve(children[x], x);
            ret = max(ret,temp);

        }

        dp[root] = ret;
        return ret;
    }
};
