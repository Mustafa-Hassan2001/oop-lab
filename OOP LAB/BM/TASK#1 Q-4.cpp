#include <iostream>
using namespace std;
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//struct National_Recordinfo{
//    char country_name[20];
//    char city_name[20];
//    int area_num;
//	};	
//struct personal_Info{
//	char name[20];
//	char father[20];
//	char Id[20];
//	char Email[30];
//	char address[25];
//	struct National_Recordinfo;
//	};
//struct professional_info{
//	char org_name[20];
//	char designation[20];
//	int year;
//	char address_org[20];
//	int experience;
//	struct National_Recordinfo;
//};
//struct bank_accountinfo{	
//	char AC_Name[10];
//	int Ac_num;
//	float AC_Amount;
//	char bank_name[20];
//	char account_status[20];
//	struct National_Recordinfo;
//};
//int main(){
//	int i;
//	   personal_Info obj[2];
//       professional_info obj1[2];
//       bank_accountinfo obj2[2];
//       National_Recordinfo obj3[2];
//for (i=0;i<=0;i++){
//		cout<<"Enter name :  ";
//		cin>>obj[i].name;
//		cout<<"Enter father name: ";
//		cin>>obj[i].father;
//		cout<<"Enter ID:  ";
//		cin.getline(obj[i].Id,20,'#');
//		cout<<"Enter email:  ";
//		cin>>obj[i].Email;
//		cout<<"Enter address:  ";
//		cin>>obj[i].address;
//		cout<<"Enter organization name :  ";
//		cin.getline(obj1[i].org_name,20,'#') ;
//		cout<<"Enter designation : ";
//		cin>>obj1[i].designation;
//		cout<<"Enter year whne you start working : ";
//		cin>>obj1[i].year;
//		cout<<"Enter organization address : ";
//		cin>>obj1[i].address_org;
//		cout<<"Enter year experiences you have : ";
//		cin>>obj1[i].experience;
//		cout<<"Enter account name : ";
//		cin.getline(obj2[2].AC_Name,20,'#'); 
//		cout<<"Enter account number : ";
//		cin>>obj2[2].Ac_num;
//		cout<<"Enter amount : ";
//		cin>>obj2[2].AC_Amount;
//		cout<<"Enter bank name : ";
//		cin>>obj2[2].bank_name;
//		cout<<"Enter account status : ";
//		cin>>obj2[2].account_status;
//		cout<<"Enter country name : ";
//		cin>>obj3[i].country_name;
//		cout<<"Enter city name : ";
//		cin>>obj3[i].city_name;
//		cout<<"Enter area number : ";
//		cin>>obj3[i].area_num;
//}
//cout<<"PERSONAL INFORMATION";
//cout<<"\n"<<"Name"<<"\t"<<"father name"<<"\t"<<"ID"<<"\t"<<"email"<<"\t"<<"Address";
//for (i=0;i<=0;i++)
//cout<<"\n"<<obj[i].name<<"\t"<<obj[i].father<<"'\t"<<obj[i].Id<<"\t"<<obj[i].Email<<"\t"<<obj[i].address;
//cout<<"\n"<<"Professional INFORMATION";
//cout<<"organization name"<<"\t"<<"designation"<<"\t"<<"Year of join"<<"\t"<<"address organization"<<"\t"<<"year of experience";
//for (i=0;i<=0;i++)
//cout<<"\n"<<obj1[i].org_name<<"\t\t"<<obj1[i].designation<<"\t\t"<<obj1[i].year<<"\t\t"<<obj1[i].address_org<<"\t\t"<<obj1[i].experience;
//cout<<"\n"<<"Bank INFORMATION";
//cout<<"\n"<<"account name"<<"\t"<<"account number"<<"\t"<<"account amount"<<"\t"<<"bank name "<<"\t"<<"account status";
//for (i=0;i<=0;i++)
//cout<<"\n"<<obj2[i].AC_Name<<"\t\t"<<obj2[i].Ac_num<<"\t\t"<<obj2[i].AC_Amount<<"\t\t"<<obj2[i].bank_name<<"\t\t"<<obj2[i].account_status;
//cout<<"\n"<<"National record INFORMATION";
//cout<<"\n"<<"country name"<<"\t"<<"city number"<<"\t"<<"area number";
//for (i=0;i<=0;i++)
//cout<<"\n"<<obj3[i].country_name<<"\t\t"<<obj3[i].city_name<<"\t\t"<<obj3[i].area_num;
//	return 0;
//}


