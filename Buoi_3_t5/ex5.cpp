#include<iostream>
#include<string.h>
using namespace std;

void XuatMang(int a[], int n){
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
	cout << endl;
}

void XuatMang(char a[], int n){
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
}
	
/*
	- strlen(): tra ve do dai
	- strcpy():	copy
	- strcat():	nuoi chuoi
	- strupr():	chuyen chu thuong ve viet hoa
	- strlwr(): chuyen ve chu viet thuong
	- strcmp(): so sanh 2 chuoi(khong phan viet hoa thuong)
		stricmp()	ignore
		strcmpi()
*/
	
int main(){
	
//	char str[] = "Nguyen Dinh Huan";
//	char str[5];
//	cout << "Nhap chuoi: ";
//	gets(str);
//	fgets(str, 5, stdin);
	
//	cout << str << endl;
//	puts(str);
	
	//'\0'
	
//	cout << "Do dai: " << strlen(str) << endl;
	
//	char str2[255];
	//a = 2;
//	strcpy(str2, "20 tuoi");
	
//	cout << "str2: " << str2 << endl;
	
	//a += 2;
//	strcat(str, " ");
//	strcat(str, str2);
	
//	strlwr(str); //viet thuong
//	strupr(str);//viet hoa
//	cout << str;

//	char str[255], str2[255];
	
//	int age;
//	cout << "nhap tuoi: ";
//	cin >> age;
//	cout << "Nhap ten: ";
//	fflush(stdin);
//	cin.ignore();
//	gets(str);
	
//	cout << str << " - " << age;
	
	
	
	
//	gets(str);
//	gets(str2);
	
	
	//-1 0 1
//	2-5 < 0
//	2 - 2 = 0
//	int temp = strcmpi(str, str2);
//	if(temp < 0)
//		cout << str << " < " << str2 << endl;
//	else if(temp > 0)
//		cout << str << " > " << str2 << endl;
//	else 
//		cout << str << " = " << str2 << endl;
	
	
	char str[255];
	strcpy(str, "Nguyennnn Dinh Huan");
	
	for(int i=0; i<strlen(str); i++){
		while(str[i] == 'n' && i < strlen(str)){
			for(int j=i; j<strlen(str) - 1; j++){
				str[j] = str[j+1];
//				n--;
			}
			str[strlen(str) - 1] = '\0';
		}
	}
	strrev(str);
	cout << str;
	
	return 0;
}
