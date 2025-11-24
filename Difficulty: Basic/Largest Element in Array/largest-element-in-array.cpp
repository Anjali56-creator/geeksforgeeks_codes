class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        long long a=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]>a){
                a=arr[i];
             
            }
          
        }
       return a; 
    }
};
