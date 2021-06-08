#include<iostream>
#include<cmath>
using namespace std;

//Ðe 95

double findMin(double *a, int n){
	int min = -1;
	
	for(int i=0; i<n; i++){
		if(a[i] > 0){
			min = a[i];
			break;
		}
	}
	
	if(min == -1){
		return -1;
	}else {
		for(int i=0; i<n; i++){
			if(min > a[i] && a[i] > 0){
				min = a[i];
			}
		}
	}
	
	return min;
}

bool Y_e(double *a, int n){
	//mang duong
	for(int i=0; i<n; i++){
		if(a[i] < 0){
			return false;
		}
	}
	//2 phan tu lien ke > 5
	for(int i=0; i<n-1; i++){
		if((a[i] + a[i+1]) <= 5){
			return false;
		}
	}
	
	return true;
}

int main(){
	double yD = findMin(a, n);
	if(yD == -1){
		cout << "Khong co so duong" << endl;
	}else {
		cout << "kq = " << yD << endl;
	}
	
	return 0;
}
