class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        if (n == 0) return 0;

        int leftmax = 0, rightmax = 0;
        int water = 0;

        int maxheight = arr[0], index = 0;

        // find highest bar
        for (int i = 1; i < n; i++) {
            if (arr[i] > maxheight) {
                maxheight = arr[i];
                index = i;
            }
        }

        // left side
        for (int i = 0; i < index; i++) {
            if (arr[i] < leftmax)
                water += leftmax - arr[i];
            else
                leftmax = arr[i];
        }

        // right side
        for (int i = n - 1; i > index; i--) {
            if (arr[i] < rightmax)
                water += rightmax - arr[i];
            else
                rightmax = arr[i];
        }

        return water;

    }
};