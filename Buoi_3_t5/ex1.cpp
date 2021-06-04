#include<iostream>
/*
	function:
	+) tra ve gia tri: byte, int, long, char, bool, float, double...
	+) khong tra ve gia tri: void
	<Kieu_tra_ve> tenHam(Danh sach tham so) {
		thuc hien cong viec
		return;
	}
	namSinh
*/

using namespace std;
//void XuatMang(int *a, int n)
void XuatMang(int a[], int n){
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
}

int TinhTong(int a, int b = 0){
//	int s = a + b;
//	return s;
	return a + b;
}

void ShowInfo(int a){
	if(a == 2)
		return;
	cout << "s = " << TinhTong(4, 9) << endl;
	if(a == 3)
		return;
	cout << "s = " << TinhTong(4, 9) << endl;
}

int main(){
	int a[] = {1, 2, 3, 4, 5};
	int n = 5;
	
//	XuatMang(a, n);	
//	cout << "\nXuat mang lan 2" << endl;
	
//	XuatMang(a, n);	
	int a1 = 2;
	int a2 = 3;
//	int s = TinhTong(a1, a2);
//	cout << "s = " << TinhTong(a1, a2) << endl;
	ShowInfo(3);
	
	return 0;
}
