class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        
        for (int i = 0; i + 1 < arr.size(); i += 2) {
            swap(arr[i], arr[i + 1]);
        }
    }
};