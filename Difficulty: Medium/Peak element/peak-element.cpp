class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int n = arr.size();
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            bool leftOk = (mid == 0 || arr[mid] >= arr[mid - 1]);
            bool rightOk = (mid == n - 1 || arr[mid] >= arr[mid + 1]);
            if (leftOk && rightOk)
                return mid;
            else if (mid > 0 && arr[mid - 1] > arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        return -1; 
    }
};