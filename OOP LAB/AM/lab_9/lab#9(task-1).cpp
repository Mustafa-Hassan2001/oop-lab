#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class GenerateID{
	public:
	virtual int generateID()=0;
};

class GenerateAcId: public GenerateID{
	public:
	int generateID(){
	fstream file1,file2;
	int ID=0;
	string name="",Department="";
	int op=1;
	file1.open("Account.txt",ios_base::app);
	file2.open("Account.txt",ios_base::in);
	while(op!=0){
	while(!file2.eof()){
	file2>>ID>>name>>Department;}	
	if(ID==0){
	ID=1;
	}
	else{
	ID+=1;
	}
	cout<<"Account ID is Generated : "<<ID<<endl;cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter department : ";
	cin>>Department;
	file1<<ID<<" "<<name<<" "<<Department;
	cout<<"Do you want to store data again : \n1. for yes\n0. for no : ";
	cin>>op;}
	file1.close();
	file2.close();
	return ID;
	}
	};

class GenerateTraId: public GenerateID{
	public:
	int generateID(){
	fstream file1,file2;
	int ID=0,op=1;
	string name="",Department="";
	file1.open("Textf.txt",ios_base::app);
	file2.open("Textf.txt",ios_base::in);
	while(op!=0){
		while(!file2.eof()){
		file2>>ID>>name>>Department;
		}	
		if(ID==0){
		ID=1;
		}
		else{
		ID+=1;
		}
	restore:	
	cout<<"Transaction ID is Generated : "<<ID<<endl;
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter department : ";
	cin>>Department;
	file1<<ID<<" "<<name<<" "<<Department;
	cout<<"Do you want to store data again : \n1. for yes\n0. for no : ";
	cin>>op;
	if(op==1){
		goto restore;
	}
	else if(op==2){
		cout<<"Thank you for using ";
		break;
	}
	}
	file1.close();
	file2.close();
	return ID;
	}
};

int main(){
	GenerateID *bptr;
	GenerateAcId c;
	GenerateTraId d;
	bptr=&d;
	int a=bptr->generateID();
	bptr=&c;
	int b=bptr->generateID();
	return 0;
	}	
