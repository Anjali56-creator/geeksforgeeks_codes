// User function Template for C++
class Solution {
  public:
    vector<int> getTable(int n) {
        // Write Your Code here
        vector<int>ans;
          for(int i=1;i<=10;i++){
              ans.push_back(n*i);
              
        }
        return ans;
    }
};