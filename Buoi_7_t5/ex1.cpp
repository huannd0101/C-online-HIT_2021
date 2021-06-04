#include<iostream>
#include<fstream> //file
using namespace std;

void ReadFromFile(char *fileName){
	ifstream f(fileName, ios::in);
	char s[255];
	
	while(!f.eof()){
		f.getline(s, 255, '|');
		cout << s << endl;
	}
	
	f.close();
}

void WriteToFile(char *fileName, char *data){
	ofstream f(fileName, ios::app);
	
	f << data << endl;
	
	f.close();
}

void WriteToFile(char *fileName, int *a, int n){
	ofstream f(fileName, ios::app);
	
	for(int i=0; i<n; i++){
		f << a[i] << " ";
	}
	f << endl;
	
	f.close();
}




int main(){
	//txt, DAT, jpg
//	ifstream f;
//	f.open("fileName1.txt", ios::in); //doc in
	
//	ifstream f("fileName1.txt", ios::in);
//	
//	char s[255];
//	f.getline(s, 255, '|');
//	cout << s << endl;
//	while(!f.eof()){
//		f.getline(s, 255, ' ');
//		cout << s << endl;
//	}
//	
//	f.close();
//	

//	ReadFromFile("fileName1.txt");
	//out: ghi de len
	//app: ghi bo sung
//	ofstream f("fileName3.txt", ios::app);
//	f << "Nguyen Dinh Huan 12312312312312312" << endl;
//	f << "123123123" << endl;
//	f.close();
	
//	WriteToFile("fileName4.txt", "Hello C++");
	int n=5;
	int a[] = {1, 2, 3, 4, 5};
	
//	WriteToFile("D:/fileName5.DAT", a, n);
	ReadFromFile("D:\\Node JS\\Buoi_1\\ex3.txt");
//	ReadFromFile("D:/Node JS/Buoi_1/ex3.txt");

	FILE *f;

	return 0;
}
