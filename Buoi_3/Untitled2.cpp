#include<iostream>
using namespace std;
/*
	- nhap xuat
	- muon thay doi gia tri 
*/
void NhapMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

void XuatMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout << a[i];
	}
	cout << endl;
}

void Insert(int a[], int &n, int pos, int val){
	for(int i=n; i>pos-1; i--){//day cac gia tri tu vi tri chen 1 o
		a[i] = a[i-1];
	}
	a[pos-1] = val;
	n++;	
}

void Delete(int a[], int &n, int pos){
	for(int i=pos-1; i<n-1; i++){
		a[i] = a[i+1];
	}
	n--;
}

int main(){
	int n = 5;
	int a[100] = {4, 7, 5, 6, 9};
//	cout << "Nhap n = ";
//	cin >> n;
	
//	NhapMang(a, n);
	cout << "Mang vua nhap la: ";
	XuatMang(a, n);
	
//	int pos = 3;
//	int val = 10;
	
//	for(int i=n; i>pos-1; i--){//day cac gia tri tu vi tri chen 1 o
//		a[i] = a[i-1];
//	}
//	
//	a[pos-1] = val;
//	n++;
//	Insert(a, n, pos, val);

	int pos = 2;
	for(int i=pos-1; i<n-1; i++){
		a[i] = a[i+1];
	}
	n--;
//	Delete(a, n, pos);
	cout << "Mang vua xoa la: ";
	XuatMang(a, n);
	
	//xoa tat ca cac so chan trong mang
	
	
	
	return 0;
}
