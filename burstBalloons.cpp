int maxCoins(vector<int>& nums) {


      int n = nums.size();

      int ans = solve(nums, 0, nums.size()-1);

      return ans;

      }

  int solve ( vector<int> nums, int i, int j){


      if(i>j) return 0;


      int ans =0;
      int leftmost, rightmost;

      if(i > 0 )
          leftmost = nums[i-1];
      else
          leftmost = 1;

      if(j < nums.size()-1)
          rightmost = nums[j+1];
      else
          rightmost = 1;

       if(i==j) return leftmost*nums[i]*rightmost;

      for(int k = i; k<=j; k++){

          int left = solve(nums, i, k-1);
          int right = solve(nums, k+1, j);
          int temp = left + right + leftmost*nums[k]*rightmost;

          ans = max(ans, temp);
      }

      return ans;
  }

  // Heap overflow error but works on small ones - NOPE - WORKS NOW!

  class Solution {
  public:

      int maxCoins(vector<int>& nums) {

          int n = nums.size();
          int dp[][];
          }

          for(int len = 1; len<=n; len++){
              for(int i = 0; i<=n-len; i++){
                  int j = i + len -1 ;
                  dp[i][j] = 0;
                  for(int k = i; k<=j; k++){

                      int leftmost = 1;
                      int rightmost = 1;

                      if(i!=0)
                          leftmost = nums[i-1];
                      if (j!=n-1)
                          rightmost = nums[j+1];

                      int left =0;
                      int right =0;

                      if(k!=i)
                          left = dp[i][k-1];
                      if(k!=j)
                          right = dp[k+1][j];
                      dp[i][j] = max(dp[i][j], (left + right + leftmost*nums[k]*rightmost));

                  }
              }
          }

          return dp[0][n-1];

          }


  };
