#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
//	ifstream -- doc file
	ifstream f("testFile.txt", ios::in);
//	ifstream f("testFile.DAT", ios::in);
//	ifstream f("android2.jpg", ios::in);
	char s[255];
	while(!f.eof()){
//		f.getline(s, 255, ' ');
		f.getline(s, 255);	
		cout << s << endl;
	}
	
	
//	ofstream -- ghi file
	
	
}
