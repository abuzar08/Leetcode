#include<bits/stdc++.h>
using namespace std;

int main(){
//   vector<int> v = {1,2,3,4,5};
//   cout<<v.size();
//   v.erase(v.begin()+1, v.begin()+3);
//   cout<<v.size();
  map< char, int > mp;

  mp.clear();

  mp['a'] = 1;

  cout<<mp['a']<<"\n";


  if(mp.find('b')==mp.end()){
    mp['b'] = 2;
    cout<<mp['b'];
  }

  return 0;
}
