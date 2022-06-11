#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//fie oprations
//Flie Handling  DATA 
//1-> inSEaT--> in
//int main(int argc, char** argv) {
//	fstream file1;
//	int ID=43;
//	string Name="Khalid",Dept="CS";
//	file1.open("DataFile.txt",ios_base::app);   //end of file write kar na k lilay
//	file1<<ID<<" "<<Name<<" "<<Dept<<endl;
//	cout<<"Data is stored"<<endl;
//	file1.close();
//	return 0;
//}
////2->to out 
//int main() {
//	fstream file1;
//	int ID;
//	string Name,Dept;	
//	file1.open("DataFile.txt",ios_base::in);   //end of file write kar na k lilay
//	file1>>ID>>Name>>Dept;
//	cout<<ID<<" "<<Name<<" "<<Dept<<endl;
//	file1.close();
//	return 0;}
////3->Delete File
//int main(int argc, char** argv) {
//	fstream file1;
//	int ID;
//	string Name,Dept;
//	ofstream myfile;
//	myfile.open("Temp.txt",ios_base::app);   //end of file write kar na k lilay
//	ifstream infile("DataFile.txt");
//	while(!infile.eof()){
//	infile>>ID>>Name>>Dept;
//	if(!ID==43){
//	cout<<ID<<" "<<Name<<" "<<Dept<<endl;
//	myfile<<endl<<ID<<" "<<Name<<" "<<Dept;	}}
//	infile.close();
//	myfile.close();
//	remove("DataFlie.txt");//delete the old file
//	rename("Temp.txt","DataFile.txt");//rename the temp.txt file to given DataFile.txt
//	return 0;
//}

//lab task-8
class File_perations{
	public:
	int Item_ID;
	string Item_Name;
	int Price_hrs;
	int Used_hrs;
	int Amount;
	File_perations(){
		void getter();
		void in();
		void show();
		void remove();}
	void getter(){
	
		fstream file1, file2;
		char opt;
//		int ID = 0;
//		string name= " ", Department= " ";
		file1.open("Account.txt",ios_base::app);
		file2.open("Account.txt",ios_base::in);
		while(opt = 'y'){
		while(!file2.eof()){
		file2>>Item_ID>>Item_Name>>Price_hrs>>Used_hrs;
		}
		if(Item_ID==0){
		Item_ID = 1;
		}
		else{
		Item_ID+=1;
		}	
		cout<<"Account ID is Generated: "<<Item_ID<<endl;
//		cout<<"Enter Item ID:"<<endl;
//		cin>>Item_ID;
		cout<<"Enter Item Name:"<<endl;
		cin>>Item_Name;
		cout<<"Enter Price Hours:"<<endl;
		cin>>Price_hrs;
		cout<<"Enter Used Hours:"<<endl;
		cin>>Used_hrs;
		file1<<Item_ID<<" "<<Item_Name<<" "<<Price_hrs<<" "<<Used_hrs;
		cout<<"Would you like to create another account:y/n.";
		cin>>opt;
		}
		file1.close();
		file2.close();
	}
	void in(){
	fstream file1;
	getter();
	Amount = Used_hrs * Price_hrs;
	file1.open("DataFile.txt",ios_base::app);   //end of file write kar na k lilay
	file1<<Item_ID<<" "<<Item_Name<<" "<<Price_hrs<<" "<<Used_hrs<<" "<<Amount<<endl;
	cout<<"Data is stored"<<endl;
	file1.close();}
	
	void show(){
	fstream file1;
	file1.open("DataFile.txt",ios_base::in);   //end of file write kar na k lilay
	file1>>Item_ID>>Item_Name>>Price_hrs>>Used_hrs>>Amount;
    cout<<Item_ID<<" "<<Item_Name<<" "<<Price_hrs<<" "<<Used_hrs<<" "<<Amount<<endl;
	file1.close();}
	
	void search(){
	fstream file1;
	int id;
	cout<<"Enter the which you wnat to search:"<<endl;
	cin>>id;
	ofstream myfile;
	myfile.open("Temp.txt",ios_base::app);   //end of file write kar na k lilay
	ifstream infile("DataFile.txt");
	while(!infile.eof()){
	infile>>Item_ID>>Item_Name>>Price_hrs>>Used_hrs>>Amount;
	if(Item_ID==id){
		cout<<"Your Given Id is found."<<endl;}	}
	infile.close();
	myfile.close();}
	
	void remove(){
	int id;	
	fstream file1;
	getter();
	cout<<"Enter id of that which you want to remove:"<<endl;
	cin>>id;
	ofstream myfile;
	myfile.open("Temp.txt",ios_base::app);   //end of file write kar na k lilay
	ifstream infile("DataFile.txt");
	while(!infile.eof()){
	infile>>Item_ID>>Item_Name>>Price_hrs>>Used_hrs>>Amount;
	if(!Item_ID==id){
	cout<<Item_ID<<" "<<Item_Name<<" "<<Price_hrs<<" "<<Used_hrs<<" "<<Amount<<endl;
	myfile<<endl<<Item_ID<<" "<<Item_Name<<" "<<Price_hrs<<" "<<Used_hrs<<" "<<Amount;}	}
	infile.close();
	myfile.close();
	rename("Temp.txt","DataFile.txt");//rename the temp.txt file to given DataFile.txt
}};
 int main() {
 	File_perations fp1;
 	fp1.in();
 	int op;
 	cout<<"Press \n1->For Show Data.\n2->For Search Data.\n3->For Remove Data."<<endl;
 	cin>>op;
 	switch(op){
	case 1:
 	fp1.show();
	break; 
 	case 2:
 	fp1.search();
 	break;
	case 3:
	fp1.remove();
	break;}
	return 0;}
