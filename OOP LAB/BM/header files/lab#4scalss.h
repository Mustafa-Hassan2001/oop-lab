#include <iostream>
#include<string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//========= HEADRER FILE ===============
	class employee{
	int ID;
	string Name;
	public:
	employee(int ID,string name):ID(ID),Name(Name){
	set_ID();
	set_Name();}
	private:
	void set_ID(){
	ID=ID;	}
	int get_ID(){
	return ID;}
	void set_Name(){
	Name=Name;}
	string get_Name(){
	return Name;}
	public:
	void printdata(){
	cout<<"Employee ID:"<<get_ID()<<endl;
	cout<<"Employee Name:"<<get_Name()<<endl;}
	};

