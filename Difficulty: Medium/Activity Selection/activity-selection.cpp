bool comp(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
    
}


class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        int n=start.size();
        vector<pair<int,int>>timer;
        for(int i=0;i<n;i++)
        timer.push_back({start[i],finish[i]});
        sort(timer.begin(),timer.end(),comp);
        int total=0;
        int ending=-1;
        for(int i=0;i<n;i++){
            if(timer[i].first>ending){
                total++;
                ending=timer[i].second;
            }
        }
        return total;
        
    }
};