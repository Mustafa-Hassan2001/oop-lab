#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Topic#1-> FRIND CLASS & FRIEND FUNCTION
//================================================================

//================================================================
//Topic#2-> Nested Class 

//================================================================
//Topic#3-> typedef is used to make user define datatype 
//enumanation in which we can store data in form of list.
enum week{	Sunday , Monday=5, Tuesday=3,
Wednesday, Thursday,Friday, Saturday};
//================================================================ 
class father;
class Munib{
	protected:
		static int MWallet_Amount;
		public:
			Munib(int WAM){
				MWallet_Amount=WAM;
				cout<<endl<<"Amount Updated"<<endl;}
			Munib(){}
			void set_MWallet_Amount(int amount){
				MWallet_Amount=amount;}
			int get_MWallet_Amount(){
				return MWallet_Amount;}
		 friend class father;
		 friend void shopkeeper(int);};
int Munib::MWallet_Amount=0;
class father{
	private:
		static int FWallet_Amount;
		public:
			father(){}
			void Give_PM(int amount){
				Munib objCall;
				FWallet_Amount -= amount;
				objCall.MWallet_Amount+=amount;}
			int get_FWallet_Amount(){
				return FWallet_Amount;}};
int  father::FWallet_Amount=5000;
void shopkeeper(int PayAmount){
	Munib objPay;
	objPay.MWallet_Amount-= PayAmount;
	cout<<PayAmount<<"Amount Received"<<endl;}
//================================================================	
//start of Encloseing class declaration
class pay_bill{
	int Bill_num=4;
	public:
		int get_Bill_num(){
			return Bill_num; 
		}
//start of nested class declaration		
class Engine{
	int Enginecc=16;
	public:
		int get_Enginecc(){
			return Enginecc;
		}//declaration nested class ends here
};		
	Engine Enginecc;
};
//================================================================	
int main(int argc, char** argv) {
	Munib objPm1;
	typedef unsigned int p_int;
p_int val1=-200;
cout<<"Int :"<<val1<<endl;	
week today;
today = Friday;
cout<<"Day "<<today<<endl;
	cout<<"Munib Wallet Amount Was:"<<objPm1.get_MWallet_Amount();
	Munib ObjPm(2200);
	cout<<"Munib Wallet Amount is:"<<objPm1.get_MWallet_Amount()<<endl;
	father ObjGPm;
	cout<<"Father's Wallet Amount Was:" <<ObjGPm.get_FWallet_Amount()<<endl;
	ObjGPm.Give_PM(1200);
	cout<<"Father's Wallet Amount is:"<<ObjGPm.get_FWallet_Amount()<<endl;
	cout<<"Munib Wallet Amount is:"<<objPm1.get_MWallet_Amount()<<endl;
	cout<<"Pay 500 to shopkeeper"<<endl;
	shopkeeper(500);
	cout<<"Munib Wallet Amount is:"<<objPm1.get_MWallet_Amount()<<endl;
		pay_bill *obj1 = new pay_bill();
	cout<<"Car Size is: "<<obj1->get_Bill_num()<<endl;
	cout<<"Car Engine Specifications are: "<<obj1->Enginecc.get_Enginecc();
	delete obj1;
	return 0;}
