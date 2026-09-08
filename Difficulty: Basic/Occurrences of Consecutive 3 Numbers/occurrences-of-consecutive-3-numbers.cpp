class Solution {
  public:
    int specialIntegers(vector<int> &arr) {
        // code here
        unordered_set<int>st;
        int cnt=0;
        for(int x:arr){
            st.insert(x);
            
        }
        for(int i : st){
            if(st.count(i-1) && st.count(i+1)) cnt++;
        }
        return cnt;
    }
};