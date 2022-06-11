#include <iostream>
#include <Math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

//QUESTION#1: (Math_Calculations)

class Math_Calculations{
	int num;
	int arr[];
	public:
		
		//Counstructor IN which takeing size of array
		Math_Calculations(){
			int NOME();
			int	MEAN(); 
			cout<<"Enter size of array: ";
			cin>>num;
			arr[num];
			for(int i=0;i<num;i++){
				cout<<"Enter Array Element->"<<i+1<<": ";
				cin>>arr[i];
			}
		}
		
		//NOME FUNC.
		int NOME(){
			float NOME=0;
			for(int i=1; i<=num;i++){
				NOME+=(arr[i]*arr[i]);
			}
			NOME=sqrt(NOME);
			cout<<"The norm of your array is: "<<NOME<<endl;
		}

		//MEAN Func.
		int MEAN(){
			float MEAN=0, stDeviation=0;
			for(int i=0;i<num;i++){
				MEAN+=arr[i];
			}
			MEAN=(MEAN/num);
			cout<<"The mean of array value is: "<<MEAN<<endl;
			for(int j=0;j<num;j++){
				stDeviation+=(arr[j]-MEAN)*(arr[j]-MEAN);
			}
			stDeviation=(stDeviation/(MEAN-1));
			stDeviation=sqrt(stDeviation);
			cout<<"The standard deviation of array value is: "<<stDeviation<<endl;
		}	

};

