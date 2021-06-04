#include<iostream>
using namespace std;
/*
	
	- duyet mang\
	- ham(function)
	- them sua xoa
	- chuoi ky tu - string.h
	
	----------------
	<kieu_du_lieu> tenHam(danh sach tham so) {
		xu ly cong viec
	}
	chia 2 nhom kieu_du_lieu
	+) tra ve gia tri: int, long, byte, double, float, char, bool...
	+) khong tra ve gia tri: void
*/
//Khai bao nguyen mau
//int TinhTong(int a, int b);
//void ShowInfo(int n);
//tra ve gia tri

//Dinh nghia
int TinhTong(int a, int b){
//	int s = a + b;
//	return s;
	return a + b;
}
//khong tra ve gia tri
void ShowInfo(int n){
//	for(int i=0; i<n; i++)
//		cout << "Xin chao cac ban" << endl;
	if(n == 0)
		return;
	cout << "Tong = " << TinhTong(5, 4) << endl;
}

void changeNumber(int &a){
	cout << "n truoc khi bien doi: " << a << endl;
	a++;
	cout << "n sau khi bien doi: " << a << endl;
}

int main(){
	int a = 3;
	int b = 5;
	int n = 6;
//	ShowInfo(1);
//	int s = TinhTong(a, b);
//	cout << "s = " << s << endl;
	cout << "n truoc khi ham: " << n << endl;
	changeNumber(n);
	cout << "n sau khi goi ham: " << n << endl;
	return 0;	
}







ARRAY::operator-(){
	for(int i=0; i<n; i++)
		a[i] = -a[i];
	return *this;
}