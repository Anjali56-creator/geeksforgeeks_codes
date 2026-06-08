class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int> mp;
        
        int xr = 0;
        long long cnt = 0;
        
        mp[0] = 1;
        
        for(int i = 0; i < arr.size(); i++) {
            xr ^= arr[i];
            
            int req = xr ^ k;
            
            if(mp.find(req) != mp.end())
                cnt += mp[req];
            
            mp[xr]++;
        }
        
        return cnt;
    }
};