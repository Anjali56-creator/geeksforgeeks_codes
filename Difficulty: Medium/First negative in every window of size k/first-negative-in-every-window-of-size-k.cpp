class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
          int n = arr.size();
        queue<int> q;
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if (arr[i] < 0)
                q.push(i);

            if (i >= k - 1) {
                while (!q.empty() && q.front() < i - k + 1)
                    q.pop();

                if (q.empty())
                    ans.push_back(0);
                else
                    ans.push_back(arr[q.front()]);
            }
        }

        return ans;
    }
   
};