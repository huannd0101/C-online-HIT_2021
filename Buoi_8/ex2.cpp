//bài 2
#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<fstream>

using namespace std;

void nhapMang(int *a, int n){
	for(int i=0; i<n; i++)
		cin >> a[i];
}

void WriteToFile(char *fileName, int *a, int n){
	ofstream f(fileName, ios::app);
	
	for(int i=0; i<n; i++){
		f << a[i] << " ";
	}
	f << endl;
	
	f.close();
}

void ReadFromFile(char *fileName){
	ifstream f(fileName, ios::in);
//	f.open(fileName, ios::in);
	char s[255];
	while(!f.eof()){
		f.getline(s, 255);
		cout << s << endl;
	}
	
	f.close();
}

void BubbleSort(int *a, int n){
	for(int i=0; i<n-1; i++){
		for(int j=n-1; j>i; j--){
			if(a[j-1] >  a[j]){
				int temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
				
//				a[j-1]^=a[j]^=a[j-1];
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	int *a = new int[n];
	
	nhapMang(a, n);
	WriteToFile("ABC01.TXT", a, n);
	
	BubbleSort(a, n);
	WriteToFile("ABC01.TXT", a, n);
	
	ReadFromFile("ABC01.TXT");
	
	return 0;
}
