#include <iostream>
using namespace std;
enum week{	Sunday , Monday=5, Tuesday=3,
Wednesday, Thursday,Friday, Saturday};
class Customer;
class Shopkeeper{
	public:
		static int MWallet_Amount;
		public:
			Shopkeeper(int WAM){
				MWallet_Amount=WAM;
				cout<<endl<<"Amount Updated"<<endl;}
			Shopkeeper(){}
			void set_MWallet_Amount(int amount){
				MWallet_Amount=amount;}
			int get_MWallet_Amount(){
				return MWallet_Amount;}
		 friend class Customer;
		 friend void carparking(int);};
int Shopkeeper::MWallet_Amount=0;
class Customer{
	private:
		static int FWallet_Amount;
		public:
			Customer(){}
			void Give_PM(int amount){
				Shopkeeper objCall;
				FWallet_Amount -= amount;
				objCall.MWallet_Amount+=amount;}
			int get_FWallet_Amount(){
				return FWallet_Amount;}};
int  Customer::FWallet_Amount=5000;
void carparking(int PayAmount){
	Shopkeeper objPay;
	objPay.MWallet_Amount-= PayAmount;
	cout<<PayAmount<<"Amount Received"<<endl;}
//start of Encloseing class declaration
class book{
	string bookname="detail and detail c++ book";
	public:
		string get_book_num(){
			return bookname; }
//start of nested class declaration		
class pages{
	int page=1600;
	public:
		int get_page(){
			return page;}//declaration nested class ends here
};pages pag;};
int main(){
typedef unsigned int p_int;
book *obj1 = new book();
week today;
today = Friday;
cout<<"\t*****Welcome To Book Store*****"<<endl;
cout<<"Day "<<today<<endl<<endl;
cout<<"You select this Book : "<<obj1->get_book_num()<<endl<<endl;
cout<<"Number of pages in this book : "<<obj1->pag.get_page()<<" pages"<<endl<<endl;
p_int val1=1200;
cout<<"BOOK PRICE WHICH YOU WANT TO BUY IS :"<<val1<<endl<<endl;	
	Shopkeeper objPm1;
	cout<<"Shopkeeper Wallet Amount Before takeing amount from shop owner Amount Was : "<<objPm1.get_MWallet_Amount()<<endl<<endl;
	Shopkeeper ObjPm(2200);
	cout<<"Shopkeeper Wallet Amount After takeing amount from shop owner Amount is : "<<objPm1.get_MWallet_Amount()<<endl<<endl;
	Customer ObjGPm;
	cout<<"Customer's Wallet Amount Before payment of book Was : " <<ObjGPm.get_FWallet_Amount()<<endl<<endl;
	ObjGPm.Give_PM(1200);
	cout<<"Customer's Wallet Amount After payment of book is : "<<ObjGPm.get_FWallet_Amount()<<endl<<endl;
	cout<<"Shopkeeper Wallet Amount After takeing amount from Customer is : "<<objPm1.get_MWallet_Amount()<<endl<<endl;
	cout<<"Please Pay 500 for Car Parking"<<endl<<endl;
	carparking(500);
	cout<<"Customer Wallet Amount After given the car paking payment is : "<<objPm1.get_MWallet_Amount()<<endl<<endl;
	delete obj1;	
return 0;}
