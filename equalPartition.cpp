class Solution {
public:

    bool dp[202][20001];

    bool canPartition(vector<int>& nums) {

        const int n = nums.size();
        int r = accumulate(nums.begin(), nums.end(), 0);
        if(r%2==1) return false;
        int sum = r/2;

        for(int i=0; i<=n; i++){
            for(int j=0; j<=sum; j++){

                if(j==0)
                    dp[i][j] = true;
                else if (i==0)
                    dp[i][j] = false;
                else
                {
                    if(nums[i-1]<=j){
                    dp[i][j] = ((dp[i-1][j]) || (dp[i-1][j-nums[i-1]]));
                    }
                    else{
                    dp[i][j] = dp[i-1][j];
                    }
                }

            }

        }

        return dp[n][sum];

    }
};
