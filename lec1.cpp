#include <iostream>
using namespace std;

class Employe{
	public:
		int age;
		int id;
		char name[100];
		char role;
		int salary;
		double exp;
		char city;
		char cmpn;
};

int main() {
 	int i;
 	Employe a[5];
 	
 	for(i=1; i<=5; i++){
 		cout<<"enter user id: ";
 		cin>>a[i].id;
 		cout<<"enter user age: ";
 		cin>>a[i].age;
 		cout<<"enter user name: ";
 		cin>>a[i].name;
 		cout<<"enter user role: ";
 		cin>>a[i].role;
 		cout<<"enter user salary: ";
 		cin>>a[i].salary;
 		cout<<"enter user exp: ";
 		cin>>a[i].exp;
 		cout<<"enter user city: ";
 		cin>>a[i].city;
 		
	 }
	 
	 for(i=1; i<=5; i++){
	 	cout<<"employe"<<i<<"id"<<a[i].id<<endl;
	 	cout<<"employe"<<i<<"name"<<a[i].name<<endl;
	 	cout<<"employe"<<i<<"age"<<a[i].age<<endl;
	 	cout<<"employe"<<i<<"role"<<a[i].role<<endl;
	 	cout<<"employe"<<i<<"salary"<<a[i].salary<<endl;
	 	cout<<"employe"<<i<<"exp"<<a[i].exp<<endl;
	 	cout<<"employe"<<i<<"city"<<a[i].city<<endl;
	 	cout<<"employe"<<i<<"cmpn"<<a[i].cmpn<<endl;
	 	
	 	
	 }
	 return 0;
}
 	
 	
