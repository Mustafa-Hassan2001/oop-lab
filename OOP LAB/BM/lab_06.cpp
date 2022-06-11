#include <iostream>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Static data members and members function. 
//class Account_Info{
//	public:
//		int accountID ;
//		string name;
//		string address;
//		Account_Info(){
//			accountID = 65854455;
//			name = "Mustafa Hassan";
//			address = "Karachi";
//		}
//};
//class Account:public Account_Info{
//	public:
//		static float amount;
//		Account(){
//		}
//		static void addamount(float transicition){
//			amount += transicition;
//			//account = 65658; 
//		}
//		int viewaccount(){
//			return accountID;
//		}
//};
//float Account::amount = 0;
//
//int main(int argc, char** argv) {
//	
//Account obj1;
//cout<<"Accout ID:"<<obj1.viewaccount()<<endl;
//cout<<"Name:"<<obj1.name<<endl;
//cout<<"Address"<<obj1.address<<endl;
//Account::addamount(5000);
//cout<<"Total Amount:"<<Account::amount<<endl;
////print name and  address.
//	return 0;
//}


//====================


//TASK # 1:
//class A{
//public:
//static int var;
//A(){
//var++;
//}
//};
//int A::var;
//int main(){
//A obj1;
//A obj2;
//A obj3;
//cout<<"Number of objects are:"<<A::var<<endl;
//return 0 ;
//}

//TASK # 2:

class game{
	public:
	static int num;
	int num2;
	game(){
		void set_data();
		void get_data();
	}
	void set_data(){
	for(int i=0;i<=10;i++){
	cout<<"Player-1 Enter number:"<<endl;
	cin>>game::num;	
	cout<<"Player-2 Enter number:"<<endl;
	cin>>num2;	
	if(num ==  num2){
		cout<<"Player-2 you won!"<<endl;
		break;	
	}
	else{
	cout<<"Player-1 Enter again number:"<<endl;
	cin>>game::num;
	cout<<"Player-2 Enter again number:"<<endl;
	cin>>game::num;	}	}  }
};
int game::num=0;
int main(){
	game  g1;
	g1.game::set_data();
	return 0;
}
