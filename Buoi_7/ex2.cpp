#include<iostream>
using namespace std;

struct SinhVien {
	char hoTen[30];
	int tuoi;
	double diem;
};

int main(){
	SinhVien sv[50];
	int n;
	cin >> n;
	fflush(stdin);
	
	for(int i=0; i<n; i++){
		cout << "\nNhap phan tu thu " << i + 1 << endl;
		cout << "Nhap ten: ";
		fflush(stdin);
		gets(sv[i].hoTen);
		cout << "Nhap tuoi: ";
		fflush(stdin);
		cin >> sv[i].tuoi;
	}
	
	for(int i=0; i<n; i++){
		cout << sv[i].hoTen << " - " << sv[i].tuoi << endl;
	}
	
	return 0;
}
