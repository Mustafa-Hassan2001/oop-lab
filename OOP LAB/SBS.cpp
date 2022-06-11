#include <iostream>
#include <string>
#include <fstream>

using namespace std;
//enum Packing_type{ single=1,dozen=2,carton=3};
//struct Product{
//	string product_id;
//	string product_name;
//	int mnef_date;
//	int exp_date;
//	Packing_type TYPE;
//	int Quantity_inside_Packing;
//	int Purchase_Rate_Qty;
//	int Purchase_Rate_Single;
//	int Sale_Rate_Single;
//};
//
//
//class Data_connection{
//	virtual void save_data(fstream &file ,Product p)=0;
////	virtual void view_data()=0;
////	virtual void delete_data()=0;
//	virtual void search_data(string id)=0;
////	virtual void edit_data()=0;
//};
//
//class product_info:public Data_connection{
//	public:
//		fstream file1;
//		void get_data(){
//			
//			
//			int list;
//			file1.open("product_list.txt",ios_base::app);
//			cout<<"how many product do you want ?? ";
//			cin>>list;
//			int temp_type;
//			Product myobj[list];
//			for(int i=0;i<list;i++){
//				cout<<"enter product id   : ";
//				cin>>myobj[i].product_id;
//				cout<<"enter product name  : ";
//				cin>>myobj[i].product_name;
//				cout<<"enter product manufacture date   : ";
//				cin>>myobj[i].mnef_date;
//				cout<<"enter product expiry date   : ";
//				cin>>myobj[i].exp_date;
//				cout<<"Enter the paking type 1= single , 2=dozen , 3=cartoon ";
//				cin>>temp_type;
//				
//				myobj[i].TYPE=(Packing_type)temp_type;
//				if(temp_type==single){
//					myobj[i].Quantity_inside_Packing=1;
////					cout<<"ziyan "<<endl;
//					
//				}
//				else if(temp_type==dozen){
//					myobj[i].Quantity_inside_Packing=12;
//				}
//				
//				else{
//					cout<<"enter the quantity inside cartoon : ";
//					cin>>myobj[i].Quantity_inside_Packing;
//				}
//				
//				cout<<"enter purchase rate quantity : ";
//				cin>>myobj[i].Purchase_Rate_Qty;
//				
//				myobj[i].Purchase_Rate_Single=myobj[i].Purchase_Rate_Qty/myobj[i].Quantity_inside_Packing;
//				
//				myobj[i].Sale_Rate_Single=((myobj[i].Purchase_Rate_Single/100)*10)+myobj[i].Purchase_Rate_Single;
//				save_data(file1,myobj[i]);
//				
//				
//			}
//			
//			file1.close();
//			
//			
//			
//		}
//		
//		void save_data(fstream &file ,Product P){
//			file<<endl<<P.product_id<<"   "<<P.product_name<<"  "<<P.mnef_date<<"   "<<P.exp_date<<"   "<<P.TYPE<<"   "<<P.Quantity_inside_Packing
//			<<"   "<<P.Purchase_Rate_Qty<<"   "<<P.Purchase_Rate_Single<<"   "<<P.Sale_Rate_Single;
//			
//		}
//		
//		void search_data(string id){
//			Product P;
//			int type;
//			file1.open("product_list.txt",ios_base::in);
//			while(!file1.eof()){
//				file1>>P.product_id>>P.product_name>>P.mnef_date>>P.exp_date>>type>>P.Quantity_inside_Packing>>P.Purchase_Rate_Qty>>P.Purchase_Rate_Single
//				>>P.Sale_Rate_Single;
//				
//				if(P.product_id==id){
//					cout<<"product Id "<<P.product_id<<endl;
//					cout<<"product name "<<P.product_name<<endl;
//					cout<<"manufature date "<<P.mnef_date<<endl;
//					if(type==1){
//						cout<<"packging type : single";
//						
//					}
//					else if(type==2){
//						cout<<"packging type : dozen";
//						
//					}
//					else{
//						cout<<"packging type : cartoon";
//					}
//				}
//			}
//			
//			file1.close();
//		}
//		
//		
//		
//		
//};
//int main(){
//	enum Packing_type{ single=1,dozen=2,carton=3};
//	Packing_type TYPE;
//	TYPE=single;
//	cout<<TYPE;
//
//product_info myobj;
//myobj.get_data();
//myobj.search_data("123b");
//	
//}



