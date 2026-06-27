class Solution {
  public:
  priority_queue<int>leftmaxheap;
  priority_queue<int,vector<int>,greater<int>>rightminheap;
  
  void insertion(int &x){
      if(leftmaxheap.empty()){
        leftmaxheap.push(x);
        return;
      }
      if(x>leftmaxheap.top())
      rightminheap.push(x);
      else
      leftmaxheap.push(x);
      balanceheaps();
  }
  
  void balanceheaps(){
      if(rightminheap.size()>leftmaxheap.size()){
          leftmaxheap.push(rightminheap.top());
          rightminheap.pop();
      }
      else{
          //diff between left and right is atmost should 1
          if(rightminheap.size()<leftmaxheap.size()-1){
          rightminheap.push(leftmaxheap.top());
          leftmaxheap.pop();
        }
      }
  }
    vector<double> getMedian(vector<int> &arr) {
        // code here
        vector<double>ans;
        for(int x:arr){
            
        insertion(x);
        if(leftmaxheap.size()>rightminheap.size())
       ans.push_back(leftmaxheap.top());
        else{
            ans.push_back((leftmaxheap.top() + rightminheap.top()) / 2.0);
        }
        }
        return ans;
    }
};
