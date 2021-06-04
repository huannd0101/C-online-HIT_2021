//bài 1
#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

struct SinhVien {
	char hoTen[30];
	int tuoi;
	float diemToan, diemHoa, diemLy;
	
	void nhap(){
		cout << "Nhap ho ten: "; 
		fflush(stdin);
		gets(hoTen);
		cout << "Nhap tuoi: ";
		cin >> tuoi;
		cout << "Nhap diem toan: ";
		cin >> diemToan;
		cout << "Nhap diem ly: ";
		cin >> diemLy;
		cout << "Nhap diem hoa: ";
		cin >> diemHoa;
	}
	
	void xuat(){
		cout << setw(30) << left << hoTen << setw(15) << tuoi << setw(15) << diemToan 
			<< setw(15) << diemLy << setw(15) << diemHoa << ((diemToan+diemHoa+diemLy)/3) << endl;
	}
};

	void nhap(SinhVien &sv){
		cout << "Nhap ho ten: "; 
		fflush(stdin);
		gets(sv.hoTen);
		cout << "Nhap tuoi: ";
		cin >> sv.tuoi;
		cout << "Nhap diem toan: ";
		cin >> sv.diemToan;
		cout << "Nhap diem ly: ";
		cin >> sv.diemLy;
		cout << "Nhap diem hoa: ";
		cin >> sv.diemHoa;
	}
	
	void xuat(SinhVien &sv){
		cout << setw(30) << left << sv.hoTen << setw(15) << sv.tuoi << setw(15) 
			<< sv.diemToan << setw(15) << sv.diemLy << setw(15) << sv.diemHoa 
			<< ((sv.diemToan+sv.diemHoa+sv.diemLy)/3) << endl;
	}

int main(){
	int n=2;
	SinhVien *a = new SinhVien[n];
		
//	for(int i=0; i<n; i++){
//		cout << "nhap thong tin sinh vien " << i + 1 << endl;
//		a[i].nhap();
//	}
//	
//	cout << setw(30) << left << "Ho ten" << setw(15) << "Tuoi" << setw(15) << "Diem Toan" 
//			<< setw(15) << "Diem Ly" << setw(15) << "Diem Hoa" << setw(15) << "Diem TB"
//			<< endl;
//	for(int i=0; i<n; i++){
//		a[i].xuat();
//	}

	
	for(int i=0; i<n; i++){
		cout << "nhap thong tin sinh vien " << i + 1 << endl;
		nhap(a[i]);
	}
	
	cout << setw(30) << left << "Ho ten" << setw(15) << "Tuoi" << setw(15) << "Diem Toan" 
			<< setw(15) << "Diem Ly" << setw(15) << "Diem Hoa" << setw(15) << "Diem TB"
			<< endl;
	for(int i=0; i<n; i++){
		xuat(a[i]);
	}
	
	return 0;
}
