//Duong Hai
#include <bits/stdc++.h>
using namespace std;
long dayso(int n){
	if(n==1||n==2)
		return 1;
	return 
		dayso(n-1)+2*dayso(n-2);
}
//Cuong
int day(int n){
	if(n<=2) 
		return 1;
	return 
		day(n-2)*2+day(n-1);
}

int main(){
	int n;
	cin>>n;
	//1 1 3 5 11 21 43
	cout << "Duong Hai: "<<dayso(n) << endl;
	
	cout << "Cuong: "<<day(n) << endl;
}

/*

	xn = t?ng s? tru?c +1n?u n l?,
	= t?ng s? tru?c n?u n chan

	n l? s? sau b?ng s? trc nhân 2 c?ng 1
	n ch?n s? sau b?ng s? trc nhân 2 tr? 1
*/
