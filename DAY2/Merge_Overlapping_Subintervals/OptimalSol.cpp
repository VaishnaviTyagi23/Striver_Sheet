#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> arr ) {
    int n= arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans(n);
    
    for(int i=0;i<n;i++){
        
        if(ans.empty()!! ans.back()[1]<=arr[i][0]){
            ans.push_back(arr[i]);
        }
        else{
           ans.back()[1]=max(ans.back()[1],arr[i][1]) ;
        }
        
        ans.push_back{start,end};
    }
    return ans;

   
}


