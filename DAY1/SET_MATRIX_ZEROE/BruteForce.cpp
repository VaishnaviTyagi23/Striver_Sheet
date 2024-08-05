#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> setmatzero(vector<vector<int>>mat){
    //0 to -1
    for(int i=0;i<mat.size();i++){
	    for(int j=0;j<mat.size();j++){
	        if(mat[i][j]==0){
	            //column
	            for(int k=0;k<mat.size();k++){
	                if(mat[i][k]!=0){
	                mat[i][k]=-1;
	                }
	            }
	            //row
	            for(int k=0;k<mat.size();k++){
	                if(mat[k][j]!=0){
	                mat[k][j]=-1;
	                }
	            }
	        }
	    }
	}
	 for(int i=0;i<mat.size();i++){
	    for(int j=0;j<mat.size();j++){
	        if(mat[i][j]==-1){
	           mat[i][j]=0; 
	        }
	    }
	}
    return mat;
}

int main() {
	vector<vector<int>> mat={{1,0,0,1},{1,0,1,0},{1,1,1,1},{1,0,1,1}} ;
	vector<vector<int>>ans=setmatzero(mat);
	for(int i=0;i<mat.size();i++){
	    for(int j=0;j<mat.size();j++){
	        cout<<ans[i][j];
	    }
	    cout<<endl;
	}
}