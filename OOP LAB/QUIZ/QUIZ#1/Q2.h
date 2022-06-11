#include <iostream>
#include <Math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class Factroil_Calculations{
	int num;
	int arr[];
	public:
		//Counstroctor start
		Factroil_Calculations(){
			int set_FACTORIAL();
		}
			Square_Matrice( ){
				
			float  row=3,col=3;
			int k=0;
			for(int i=0;i<row;i++){
				for(int j=0;j<col;j++){
					if(k>=num){
						cout<<"0 ";
					}else{
						cout<<arr[k]<<" ";
					k++;
					}
				}
				cout<<"\n";
			}
		}
		set_FACTORIAL(){
 			int n;
    		long double factorial = 1.0;

    		cout << "Enter a positive integer: ";
    		cin >> n;

    		if (n < 0)
        		cout << "Error! Factorial of a negative number doesn't exist.";
    		else {
        		for(int i = 1; i <= n; ++i) {
            	factorial *= i;
        		}
        		cout << "Factorial of " << n << " = " << factorial<<endl;  
			 }		
			
			}   //----------------------------->	//Counstroctor END Here
	
};

