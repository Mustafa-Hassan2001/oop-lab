  #include <iostream>
using namespace std;
#include <string.h>

//struct marks{
//	int m1, m22,m3, m4, m5, m6, m7, Total_Marks;
//	char Grade[5];
//};
//marks getinfo();
//void checkgrade(marks &m);
//void printinfo(marks *inf);
//
//int main() {
//	marks data;
//	data= getinfo();
//	checkgrade(data);
//	system("CLS");
//	printinfo(&data);
//	return 0;
//}
//
//marks getinfo(){
//	marks mark;
//	cout<<"Enter Marks 1: ";
//	cin>>mark.m1;
//	cout<<"Enter Marks 2: ";
//	cin>>mark.m22;
//	cout<<"Enter Marks 3: ";
//	cin>>mark.m3;
//	cout<<"Enter Marks 4: ";
//	cin>>mark.m4;
//	cout<<"Enter Marks 5: ";
//	cin>>mark.m5;
//	cout<<"Enter Marks 6: ";
//	cin>>mark.m6;
//	cout<<"Enter Marks 7: ";
//	cin>>mark.m7;
//	mark.Total_Marks=mark.m1+mark.m22+mark.m3+mark.m4+mark.m5+mark.m6+mark.m7;
//}
//void checkgrade(marks &m){
//	int check;
//	check = m.Total_Marks/700*100;
//	if (check<100&&check>=80){
//		strcpy(m.Grade,"A");
//	}
//}
//void printinfo(marks *inf){
//	cout<<inf->Grade;
//}


struct StudentResult{
	char id[20];
	char Name[20];
	float course1,course2,course3,course4,course5,course6,course7;
	float Total_marks;
	float percentage;
	float grade;
};
StudentResult getdata(){
	StudentResult s1;
	cout<<"Enter Your Id :";
	cin>>s1.id;
	cout<<"Enter Your Name :";
	cin>>s1.Name;
	cout<<"Enter subject 1 Marks :";
	cin>>s1.course1;
	cout<<"Enter subject 2 Marks :";
	cin>>s1.course2;
	cout<<"Enter subject 3 Marks :";
	cin>>s1.course3;
	cout<<"Enter subject 4 Marks :";
	cin>>s1.course4;
	cout<<"Enter subject 5 Marks :";
	cin>>s1.course5;
	cout<<"Enter subject 6 Marks :";
	cin>>s1.course6;
	cout<<"Enter subject 7 Marks :";
	cin>>s1.course7;
	s1.Total_marks=s1.course1+s1.course2+s1.course3+s1.course4+s1.course5+s1.course6+s1.course7;
	return s1;
}
void percentage(StudentResult &pr){
	pr.percentage=(pr.Total_marks/700)*100;	
}
void printresult(StudentResult *psd){
	cout<<"\nID : "<<psd->id;
	cout<<"\nName :"<<psd->Name;
	cout<<"\nC1 marks :"<<psd->course1;
	cout<<"\nC2 marks :"<<psd->course2;
	cout<<"\nC3 marks :"<<psd->course3;
	cout<<"\nC4 marks :"<<psd->course4;
	cout<<"\nC5 marks :"<<psd->course5;
	cout<<"\nC6 marks :"<<psd->course6;
	cout<<"\nC7 marks :"<<psd->course7;
	cout<<"\nTotal Marks :"<<psd->Total_marks;
	cout<<"\nPercentage :"<<psd->percentage;

	if(psd->percentage>=90){
	cout<<"\nGrade -> A+";
	}
		else if(psd->percentage>=80){
	cout<<"\nGrade -> A-";
	}
		else if(psd->percentage>=75 && psd->percentage<80){
	cout<<"\nGrade -> A";
	}
		else if(psd->percentage>=70 && psd->percentage<=74){
	cout<<"\nGrade -> B+";
	}
		else if(psd->percentage>=65 && psd->percentage<=69){
	cout<<"\nGrade -> B-";
	}
		else if(psd->percentage>=60 && psd->percentage<=64){
	cout<<"\nGrade -> c+";
	}
		else if(psd->percentage>=55 && psd->percentage<=59){
	cout<<"\nGrade -> c-";
	}
		else if(psd->percentage==50){
	cout<<"\nGrade -> D";
	}
		else {
	cout<<"\nGrade -> F";
	}
}
int main(){
	StudentResult std;
	std=getdata();
	percentage(std);
	printresult(&std);
}
