#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//void findmax3(int arr[],size){
//	struct max val;
//	val.max1 = val.max2 =val.max = 0;
//	int a=0;
//	while(a<size){
//		if(arr[a]>val.max1){
//			val.max1 = arr[a];
//			a++
//		}
//	}
//	a=0;
//	while(a<size){
//		if(arr[a]>size && arr[a]!=val.max1){
//			val.max2=arr[];
//			a++
//		}
//	}
//	a=0;
//	while(a<size){
//		if(arr[a]>val.max3&& arr[a] != val.max1 && arr[a] != val.max2)
//	}
//	val.max3 =arr[a];
//	a++
//	}
//	
//}
//
//int main(){
//
//
// 
//
//
//	return 0;
//}

//-==========================================



//
//int i=0;
//struct maxi{
//int max1,max2,max3;
//};
//int input_array(int a[],int s);
//maxi findmax3(int a[],int s);
//void output(maxi max);
//
//int main() {
//  int size;
//  maxi max;
//  cout <<"Enter the size of an array : ";
//  cin>>size;
//  int elem[size];
//  input_array(elem,size);
//  max=findmax3(elem,size);
//  system("CLS");
//  output(max);
// 
//}
//int input_array(int a[],int s){
//  int *ptr,i;
//  ptr=a;
//  for(i=0;i<s;i++){
//    cout<<"Enter "<<i+1<<" value of an array : ";
//    cin>>*ptr;
//    ptr++;
//  }
//  return 0;
//}
//maxi findmax3(int a[],int s){
//  int i;
//  maxi m;
//  m.max1=a[0];
//  m.max2=a[0];
//  m.max3=a[0];
//  for(i=0;i<s;i++){
//    if(a[i]>m.max1){
//      m.max1=a[i];
//    }
//  }
//  for(i=0;i<s;i++){
//    if(a[i]<m.max1 && a[i]>m.max2){
//      m.max2=a[i];
//    }
//  }
// 
//  for(i=0;i<s;i++){
//    if(a[i]<m.max1 && a[i]<m.max2 && a[i]>m.max3){
//      m.max3=a[i];
//    }
//  }
//  return (m);
// 
// 
//}
//void output(maxi max){
//  cout<<"1st Maximum Value: "<<max.max1<<endl;
//  cout<<"2nd Maximum Value: "<<max.max2<<endl;
//  cout<<"3rd Maximum Value: "<<max.max3<<endl;
//}

//============================================================

