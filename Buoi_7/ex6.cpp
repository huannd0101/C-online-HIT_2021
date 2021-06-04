#include<iostream>
#include<fstream>
using namespace std;

//void WriteToFile(char *fileName, char *data){
//	ofstream f(fileName, ios::app);
//	f << data << endl;
//	f.close();
//}
void WriteToFile(char *fileName, int *a, int n){
	ofstream f(fileName, ios::app);
	
	for(int i=0; i<n; i++){
		f << a[i] << " ";
	}
	
	f.close();
}

void ReadFromFile(char *fileName){
	ifstream f(fileName, ios::in);
	char s[255];
	while(!f.eof()){
		f.getline(s, 255);
		cout << s << endl;
	}
	f.close();	
}


int main(){
	int n;
	cout << "Nhap n = ";
	cin >> n;
	int *a = new int[n];
	
	for(int i=0; i<n; i++){
		cout << "nhap a[" << i << "] = ";
		cin >> a[i];
	}
	
	WriteToFile("ABC2014.TXT", a, n);
	ReadFromFile("ABC2014.TXT");
	
	return 0;
}
