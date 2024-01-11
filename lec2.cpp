#include <iostream>
using namespace std;

class car{
	public:
		int release_year;
		int id;
		char color;
		char model;
		char cmpn;
};

int main() {
 	int i;
 	car a[4];
 	
 	for(i=1; i<=4; i++){
 		cout<<"enter user id: ";
 		cin>>a[i].id;
 		cout<<"enter user release_year: ";
 		cin>>a[i].release_year;
 		cout<<"enter user model: ";
 		cin>>a[i].model;
 		cout<<"enter user color: ";
 		cin>>a[i].color;
 		cout<<"enter user cmpn: ";
 		cin>>a[i].cmpn;
 		
	 }
	 
	 for(i=1; i<=4; i++){
	 	cout<<"employe"<<i<<"id"<<a[i].id<<endl;
	 	cout<<"employe"<<i<<"release_year"<<a[i].release_year<<endl;
	 	cout<<"employe"<<i<<"model"<<a[i].model<<endl;
	 	cout<<"employe"<<i<<"color"<<a[i].color<<endl;
	 	cout<<"employe"<<i<<"cmpn"<<a[i].cmpn<<endl;
	 	
	 	
	 }
	 return 0;
}
 	
 	
