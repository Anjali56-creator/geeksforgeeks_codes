class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        int total=0;
        unordered_map<int,int>m;
        int prefixSum=0;
        //edge case is zero so include it intially
        m[0]=1;
        for(int i  = 0; i< arr.size(); i++){
            prefixSum+=arr[i];
            if(m.count(prefixSum)){
                
                total+=m[prefixSum];
                m[prefixSum]++;
            }
            else
            m[prefixSum]=1;
        }
        return total;
    }
};