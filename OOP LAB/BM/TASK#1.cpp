#include <iostream>

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
int main(int argc, char** argv) {
	
	
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

//struct AC_Holderinfo obj1;
//cout<<"Enter AH name :";
//cin>>obj1.Ainfo.AH_name,20;
//cout<<"Enter AC number :";
//cin>>obj1.Ainfo.AC_number;
//cout<<"Enter Amount :";
//cin>>obj1.Ainfo.AC_amount;
//cout<<"Enter company name :";
//cin>>obj1.org,19,'!';
//cout<<"Enter Designation :";
//cin>>obj1.desig,20;
//cout<<"Enter ID :";
//cin>>obj1.id;
//cout<<"Enter Email :";
//cin>>obj1.email,20;
//
//cout<<"AC_Name:"<<obj1.Ainfo.AH_name<<"AC_Number:"<<obj1.Ainfo.AC_number<<"Amount:"<<obj1.Ainfo.AC_amount<<"Company Name:"<<obj1.org<<"Designation:"<<obj1.desig<<"ID:"<<obj1.id<<"Email:"<<obj1.email;

	
//==================================Task#04===============================
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
	
	
	return 0;
}
