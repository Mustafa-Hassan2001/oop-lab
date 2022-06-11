//#include <iostream>
//
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//int main(int argc, char** argv) {
//	
//	
//	return 0;
//}
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	struct student{
		
		char id[200];
		char name[100];
		float amount,Totalamount,newamount;
	};
		student getdata();
		void addamount(student &gsm);
		void printdata(student *psd);
		


int main(int argc, char** argv) {
 		student stud;
 		stud = getdata();
 		addamount(stud);
		printdata(&stud);
			
	return 0;
}
student getdata(){
	student Data;
	cout<<"Enter ID : ";
	cin>>Data.id,20;
	cout<<"Enter Name : ";
	cin.get();
	cin.getline(Data.name,40);
	cout<<"Enter Amount:";
	cin>>Data.amount;
	if(Data.amount != 60000){
		cout<<"The student of 1st Semester has to register at least of 5 courses\n";	
		cout<<"Add 1 more course regiatration fee that is 12000/= rupees :";
		cin>>Data.newamount;
//		addamount();
	}
	
	Data.Totalamount=Data.amount;
	
	return Data;
	
}
void addamount(student &gsm){
//	int newamount;
	gsm.Totalamount += 12000;
}

void printdata(student *psd){
	cout<<"\nID:"<<psd->id<<endl;
	cout<<"Name:"<<psd->name<<endl;
	cout<<"Total-Marks:"<<psd->Totalamount<<endl;
	
}

