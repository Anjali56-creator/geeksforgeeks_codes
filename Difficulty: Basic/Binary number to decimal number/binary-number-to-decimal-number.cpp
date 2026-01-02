class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int dec = 0;
        for(char c : b) {
            dec = dec * 2 + (c - '0');
        }
        return dec;
    }
};