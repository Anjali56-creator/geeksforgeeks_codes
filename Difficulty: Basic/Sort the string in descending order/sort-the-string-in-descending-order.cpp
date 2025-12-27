
string ReverseSort(string str) {
    // complete the function here
    sort(str.begin(),str.end());
    reverse(str.begin(),str.end());
    return str;
}