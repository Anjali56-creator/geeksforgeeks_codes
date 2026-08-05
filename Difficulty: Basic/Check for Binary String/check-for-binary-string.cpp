class Solution {
  public:
    bool isBinary(string& s) {
        // code here
        for(char c : s){
            if(c!='0' && c!='1')
            return 0;
        }
        return 1;
    }
};