enum Packing_type{ single=1,dozen=2,carton=3};
struct Product{
	string product_id;
	string product_name;
	int mnef_date;
	int exp_date;
	Packing_type TYPE;
	int Quantity_inside_Packing;
	int Purchase_Rate_Qty;
	int Purchase_Rate_Single;
	int Sale_Rate_Single;
};


class Data_connection{
	virtual void save_data(fstream &file ,Product p)=0;
//	virtual void view_data()=0;
	virtual void delete_data()=0;
	virtual void search_data(string id)=0;
	virtual void edit_data()=0;
};

class product_info:public Data_connection{
	public:
		fstream file1;
		void get_data(){
			
			
			int list;
			file1.open("product_list.txt",ios_base::app);
			cout<<"how many product do you want ?? ";
			cin>>list;
			int temp_type;
			Product myobj[list];
			for(int i=0;i<list;i++){
				cout<<"enter product id   : ";
				cin>>myobj[i].product_id;
				cout<<"enter product name  : ";
				cin>>myobj[i].product_name;
				cout<<"enter product manufacture date   : ";
				cin>>myobj[i].mnef_date;
				cout<<"enter product expiry date   : ";
				cin>>myobj[i].exp_date;
				cout<<"Enter the paking type 1= single , 2=dozen , 3=cartoon ";
				cin>>temp_type;
				
				myobj[i].TYPE=(Packing_type)temp_type;
				if(temp_type==single){
					myobj[i].Quantity_inside_Packing=1;
//					cout<<"ziyan "<<endl;
					
				}
				else if(temp_type==dozen){
					myobj[i].Quantity_inside_Packing=12;
				}
				
				else{
					cout<<"enter the quantity inside cartoon : ";
					cin>>myobj[i].Quantity_inside_Packing;
				}
				
				cout<<"enter purchase rate quantity : ";
				cin>>myobj[i].Purchase_Rate_Qty;
				
				myobj[i].Purchase_Rate_Single=myobj[i].Purchase_Rate_Qty/myobj[i].Quantity_inside_Packing;
				
				myobj[i].Sale_Rate_Single=((myobj[i].Purchase_Rate_Single/100)*10)+myobj[i].Purchase_Rate_Single;
				save_data(file1,myobj[i]);
				
				
			}
			
			file1.close();
			
			
			
		}
		
		void save_data(fstream &file ,Product P){
			file<<endl<<P.product_id<<"   "<<P.product_name<<"  "<<P.mnef_date<<"   "<<P.exp_date<<"   "<<P.TYPE<<"   "<<P.Quantity_inside_Packing
			<<"   "<<P.Purchase_Rate_Qty<<"   "<<P.Purchase_Rate_Single<<"   "<<P.Sale_Rate_Single;
			
		}
		
