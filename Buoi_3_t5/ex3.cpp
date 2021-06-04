#include<iostream>
using namespace std;
/*
	them, xoa trong mang 1 chieu	
	-them
	+b1: lui tat ca cac phan tu sau vi tri chen ve sau 1 o
	+b2: gan gia tri vao vi tri chen
	+b3: cap so phan tu
	
	-xoa
	+b1: dich chuyen cac phan tu tu vi tri xoa len truoc 1 o
	+b2: cap so phan tu
*/
void XoaPhanTu(int a[], int &n, int pos){
	for(int i=pos-1; i<n; i++){
		a[i] = a[i+1];
	}
	n--;
}

void ChenPhanTu(int *a, int &n, int pos, int val){
	for(int i=n; i>= pos-1; i--){
		a[i] = a[i-1];
	}
	a[pos-1] = val;
	n++;
}

void NhapMang(int *a, int n){
	for(int i=0; i<n; i++){
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

void XuatMang(int a[], int n){
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
}

int main(){
	int a[] = {6, 2, 4, 8, 5};
	int n = 5;
	
	
	cout << "Mang vua nhap la: ";
	XuatMang(a, n);
	
	//chen
	int pos = 3;
	int val = 10;
//	for(int i=n; i>= pos-1; i--){
//		a[i] = a[i-1];
//	}
//	a[pos-1] = val;
//	n++;
//	ChenPhanTu(a, n, pos, val);
//	cout << "\nMang sau khi chen la: ";
//	XuatMang(a, n);

	//xoa
//	int pos = 2;
//	for(int i=pos-1; i<n; i++){
//		a[i] = a[i+1];
//	}
//	n--;
//	XoaPhanTu(a, n, pos);
//	cout << "\nMang sau khi xoa la: ";
//	XuatMang(a, n);

	//Xóa tat ca các phan tu chan trong mang
	
	
//	Hoàng Mai
	
	
	
	
	
	
	return 0;
}
