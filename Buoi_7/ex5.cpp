#include<iostream>
#include<fstream>
using namespace std;

int main(){
	/*
		-ghi file
		out: ghi de
		app: ghi tiep vao
		-doc file
		in: doc
	*/
//	ofstream f("C:/Users/Huan/Desktop/Buoi_7/file1.txt", ios::out);
//	ofstream f("C:\\Users\\Huan\\Desktop\\Buoi_7\\file1.txt", ios::app);
//	ofstream f("D:\\file2.txt", ios::out);
	char s[255];
//	gets(s);
//	f << s << endl;
//	f.close();
//	
	//doc file
	ifstream f1("testFile.txt", ios::in);
	while(!f1.eof()){
		f1.getline(s, 255);
		cout << s << endl;
	}
	f1.close();	
}
