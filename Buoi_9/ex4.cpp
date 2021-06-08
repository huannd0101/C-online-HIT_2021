#include<iostream>
#include<cmath>
using namespace std;

//de 95

void Y_a(double &x, double &y){
	cout << "Nhap so thuc x, y: ";
	do {
		cin >> x >> y;
		if(x >= y)
			cout << "Nhap lai so thuc x, y: ";
	}while(x >= y);
}

double Y_b(double x, double y){
	double P;
	if(x < y){
		P = exp(fabs(x)) + fabs(y) + sqrt(y-x);
	}else {
		P = 1;
	}
	return P;
}

double Y_c(double x, int n){
	double s = 2020 * x;
	
	//cach 1: sd 1
//	for(i=2; i<=n; i++){
//		s += pow(x, i) / pow(i, i);
//	}
	
	//cach 1: sd 1
	double tu = x, mau;
	for(i=2; i<=n; i++){
		tu *= x;
		mau = 1;
		for(int j=1; j<=i; j++){
			mau *= i;
		}
		s += tu / mau;
	}
	
	return s;
}

int main(){
	
	
	
	
	return 0;
}
