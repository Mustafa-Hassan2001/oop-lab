#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct task1{
	char std_name[20];
	int std_id;
	int semester_fee;	
};

struct task2{
	char product_name[30];
	int price;
	int quantity;
	int amount;
};

struct task3{
	char vehicle_name[30];
	int price;
	int quantity;
	int amount;
};

struct AC_info{
	char AH_name[10];
	int AC_number;
	float AC_amount;
};
struct AC_Holderinfo{
	char org[20];
	char desig[20];
	int id;
	char email[40];

struct AC_info Ainfo;
};

//int main(int argc, char** argv) {
//	book b1 = {105,"C++",1234.5};
//	std::cout<<"output is \n";
//	std::cout<<"name = "<<b1.title;
//	std::cout<<" \ntitle = "<<b1.book_id;
//	std::cout<<"\nprice = "<<b1.price;
//	return 0;
//}


struct book{
	int page;
	char name[25];
	float price;
};
int main(int argc, char** argv) {
// SIR WRRITEN TASK
//	book obj[5];
//	for(int i=0;i<5;i++){
//		cout<<"Enter book name:";
//		cin.getline(obj[i].name,20);
//		cout<<"Enter book price:";
//		cin>>obj[i].price;
//		cout<<"Enter book page:";
//		cin>>obj[i].page;
//		cin.get();
//	}
//		cout<<endl;
//	for(int a=0;a<5;a++){
//		
//		cout<<obj[a].name<<"\t\t"<<obj[a].price<<"\t\t"<<obj[a].page<<endl;
//	}
//===========================================

//TASK#1
//	task1 list1[5];
//	for(int i=0;i<5;i++){
//		cout<<"Enter your name:";
//		cin.getline(list1[i].std_name,20);
//		cout<<"Enter your id";
//		cin>>list1[i].std_id;
//		cout<<"Enter semester fee:";
//		cin>>list1[i].semester_fee;
//		cin.get();
//	}
//		cout<<endl;
//	for(int a=0;a<5;a++){
// 	cout<<list1[a].std_name<<"\t\t"<<list1[a].std_id<<"\t\t"<<list1[a].semester_fee<<endl;
//	}



//===========================================

//TASK#1
//	task2 list1[5];
//	for(int i=0;i<5;i++){
//		cout<<"Enter your product_name :";
//		cin.getline(list1[i].product_name,20);
//		cout<<"Enter price :";
//		cin>>list1[i].price;
//		cout<<"Enter quantity :";
//		cin>>list1[i].quantity;
//		cin.get();
//	}
//	for(int j=0;j<5;j++){
//	    list1[j].amount = list1[j].price * list1[j].quantity;
//	}
//		cout<<endl;
//	cout<<"product name\t\tprice\t\tquantity\t\tamount \n\n";	
//	for(int a=0;a<5;a++){
// 	cout<<list1[a].product_name<<"\t\t"<<list1[a].price<<"\t\t"<<list1[a].quantity<<"\t\t"<<list1[a].amount<<endl;
//	}
	
//===========================================

//TASK#3
//		task3 list1[5];
//	for(int i=0;i<5;i++){
//		cout<<"Enter your vehicle_name :";
//		cin.getline(list1[i].vehicle_name,20);
//		cout<<"Enter price :";
//		cin>>list1[i].price;
//		cout<<"Enter quantity :";
//		cin>>list1[i].quantity;
//		cin.get();
//	}
//	for(int j=0;j<5;j++){
//	    list1[j].amount = list1[j].price * list1[j].quantity;
//	}
//		cout<<endl;
//	cout<<"vehicle name\t\tprice\tquantity \n\n";	
//	for(int a=0;a<5;a++){
// 	cout<<list1[a].vehicle_name<<"\t\t"<<list1[a].price<<"\t\t"<<list1[a].quantity<<"\t\t"<<list1[a].amount<<endl;
//	}
//==========================================

struct AC_Holderinfo obj1;
cout<<"Enter AH name :";
cin>>obj1.Ainfo.AH_name,20;
cout<<"Enter AC number :";
cin>>obj1.Ainfo.AC_number;
cout<<"Enter Amount :";
cin>>obj1.Ainfo.AC_amount;
cout<<"Enter company name :";
cin>>obj1.org,19,'!';
cout<<"Enter Designation :";
cin>>obj1.desig,20;
cout<<"Enter ID :";
cin>>obj1.id;
cout<<"Enter Email :";
cin>>obj1.email,20;

cout<<"AC_Name:"<<obj1.Ainfo.AH_name<<"AC_Number:"<<obj1.Ainfo.AC_number<<"Amount:"<<obj1.Ainfo.AC_amount<<"Company Name:"<<obj1.org<<"Designation:"<<obj1.desig<<"ID:"<<obj1.id<<"Email:"<<obj1.email;









	return 0;
}
