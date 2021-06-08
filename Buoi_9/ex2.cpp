#include<fstream>
#include<iostream>
#include<stdlib.h>
//#include<bits\stdc++.h>
using namespace std;

double findMax(double *a, int n){
	double max = a[0];
	
	for(int i=1; i<n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	
	return max;
}

void DeleteEle(double *&a, int &n, int pos){
	for(int i=pos-1; i<n-1; i++){
		a[i] = a[i+1];
	}
	n--;
	a = (double*)realloc(a, n*sizeof(double));
}

void WriteFile(const char *fileName, double *&a, int &n){
	fstream f(fileName, ios::out);
	double max = findMax(a, n);
	int cnt = 0;
	
	for(int i=0; i<n; i++){
		if(a[i] == max){
			DeleteEle(a, n, i+1);
			i--;
			cnt++;
		}
	}
	
	for(int i=0; i<n; i++){
		f << a[i] << " ";
	}
	f << "\nSo phan tu da xoa la: " << cnt << " phan tu";
	
	f.close();
}

int main(){
	int n;
	cin >> n;
	
	double *a = new double[n];
	
	for(int i=0; i<n; i++){
		cout << "Nhap a[" << i << "] = ";
		do {
			cin >> a[i];
			if(a[i] < 0)
				cout << "Nhap lai a[" << i << "] = ";
		}while(a[i] < 0);
	}
	
	WriteFile("file3.txt", a, n);
	
	return 0;
}
