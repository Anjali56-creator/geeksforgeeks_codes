class Solution {
  public:
    string removeVowels(string& s) {
        // code here
        string ans=" ";
        for(char c : s){
            if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u')
            continue;
            ans.push_back(c);
        }
        return ans;
    }
};