#include <bits/stdc++.h>
using namespace std;

int nCr( int r) {
    int ans=1;
    cout<<ans;
    for(int i=1;i<r;i++){
        ans*=(r-i);
        ans/=i;
        cout<<ans;
    }
   
}

int main()
{
    int r = 5; // row number
    nCr(r);
  
    return 0;
}
