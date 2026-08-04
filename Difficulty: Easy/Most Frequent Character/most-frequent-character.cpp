class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        vector<int>freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        int maxi=0;
        for(int i=0;i<26;i++){
       
        if(freq[i]>freq[maxi])
        maxi=i;
    }
    return char(maxi+'a');
    }
};