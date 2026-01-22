class Solution {
  public:
  void toh(int n, int s, int h, int d) {
    // base case
    if (n == 1) {
       // cout<<"move disk "<<n<<"from rod"<<s<<"to rod"<<d<< endl;
        return;
    }
    toh(n - 1, s, d, h);
   // cout<<"move disk "<<n<<"from rod "<<s<<" to rod "<<d<< endl;
    toh(n - 1, h, s, d);
}
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        toh(n,from,aux,to);
        return pow(2,n)-1;
    }
};