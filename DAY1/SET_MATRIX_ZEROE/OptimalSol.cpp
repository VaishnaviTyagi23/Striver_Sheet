#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> setmatzero(vector<vector<int>>mat){
    // vector<int> row(mat.size(),0);
    // vector<int> col(mat.size(),0);
    int col0=1;
    //marking 
    for(int i=0;i<mat.size();i++){
	    for(int j=0;j<mat[0].size();j++){
	        if(mat[i][j]==0){
	            //rows
	            mat[i][0]=0;
	            if(j==0){
	               col0=0; 
	            }
	            else{
	                mat[0][j]=0;
	            }
	        }
	    }
	}
	 for(int i=1;i<mat.size();i++){
	    for(int j=1;j<mat.size();j++){
	        if(mat[i][0]==0|| mat[0][j]==0){
	           mat[i][j]=0; 
	        }
	    }
	}
	if(mat[0][0]==0){
	    for(int i=1;i<mat.size();i++){
	        mat[0][i]=0;
	    }
	}
	if(col0==0){
	    for(int i=1;i<mat.size();i++){
	        mat[i][0]=0;
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