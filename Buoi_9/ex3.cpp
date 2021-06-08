#include<iostream>
#include<cmath>
using namespace std;

void Y_a(int &n){
	n++;
//	n = n + 1;
//	n += 1;
//	n -= -1;
}

double Y_b(int n, double x){
	double s = 0;
	
	if(n > 2){
		//cach 1:
//		s = sqrt(2019);
//		for(int i=1; i<=n; i++){
//			s += pow((x + 1), i);	
//		}

		//cach 2:
		s = sqrt(2019);
		double temp = 1;
		for(int i=1; i<=n; i++){
			temp *= (x + 1);
			s += temp;
		}
	}else {
		s = fabs(n*x);
	}
	
	return s;
}

double Y_c(int n, double x){
	double s = 2020 * exp(fabs(x)) + 1;
	
	for(int i=1; i<=n; i++){
		s += 3*i;
	}
	
	return s;
}

int main(){
	int n = 5;
	double x = 2;
	
//	Y_a(n);
//	Y_a(n);
//	Y_a(n);
	//hoac
	for(int i=1; i<=3; i++)
		Y_a(n);
	
	cout << "kq = " << Y_b(n, x) / Y_c(n, x);
	
	return 0;
}
