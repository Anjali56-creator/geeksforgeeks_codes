class Solution {
  public:
    long long sumBetweenTwoKth(long long A[], long long N, long long k1, long long k2) {
        // Your code goes here
        priority_queue<long long>p1;
        priority_queue<long long>p2;
        for(long long i=0;i<k1;i++)
        p1.push(A[i]);
        
        for(long long i=0;i<k2-1;i++)
        p2.push(A[i]);
        for(long long i=k1;i<N;i++){
            if(A[i]<p1.top()){
                p1.pop();
                p1.push(A[i]);
            }
        }
         for(long long i=k2-1;i<N;i++){
            if(A[i]<p2.top()){
                p2.pop();
                p2.push(A[i]);
            }
        }
        long long sum1=0,sum2=0;
        while(!p1.empty()){
            sum1+=p1.top();
            p1.pop();
        }
        while(!p2.empty()){
            sum2+=p2.top();
            p2.pop();
        }
        return sum2-sum1;
    }
};