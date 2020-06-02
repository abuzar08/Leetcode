// REVIEW

int longestValidParentheses(string s) {
        vector<int> stack;
        stack.push_back(-1);
        int maxlength = 0;
        int l;

        for (int i=0; i<s.length(); i++){
          char c = s[i];
          int d;

          if (c == '('){
            stack.push_back(i);
          }
          else{
            stack.pop_back();
            if(!stack.empty()){
              d = stack.back();
              l = i-d;
              maxlength = max(maxlength, l);
            }

          }

          if (stack.empty())
          {
            stack.push_back(i);
          }

        }

        return maxlength;
      }