		void search_data(string id){
			Product P;
			int type;
			file1.open("product_list.txt",ios_base::in);
			while(!file1.eof()){
				file1>>P.product_id>>P.product_name>>P.mnef_date>>P.exp_date>>type>>P.Quantity_inside_Packing>>P.Purchase_Rate_Qty>>P.Purchase_Rate_Single
				>>P.Sale_Rate_Single;
				
				if(P.product_id==id){
					cout<<"product Id "<<P.product_id<<endl;
					cout<<"product name "<<P.product_name<<endl;
					cout<<"manufature date "<<P.mnef_date<<endl;
					if(type==1){
						cout<<"packging type : single";
						
					}
					else if(type==2){
						cout<<"packging type : dozen";
						
					}
					else{
						cout<<"packging type : cartoon";
					}
				}
			}
			
			file1.close();
		}
		
		
		void edit_data(){
			fstream file2;
			string id_temp,type;
			Product P;
			int temp_type;
			file1.open("product_list.txt",ios_base::in);
			file2.open("temp_file.txt",ios_base::app);
			cout<<endl<<"enter the id of product you want to edit : ";
			cin>>id_temp;
			while(!file1.eof()){
				file1>>P.product_id>>P.product_name>>P.mnef_date>>P.exp_date>>type>>P.Quantity_inside_Packing>>P.Purchase_Rate_Qty>>P.Purchase_Rate_Single
				>>P.Sale_Rate_Single;
				if(P.product_id!=id_temp){
					save_data(file2,P);
//					file2<<endl<<P.product_id<<"   "<<P.product_name<<"  "<<P.mnef_date<<"   "<<P.exp_date<<"   "<<type<<"   "<<P.Quantity_inside_Packing
//			<<"   "<<P.Purchase_Rate_Qty<<"   "<<P.Purchase_Rate_Single<<"   "<<P.Sale_Rate_Single;
					
				}
				else{
					Product temp;
					cout<<"enter product id   : ";
					cin>>temp.product_id;
					cout<<"enter product name  : ";
					cin>>temp.product_name;
					cout<<"enter product manufacture date   : ";
					cin>>temp.mnef_date;
					cout<<"enter product expiry date   : ";
					cin>>temp.exp_date;
					cout<<"Enter the paking type 1= single , 2=dozen , 3=cartoon ";
					cin>>temp_type;
					
					temp.TYPE=(Packing_type)temp_type;
					if(temp_type==single){
						temp.Quantity_inside_Packing=1;
	//					cout<<"ziyan "<<endl;
						
					}
					else if(temp_type==dozen){
						temp.Quantity_inside_Packing=12;
					}
					
					else{
						cout<<"enter the quantity inside cartoon : ";
						cin>>temp.Quantity_inside_Packing;
					}
					
					cout<<"enter purchase rate quantity : ";
					cin>>temp.Purchase_Rate_Qty;
					
					temp.Purchase_Rate_Single=temp.Purchase_Rate_Qty/temp.Quantity_inside_Packing;
					
					temp.Sale_Rate_Single=((temp.Purchase_Rate_Single/100)*10)+temp.Purchase_Rate_Single;
					save_data(file2,temp);
				}
			}
			file1.close();
			file2.close();
			remove("product_list.txt");
			rename("temp_file.txt","product_list.txt");
			
		}
		
		void delete_data(){
			fstream file2;
			string id_temp,type;
			Product P;
			int temp_type;
			file1.open("product_list.txt",ios_base::in);
			file2.open("temp_file.txt",ios_base::app);
			cout<<"enter the id of product you want to edit : ";
			cin>>id_temp;
			while(!file1.eof()){
				file1>>P.product_id>>P.product_name>>P.mnef_date>>P.exp_date>>type>>P.Quantity_inside_Packing>>P.Purchase_Rate_Qty>>P.Purchase_Rate_Single
				>>P.Sale_Rate_Single;
				if(P.product_id!=id_temp){
					save_data(file2,P);
//					file2<<endl<<P.product_id<<"   "<<P.product_name<<"  "<<P.mnef_date<<"   "<<P.exp_date<<"   "<<type<<"   "<<P.Quantity_inside_Packing
//			<<"   "<<P.Purchase_Rate_Qty<<"   "<<P.Purchase_Rate_Single<<"   "<<P.Sale_Rate_Single;
					
				}
				
			}
			file1.close();
			file2.close();
			remove("product_list.txt");
			rename("temp_file.txt","product_list.txt");
		}
		
		
		
};
int main(){
//	enum Packing_type{ single=1,dozen=2,carton=3};
//	Packing_type TYPE;
//	TYPE=single;
//	cout<<TYPE;

product_info myobj;
// myobj.get_data();
//myobj.search_data("456a");

// myobj.edit_data();
myobj.delete_data();
	
}
