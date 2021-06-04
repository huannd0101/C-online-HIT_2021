#include<iostream>
using namespace std;

struct SinhVien {
	char hoTen[30];
	int tuoi;
	
	void nhap(){
		cout << "Nhap ten: ";
		fflush(stdin);
		gets(hoTen);
		cout << "Nhap tuoi: ";
		fflush(stdin);
		cin >> tuoi;
	}
	
	void xuat(){
		cout << hoTen << " - " << tuoi << endl;
	}
};

int main(){
//	SinhVien *sv;
	int n;
	cin >> n;
//	sv = new SinhVien[n];
	SinhVien sv[50];
	fflush(stdin);
	
	for(int i=0; i<n; i++){
		cout << "\nNhap phan tu thu " << i + 1 << endl;
		sv[i].nhap();
	}
	
	for(int i=0; i<n; i++){
		sv[i].xuat();
	}
	
	delete [] sv;	
	return 0;
}

//
//--xoa -> n--; thu hoi lai
//--them -> n++; cap phat lai
