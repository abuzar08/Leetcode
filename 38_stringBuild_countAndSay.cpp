string makeString(string s){
       vector< pair<int, char> > record;
       char c = s[0];
       int count = 0;

       int l = s.size();

       for (int i =0; i<l; i++){
           if( s[i]==c ){
               count ++;
           }
           else{
               record.push_back( pair<int, char>(count, c));
               c = s[i];
               count = 1;
           }
       }

       record.push_back( pair<int, char>(count, c));

       string retStr;

       for( pair<int,char> p : record ){

           retStr += to_string(p.first);
           retStr += p.second;

       }

       return retStr;
   }


   string countAndSay(int n) {
       if (n==1){
           return "1";
       }

       return makeString(countAndSay(n-1));

   }
