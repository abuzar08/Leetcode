class Solution {
public:
    int compress(vector<char>& chars) {

        string s ="";
        int n = chars.size();
        if(n==0) return 0;
        if(n == 1) return 1;
        int i=0;

        while(i<n){
            char c = chars[i];
            int count = 1;
            int j = i+1;
            while( j<n && chars[j]==chars[i] )
            {
                count ++;
                j ++;
            }

            i += count;
            if(count > 1)
                s = s + c + to_string(count);
            else
                s = s + c;
        }

        int k = s.size();
        i = 0;


        for(char c: s){

                chars[i] = c;
                i++;

        }

        return k;

    }
};
