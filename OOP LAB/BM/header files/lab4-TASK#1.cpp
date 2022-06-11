
#include <iostream>
#include <string.h>
#include "lb4task1.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
		
int main(int argc, char** argv) {
// ======== 	Main File  ==================
	int ID, basalary;
	string firname,lasname,design;
	cout<<"Enter ID:";
	cin>>ID;
	cout<<"Enter first name:";
	cin>>firname;
	cout<<"Enter last name:";
	cin>>lasname;
	cout<<"Enter Basic salary:";
	cin>>basalary;
	cout<<"Enter desitination:";
	cin>>design;
	payroll p1(ID,firname,lasname,design,basalary);
	p1.displayslip();
	return 0;}
