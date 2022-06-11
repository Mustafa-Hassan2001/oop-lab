#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	struct student{
		char id[200];
		char name[100];
		float c1,c2,c3,c4,TotalMarks;
	};
		student getdata();
		void gracemarks(student &gsm);
		void printdata(student *psd);
		


int main(int argc, char** argv) {
 		student stud;
 		stud = getdata();
// 		gracemarks(stud);
		printdata(&stud);
			
	return 0;
}
student getdata(){
	student Data;
	cout<<"Enter ID : ";
	cin>>Data.id,20;
	cout<<"Enter Name : ";
	cin>>Data.name,20;
	cout<<"Enter C1 Marks : ";
	cin>>Data.c1;
	cout<<"Enter C2 Marks : ";
	cin>>Data.c2;
	cout<<"Enter C3 Marks : ";
	cin>>Data.c3;
	cout<<"Enter C4 Marks : ";
	cin>>Data.c4;
	Data.TotalMarks=Data.c1+Data.c2+Data.c3+Data.c4;
	return Data;
	
}
void garcemarks(student &gsm){
	gsm.TotalMarks +=10;
}

void printdata(student *psd){
	cout<<"ID:"<<psd->id<<endl;
	cout<<"Name:"<<psd->name<<endl;
	cout<<"C1-marks:"<<psd->c1<<endl;
	cout<<"C2-marks::"<<psd->c2<<endl;
	cout<<"C3-marks::"<<psd->c3<<endl;
	cout<<"C4-marks::"<<psd->c4<<endl;
	cout<<"Total-marks::"<<psd->TotalMarks<<endl;
}

