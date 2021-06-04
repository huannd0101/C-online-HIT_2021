#include<iostream>
using namespace std;

// int, long, float, double, char, bool, byte... un

/*
	struct ten_struct {
		
	};
*/

//struct Person: gom ten, tuoi, diaChi, gioiTinh

struct SinhVien {
	char hoTen[30];
	int tuoi;
	double diem;
};

int main(){
	SinhVien sv;
	
	cout << "Nhap ten: ";
	gets(sv.hoTen);
	cout << "Nhap tuoi: ";
	fflush(stdin);
	cin >> sv.tuoi;
	
	cout << sv.hoTen << " - " << sv.tuoi << endl;
	
	return 0;
}
