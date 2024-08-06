#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    int res=1;
    for(int i=1;i<=n;i++){
        res*=i;
    }
    return res;
}

int eleposrc(int n, int r){
    //Formula :nCr=n!/(r!*(n-r)!)
    //(r-1)C(c-1)
    int factn=factorial(n);
    int factr=factorial(r);
    int factnsubr=factorial(n-r);
    int den=factr* factnsubr;
    int ans=factn/den;
    return ans;
    
}

int main() {
    int r;
    int c;
	std::cout << "Row no.:" << std::endl;
	cin>>r;
	std::cout << "Column no.:" << std::endl;
	cin>>c;
	int ans=eleposrc(r-1,c-1);
	cout<<ans;
}

