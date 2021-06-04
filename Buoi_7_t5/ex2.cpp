#include<iostream>
using namespace std;

struct Student {
	char name[30];
	int age;
	//cach 2: phuong thuc - hàm
	Nhap(){
		cout << "nhap ten sv: ";
		fflush(stdin);
		gets(name);
		cout << "Nhap tuoi sv: ";
		cin >> age;
	}
};

void Nhap(Student &sv){
	cout << "nhap ten sv: ";
	gets(sv.name);
	cout << "Nhap tuoi sv: ";
	cin >> sv.age;
}

int main(){
	//student

	Student sv1, sv2, sv3, sv4;
	
//	cout << "nhap ten sv1: ";
//	gets(sv1.name);
//	cout << "Nhap tuoi sv1: ";
//	cin >> sv1.age;
//	

//	Nhap(sv1);
//	
//	sv1.Nhap();
//	cout << sv1.name << " - " << sv1.age << endl;
	int n=2;
	Student *a1 = new Student[n];
	Student a[20];
	for(int i=0; i<n; i++){
		cout << "\nNhap thong tin sinh vien " << i + 1 << endl;
		a[i].Nhap();
	}
	
	for(int i=0; i<n; i++){
		cout << "\nThong tin sinh vien " << i + 1 << endl;
		cout << a[i].name << " - " << a[i].age << endl;
	}
	
	return 0;
}
