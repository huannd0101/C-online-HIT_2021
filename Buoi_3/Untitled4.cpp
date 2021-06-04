#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
//	"Nguyen Dinh Huan"
//	char name[255];
//	int age;
//	long msv;
	//nhap chuoi ky tu
//	cin >> str;
//	cout << "Nhap msv: ";
//	cin >> msv;
//	cout << "Nhap ten: ";
	//xoa bo nho dem
//	fflush(stdin);
//	cin.ignore();
//	gets(name);
//	cout << "nhap tuoi: ";
//	cin >> age;
//	
//	fgets(str, 255, stdin);
	
	//xuat chuoi
//	puts(str);

	/*
		-strcpy: copy chuoi
		-strcat: nuoi chuoi
		-strcmp: so sanh
		-strlen: tra ve do dai chuoi\
		-strlwr
		-strupr
	*/

	//-------------
//	char name[255]; //'\0'
//	char name2[255];
//	gets(name);
//	cout << "do dai: " << strlen(name) << endl;
//	strcpy(name2, name);
//	cout << name2 << endl;
//	gets(name2);
//	strcat(name, " ");
//	strcat(name, name2);
//	cout << "name 1: " <<name << "\nName 2: " << name2 << endl;
//	3 - 4 = -1;
//	name - name2; = 0
//	int temp = stricmp(name, name2);
//	int temp = strcmpi(name, name2); //ignore
//	if(temp == 0)
//		cout << "name = name2";
//	else if(temp < 0)
//		cout << "name < name2";
//	else 
//		cout << "name > name2";
//	char name[] = "Nguyennn Dinh Huan";
	char name[255];
	strcpy(name,"Nguyen Dinh Huan");
	for(int i=0; i<strlen(name); i++){
		while(name[i] == 'n' && i < strlen(name)){
			for(int j=i; j<strlen(name)-1; j++)
				name[j] = name[j+1];
			name[strlen(name)-1] = '\0';
		}
	}
	
//	strupr(name);
	strlwr(name);
	
	cout << name;
	return 0;
}
