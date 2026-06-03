class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        stack<int>st;
       int n=mat.size();
        for(int i=n-1;i>=0;i--){
            st.push(i);
        }
       
        while(st.size()>1){
            int first=st.top();
            st.pop();
            int second=st.top();
            st.pop();
            if(mat[first][second])
            st.push(second);
            else
            st.push(first);
        }
        if(st.empty())
        return -1;
        int num=st.top();
        //st.pop();
        int row=0,col=0;
        for(int i=0;i<n;i++){
            if(i!=num){
            row+=mat[num][i];
            col+=mat[i][num];
            }
        }
        return (row==0 && col==n-1)?num:-1;
    }
};