class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n=a.size(),m=b.size();
       vector<int>temp;
       for(int i=0;i<n;i++){
           temp.push_back(a[i]);
       }
        for(int i=0;i<m;i++){
            temp.push_back(b[i]);
        }
        sort(temp.begin(),temp.end());
           for(int i = 0; i < n; i++) {
            a[i] = temp[i];
        }

        for(int i = 0; i < m; i++) {
            b[i] = temp[n + i];
        }
    }
};