class Solution {
  public:
    long long jumpingNums(long long n) {
        // code here
        long long sum = 0;

        if (n <= 9)
            return n;
        queue<long long> q;
        long long x = n;
        for (int i = 1; i <= 9; i++)
            q.push(i);
        while (!q.empty()) {

            long long a = q.front();   
            q.pop();

            if (a > x) continue;

            sum = max(sum, a);  

            int last = a % 10;
            if (last > 0)
                q.push(a * 10 + (last - 1));

            if (last < 9)
                q.push(a * 10 + (last + 1));
        }

        return sum; 
    }
};