//==================TASK # 02==================== 
//q1
//#include <iostream>
//using namespace std;
//
/////* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//int i=0;//global decleartion of variable
//
//struct maximum{
//int max1,max2,max3;
//};
//
//int input_array(int array[],int size);
//
//maximum findmax3(int array[],int size);
//
//void output(maximum max);
//
//int main() {
//  int size;
//  maximum max;
//  cout <<"enter the size of an array : ";
//  cin>>size;
//  int array1[size];
//  input_array(array1,size);
//  max=findmax3(array1,size);
//  output(max);
//  
//}
//int input_array(int array[],int size){
//  int *ptr;
//  // purpose of using pointer to update a array in main 
//  ptr=array;
//  // ptr assign the base address of array 
//  for(i=0;i<size;i++){
//    cout<<"enter "<<i+1<<" value of an array : ";
//    cin>>*ptr;
//    // base address increase and check next element of array
//    ptr++;
//  }
//  return 0;
//}
//maximum findmax3(int array[],int size){
//  maximum m;
//  m.max1=array[0];
//  m.max2=array[0];
//  m.max3=array[0];
//  for(i=0;i<size;i++){
//  	// this condiotion check whole array and give 1 maximum
//    if(array[i]>m.max1){
//      m.max1=array[i];
//    }
//  }
//  for(i=0;i<size;i++){
//  	// this condition will check weather element of array should be less tha max 1 but greater than all other elemnt of array except max 1
//    if(array[i]<m.max1 && array[i]>m.max2){
//      m.max2=array[i];
//    }
//  }
//  for(i=0;i<size;i++){
//  	// this codition check element of array should be greater than all elemnt of array except max1 and max 2
//    if(array[i]<m.max1 && array[i]<m.max2 && array[i]>m.max3){
//      m.max3=array[i];
//    }
//  }
//  return (m);
//  
//  
//}
//void output(maximum max){
//  cout<<"1 maximum : "<<max.max1<<endl;
//  cout<<"2 maximum : "<<max.max2<<endl;
//  cout<<"3 maximum : "<<max.max3<<endl;
//  
//}

//=========================================================================
//q2

struct student{
	char id[20];
	char name[20];
	int amount;
};
student getdata(){
	student data;
	cout << "enter the student id : ";
	cin>>data.id;
	cout <<"enter the student name : ";
	cin.get();
	cin.getline(data.name,20);
	cout << "enter amount : ";
	cin >>data.amount;
	return data;
}
void update_data(student &data);
void print_data (student *data);

int main(){
	student data;
	data=getdata();
	if(data.amount<60000){
		cout<<"your have enter the less amount !! :"<<endl;
		update_data(data);
	}
	print_data(&data);	
}
void update_data(student &data){
	int new_amount;
	cout <<"enter the amount of one more subject : ";
	cin>>new_amount;
	while(new_amount<12000 || new_amount >12000){
		cout<<"you have enter wrong amount : "<<endl;
		cout <<"enter the correct amount  of one more subject : ";
		cin>>new_amount;
	}
	data.amount=data.amount+new_amount;
}
void print_data(student *data){
	cout <<"Id of student : "<<data ->id<<endl;
	cout<<"Name of student: "<<data->name<<endl;
	cout <<"semester fees : "<<data ->amount<<endl;
}
