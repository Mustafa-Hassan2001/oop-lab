#include "lab#4scalss.h"
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//======== MAIN FILE ==============
	int ID;
	string name;
	int a=0;
	system ("color E5");
	cout<<"Enter Employeee ID:";
	cin>>ID;
	cout<<"Enter Employee Name:";
	cin>>name;
	employee obj1(ID,name);
	obj1.printdata();
	return 0;
}
