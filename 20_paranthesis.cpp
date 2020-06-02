bool isValid(string s) {

        vector <int> stack;

        for(int i=0; i<s.length(); i++){

            char c = s[i];
            char d;

            // Open brackets

            if( c == '(' || c=='[' || c== '{'){
                stack.push_back(c);
            }

            // closing brackets

            else {

              if(stack.empty()){
                    return false;
                }

                // round

              else  if(c==')'){
                    d = stack.back();
                    stack.pop_back();
                    if ( d!= '('){
                        return false;
                    }
                }

                // square

                else if(c==']'){
                    d = stack.back();
                    stack.pop_back();
                    if ( d!= '['){
                        return false;
                    }
                }
                // Curly

                else if(c=='}'){
                    d = stack.back();
                    stack.pop_back();
                    if ( d!= '{'){
                        return false;
                    }
                }
            }
        }

        if (!stack.empty()){
            return false;
        }

        return true;
    }
