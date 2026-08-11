class Solution {
  public:
    int countVowels(string &s) {
        // code here
        set<char>vowels;
        int cnt=0;
        for(char c: s){
            if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u')
            vowels.insert(c);
        }
        return vowels.size();
    }
};