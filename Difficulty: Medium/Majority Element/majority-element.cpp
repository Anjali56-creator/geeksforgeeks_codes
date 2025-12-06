class Solution {
  public:
    int majorityElement(vector<int>& nums) {
        // code here
       sort(nums.begin(), nums.end());

        int candidate = nums[nums.size() / 2];
        int count = 0;

        // Count occurrences of candidate
        for(int x : nums) {
            if(x == candidate) count++;
        }

        // Check majority condition
        if(count > nums.size() / 2)
            return candidate;
        return -1;
    }
};