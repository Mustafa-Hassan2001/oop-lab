#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
