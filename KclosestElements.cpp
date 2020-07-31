int y;
class Solution {
public:
    static bool compare(int a, int b){

        if (abs(a-y)<abs(b-y))
           return true;
        if (abs(a-y)>abs(b-y))
            return false;
        if(a<b)
            return true;
        return false;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        y = x;

        sort(arr.begin(), arr.end(), compare);
        vector<int> ans;
        for(int i =0; i<k; i++){
            ans.push_back(arr[i]);
        }

        sort(ans.begin(), ans.end());

        return ans;

    }
};
//

// Other way

int y;
class Solution {

  class compare
  {
  public:
    bool operator () (int a, int b)
    {
         if (abs(a-y)<abs(b-y))
             return true;
          if (abs(a-y)>abs(b-y))
              return false;
          if(a<b)
              return true;
          return false;
    }
  };
    
public:

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        y = x;

        priority_queue<int, vector<int>, compare > maxhp;
        int n = arr.size();

        for(int num: arr){
            maxhp.push(num);
            if(maxhp.size()>k){
                maxhp.pop();
            }
        }
        vector<int> ans;
        for(int i =0; i<k; i++){
            ans.push_back(maxhp.top());
            maxhp.pop();
        }

        sort(ans.begin(), ans.end());

        return ans;

    }
};
