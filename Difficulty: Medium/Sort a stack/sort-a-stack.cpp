class Solution {
  public:
    void sortStack(stack<int> &st) {
        // code here
        stack<int>temp;
        while(!st.empty()){
            int x=st.top();
            st.pop();
            
            while(!temp.empty()  && temp.top()<x){
                st.push(temp.top());
                temp.pop();
            }
            temp.push(x);
        }
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        
    }
};
