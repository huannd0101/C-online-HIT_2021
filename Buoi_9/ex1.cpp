#include<fstream>
#include<iostream>
#define N 5
using namespace std;

struct SinhVien {
	char hoTen[30];
	int tuoi;
	
	void Nhap(){
		cout << "Nhap ho ten: "; fflush(stdin);	gets(hoTen);
		cout << "Nhap tuoi  : "; cin >> tuoi;
	}
};

void ReadFile(const char *fileName){
//	fstream
//	ofstream
	fstream f(fileName, ios::in);
//	f.open(fileName, ios::in);
	
	char s[255];
	while(!f.eof()){
		f.getline(s, 255);
		cout << s << endl; //ghi de toan tu << operator<<(ostream)
	}
	
	f.close();
}

void WriteFile(const char *fileName, SinhVien a){
	fstream f(fileName, ios::out);
	
	f << a.hoTen << " " << a.tuoi << endl;
	
	f.close();
}

typedef SinhVien *TRO;

int main(){
	TRO a;
	const int B = 5;
	
	cout << B;
	
	B = 6;
	
	cout << B; 
//	a.Nhap();
	
//	WriteFile("file2.txt", a);
//	
//	ReadFile("file2.txt");
	
	N = 6;
	cout << N;
	
	return 0;
}
