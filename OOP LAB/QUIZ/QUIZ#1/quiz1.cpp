#include "Q2.h"
#include "Q1.h"

#include <iostream>

using namespace std;

int main(){
	

	Math_Calculations Cal1;
	Factroil_Calculations Cal2;
	char Choice;
	cout<<endl;
	cout<<"\nPress:- \n 1->for Norm Of Array \n 2->For Mean Of Array \n 3->To Find Factorial\n 4->To print array in square matrix \n 5-> End"<<endl;
	cin>>Choice;
	while(Choice !='5'){	
		switch(Choice){
			case '1':
				Cal1.NOME();
				break;
			case '2':
				Cal1.MEAN();
				break;
			case '3':
				Cal2.set_FACTORIAL();
				break;
			case '4':
				Cal2.Square_Matrice();
				break;	
			case '5':
				cout<<"Thank You!"<<endl;
				break;
			default:
				cout<<"invlaid"<<endl;
				break;
		}
	cout<<"Press \n 1->for Norm Of Array \n 2->For Mean Of Array \n 3->To Find Factorial\n 4->To print array in square matrix \n 5-> End"<<endl;
	cin>>Choice;
	}
	return 0;
}
