#include<iostream>
using namespace std;
/*
	-- tham tri va tham chieu
	thay doi bien minh truyen vao: thay doi gia tri, nhap xuat
*/

void ShowInfo(int a){
	cout << "a = " << a << endl;
}

void ThayDoi(int &a){
	cout << "a truoc khi thay doi: " << a << endl;
	a++;
	cout << "a sau khi thay doi: " << a << endl;
}

void NhapN(int &n){
	cin >> n;
}

int main(){
	int a = 5;
	cout << "a truoc khi goi ham: " << a << endl;
	ThayDoi(a);
	cout << "a sau khi goi ham: " << a << endl;
//	int m;
//	NhapN(m);
//	cout << m;
	return 0;
}
