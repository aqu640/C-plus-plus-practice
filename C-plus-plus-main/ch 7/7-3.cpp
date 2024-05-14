#include <iostream>
using namespace std;

int pow(int a, int n){
    if(n==0) 
		return 1;
    int res = pow(a, n/2);
    
    if(n%2==0) 
		return res*res;
	else
	    return res*res*a;
}

int main(){
	int a, n;
	cin >> a >> n ;
    cout << pow(a, n);
}