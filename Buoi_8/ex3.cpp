#include<iostream>

using namespace std;

/*
	-B1: ÐK dung(TH suy bien)
	-B2: Tim bai toan con
*/

//n! = n*(n-1)*(n-2)*...*1
//(n-1)! = (n-1)*(n-2)*...*1

//1 1 2 3 5 8 13
int fibo(int n){
	if(n == 1 || n == 2)
		return 1;
	return fibo(n-1) + fibo(n-2);
}



int gt(int n){
	if(n==1)
		return 1;
	return n*gt(n-1);
}

int main(){
	int n; 
	cin >> n;
//	int s = 1;
//	for(int i=n; i>=1; i--){
//		s *= i;
//	}
//	cout << s;

	
	
	return 0;
}
