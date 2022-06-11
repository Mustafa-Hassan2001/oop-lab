#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class calculation{
	public:
    int factorial(){
    int a[5],b[5],i,n,c;
    int f;
  for(c=0;c<5;c++){
  cout << "Enter number in array a:";
  cin>>a[c];
  }
  for(c=0;c<5;c++){
      n = a[c];
      f = 1;
      for(i=1;i<=n;i++)
       f = f * i;
       b[c] = f;
  }      
   cout<<"Array of numbers is : ";
   for(c=0;c<5;c++)
   cout<<a[c]<<"\t";
   cout<<"\n";  
   cout<<"Array of factorials is : ";
   for(c=0;c<5;c++)
   cout<<b[c]<<"\t";
		}	
	int addition(){
		int x, y;
		cout<<"Enter first number :";
		cin>>x;
		cout<<"Enter secound number :";
		cin>>y;
		cout<<"The result of adddition of "<<x<<" & "<<y<<" is : "<<x+y;
	}	
	int subtraction(){
		int x,y;
		cout<<"Enter first number :";
		cin>>x;
		cout<<"Enter secound number :";
		cin>>y; 
		cout<<"The result of subtraction of "<<x<<" & "<<y<<" is : "<<x-y;
	}
	int multiplaction(){
		int x,y;
		cout<<"Enter first number :";
		cin>>x;
		cout<<"Enter secound number :";
		cin>>y;
		cout<<"The result of multiplaction of "<<x<<" & "<<y<<" is : "<<x*y;
	}
	int division(){
		int x,y;
		cout<<"Enter first number :";
		cin>>x;
		cout<<"Enter secound number :";
		cin>>y;
		cout<<"The result of division of "<<x<<" & "<<y<<" is : "<<x/y;
	}
	int modulus(){
		int x,y;
		cout<<"Enter first number :";
		cin>>x;
		cout<<"Enter secound number :";
		cin>>y;
		cout<<"The result of modulus of "<<x<<" & "<<y<<" is : "<<x%y;
	}			
};
int main(){
	calculation fun;
	int choice;
	cout<<"Enter your choice :";
	cin>>choice;
	switch (choice){
	case 1:
	fun.factorial();
	break;
	case 2:
	fun.addition();
	break;
	case 3:
	fun.subtraction();
	break;
	case 4:
	fun.multiplaction();
	break;
	case 5:
	fun.division();
	break;
	case 6:
	fun.modulus();	
	break;
   }
   return 0;
}
