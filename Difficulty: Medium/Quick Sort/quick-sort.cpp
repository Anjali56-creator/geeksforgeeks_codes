class Solution {
  public:
    void quickSort(vector<int>& arr, int start, int end) {
        if(start >= end)
            return;

        int pivot = partition(arr, start, end);

        // left subarray
        quickSort(arr, start, pivot - 1);

        // right subarray
        quickSort(arr, pivot + 1, end);
    }

    int partition(vector<int>& arr, int start, int end) {
        int pivot = arr[end];
        int pos = start;

        for(int i = start; i < end; i++) {
            if(arr[i] <= pivot) {
                swap(arr[i], arr[pos]);
                pos++;
            }
        }
        swap(arr[pos], arr[end]);
        return pos;
    }
};
