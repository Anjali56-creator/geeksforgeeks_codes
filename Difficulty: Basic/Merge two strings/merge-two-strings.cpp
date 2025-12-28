
string merge(string S1, string S2) {
    // your code here
     string ans = "";
    int i = 0;

    while (i < S1.size() || i < S2.size()) {
        if (i < S1.size())
            ans += S1[i];
        if (i < S2.size())
            ans += S2[i];
        i++;
    }
    return ans;
}