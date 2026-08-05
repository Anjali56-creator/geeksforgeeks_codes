class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        string copy;

        for(char c :s){
            if(c== ' ')
            continue;
            copy.push_back(c);
        }
        return copy;
    }
};