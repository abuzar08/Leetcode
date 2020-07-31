class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // unordered_map<int, int> count;
        //2*setSum - vectorSum
        //XOR

        int a = 0;

        for(int i: nums){
            a ^= i;
        }

        return a;
    }
};
