class Solution {
  public:
    string toLower(string& s) {
        // code here
        for(char &c : s){
        c=tolower(c);
        }
        return s;
    }
};