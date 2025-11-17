class Solution {
  public:
    int isPowerOfFour(unsigned int n) {
        // Your code goes here
        if (n < 1) return false;

        while (n != 1) {
            if (n % 4 != 0)
                return false;
            n /= 4;
        }
        return true;
    }
};