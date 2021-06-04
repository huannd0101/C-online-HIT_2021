#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
//a = (int*)realloc(a, (n+2)*sizeof(int));

void InputInt(int &n){
	cout << "Nhap n = ";
	do {
		cin >> n;
		if(n <= 2 || n >= 50)
			cout << "Nhap lai n = ";
	}while(n <= 2 || n >= 50);
}

void Input(int *a, int n){
	for(int i=0; i<n; i++){
//		cout << "Nhap a[" << i <<"] = ";
//		cin >> a[i];
		cin >> *(a+i);
	}
}

void Output(int *a, int n){
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
}

//bubble sort
void BubbleSort(int *a, int n){
	for(int i=0; i<n-1; i++){
		for(int j=n-1; j>i; j--){
			if(a[j-1] > a[j]){
				int temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
			}
		}
	}
}

//snt
bool IsPrime(int n){
	for(int i=2; i<=sqrt(n); i++)
		if(n % i == 0)
			return false;
	return n > 1;
}
//tong
int Sum(int n){
	int s = 0; 
	while(n>0){
		s += n % 10;
		n /= 10;
	}
	return s;
}
//xóa
void DeleteEle(int *&a, int &n, int pos){
	for(int i=pos-1; i<n-1; i++)
		a[i] = a[i+1];
	n--;	
	a = (int*)realloc(a, n*sizeof(int));
}

void DeleteAllPrime(int *&a, int &n){
	for(int i=0; i<n; i++){
		//Sum(a[i]) 
		int s = Sum(abs(a[i]));
		if(IsPrime(s)){
			DeleteEle(a, n, i+1);
			i--;
		}
//		while(IsPrime(s) && i < n){
//			DeleteEle(a, n, i+1);
//		}
	}
}

int main(){
	int *a, n;
	//
	InputInt(n);
	a = new int[n];
	
	Input(a, n);
	
	BubbleSort(a, n);
	
	DeleteAllPrime(a, n);
	
	Output(a, n);
	
	delete a;
	return 0;
}
