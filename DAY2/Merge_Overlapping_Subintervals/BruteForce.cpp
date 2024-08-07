#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> arr ) {
    int n= arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans(n);
    
    for(int i=0;i<n;i++){
        int start=arr[i][0];
        int end=arr[i][1];
        
        while(!ans.empty()&& ans.back()[1]>=end){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(end>=arr[j][0]){
                end=max(arr[j][1],end);
            }
            else{
                break;
            }
        }
        ans.push_back{start,end};
    }
    return ans;

   
}