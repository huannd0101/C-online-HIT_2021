#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int Sum(char *ptr){
	int s = 0;
	for(int i=0; i<strlen(ptr); i++){
		if(ptr[i] >= '0' && ptr[i] <= '9'){
			s += (int)ptr[i] - 48;
		}
	}
	return s;
}

void DeleteEle(char *&a, int pos){
	for(int i=pos-1; i<strlen(a)-1; i++)
		a[i] = a[i+1];
	a[strlen(a) - 1] = '\0';	
	a = (char*)realloc(a, (strlen(a)-1)*sizeof(char));
}

void DeleteAllNumber(char *&a){
	for(int i=0; i<strlen(a); i++){
		if(a[i] >= '0' && a[i] <= '9'){
			DeleteEle(a, i+1);
			i--;
		}
	}
}

void DeleteAllSpace(char *&a){
	while(a[0] == ' '){
		DeleteEle(a, 1);
	}
	for(int i=1; i<strlen(a)-1; i++){
		if(a[i] == ' ' && a[i+1] == ' '){
			DeleteEle(a, i+1);
			i--;
		}
	}
	DeleteEle(a, strlen(a));
}

void FormatChar(char *a){
	//'Nguyen Dinh Huan'
	strlwr(a);
	
	a[0] -= 32; 
	
	for(int i=1; i<strlen(a)-1; i++){
		if(a[i] == ' ' && a[i+1] != ' '){
			a[i+1] -= 32;
		}
	}
	
}

int main(){
	//
	char *ptr = new char;
	
	gets(ptr);
	
	cout << ptr << endl;
	
	cout << "length = " << Sum(ptr) << endl;
	DeleteAllNumber(ptr);
	
	cout << "ptr = " << ptr << endl;
	
	DeleteAllSpace(ptr);
	cout << "ptr = " << ptr << endl;
	
	FormatChar(ptr);
	
	cout << "ptr sau cung: " << ptr;
	delete ptr;
	return 0;
}