class universityaccess{
//class member variable definition
private:
int UID;
int passid;
int DoorNo;	

public:
	//class member variable initilazation in constructor
	universityaccess(){
		UID = 0;
		passid = 0;
		DoorNo = 0;
		//time = 0;
		cout<<"Class members are initialized"<<endl;
		}
	~universityaccess(){
		UID = 0;
		passid = 0;
		DoorNo = 0;
		//time=0;
		cout<<"Class members are distructed"<<endl;
//private function to perform internal process
}
	private:
bool user_verification(int id,int pas){
	UID = 101;
	passid = 444;
	if(id==UID && passid==pas){
		return true;	
	}		
	return false;
	}	
////===============================================
//	void updateaccess(int UID, int door){
//		cout<<"Access record is updated of mentined ID:"<<endl;
//		cout<<"USER ID:"<<UID<<endl;
//		cout<<"Door ID:"<<door<<endl;
//	}
//
////public function to get data from the main function to transfer and open the door
//
//	public:
//	
//bool open_door(int Uid,int Pass,int Door){
//bool access=user_verification(Uid,Pass);
//	int userdata[]={UID,doorid};
//	if(access){
//		cout<"Access granted \n Door opened"<<endl;
//		updateaccess(UID,doorid);
//		cout<<"Door closed"<<endl;
//		return access;
//}else{
//	cout<<"Access Denied"<<ehdl;
//}
//return 0;
//	}	
////==========================================================			
//};
//int main(){
//	universityaccess access;
//	cout<<"THis is main function:"<<endl;
//	int uid,pass,door;
//	cout<<"Enter preson ID:";
//	cin>>uid;
//	cout<<"Entre password:";
//	cin>>pass;
//	cout<<"Enter Door number:";
//	cin>>door;
//	access.opendoor(uid,pass,door);
//	return 0;
//}

//==========================================================
//class universityaccess{
////class member variable definition
//	private:
//	int UID;
//	int passid;
//	int Door;
//	public:
////class member variable initilazation in constructor
//	universityaccess(){
//	UID=0;
//	passid=0;
//	Door=0;
//	cout<<"Class members are initialized "<<endl;
//	}
//	~universityaccess(){
//	UID=0;
//	passid=0;
//	Door=0;
//	cout<<"class members are distructed"<<endl;
////private function to perform internal process
//	}
//	private:
//	bool user_verification(int id,int pas){
//	UID=101;
//	passid=555;
//	if(id==UID && passid==pas){
//	return true;
//    }
//	return false;
//	}
//	void update_access(int uid, int door){
//	cout<<"Access record is updated of mentioned ID :"<<endl;
//	cout<<"User Id :"<<uid<<endl;
//	cout<<"Door ID : "<<door<<endl;
//	}
////public function to get data from the main function to transfer and open the door
//	public:
//	bool open_door(int Uid,int Pass,int Door){
//	bool access=user_verification(Uid,Pass);
//	if(access){
//	cout<<"Access granted \n Door Opened"<<endl;
//	update_access(Uid,Door);
//	cout<<"Door closed"<<endl;
//	return access;
//	}
//	else{
//	cout<<"Access Denied"<<endl;
//	}
//	return 0;
//	}	
//	};
//int main(){
//	universityaccess access;
//	cout<<"This is main func"<<endl;
//	int uid,pass,door;
//	cout<<"Enter your ID : ";
//	cin>>uid;
//	cout<<"Enter your password :";
//	cin>>pass;
//	cout<<"Enter Door number : ";
//	cin>>door;
//	access.open_door(uid,pass,door);
//	return 0;
//}

//task # no.1
//create a class named "calculations" that print the factorial number of passed integer of passed integer array value using factorail function inside he class.
//fromula for factorial is an n! = n * (n-1)*..*1

//task# no.02
//using the "calculations"class to perform arithemic  operations by writing addition,subraction,multiplaction,division and modulus function.


//class calculations{
//	public:
//		int arr[100];
//	int factorial(int arr[100])
//{
//
//if (arr == 0)
//       return 1;
//   else
//       return arr * factorial(arr[]-1);
//}	
//};
//int main(){
//	int list[500],n;
//	cout<<"Enter the size of an array: ";
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>list[n];
//	}
//	for(int j=0;j<n;j++){
//		int b = factorial(calculations.factorial(list[j]));
//		cout<<"The factorial of numbers in arrat is:";
//	}
//}


//========================================================

//class calculations{
//        private:
//                        int n,n1,f=1;
//        public:
//                void input();
//                void calc();
//                void display();
//};
//
//void calculations::input()
//{
//        cout<<"Enter any number : ";
//        cin>>n;
//}
//
//void calculations::calc( int arr [100] )
//{
//        n1=n;
//        if(n==0||n==1)
//        cout<<"Factorial of Number is : 1";
//        else
//        for(int n = 0; n < s)
//		{
//                while(n>0)
//                {
//                        f=f*n;
//                        n--;
//                }
//        }
//
//}
//
//void calculations::display(){
//                cout<<"\nFactorial of is : "<<f<<;
//}
//int main (){
//        calculations f;
//        f.input();
//        f.calc( int arr [100] = { 2, 4,6});
//        f.display();
//        return 0;
//}

//class calculation{
//	public:
//		int factorial(){
//			int a[5],b[5],i,n,c;
//  int f;
//  for(c=0;c<5;c++)
//  {
//  cout << "Enter number in array a:";
//  cin>>a[c];
//  }
//  for(c=0;c<5;c++)
//  {
//  
//      n = a[c];
//      f = 1;
//      for(i=1;i<=n;i++)
//       f = f * i;
//       b[c] = f;
//  }      
//   cout<<"Array of numbers is : ";
//   for(c=0;c<5;c++)
//   cout<<a[c]<<"\t";
//   cout<<"\n";  
//   cout<<"Array of factorials is : ";
//   for(c=0;c<5;c++)
//   cout<<b[c]<<"\t";
// 
//		}
//};
//
//
//
//int main(){
//	calculation fun;
//	fun.factorial();
//    
//}
