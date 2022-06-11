#include <iostream>
#include <string>
using namespace std;
class game{
	public:
		static int p1;
		static int p2;
		
	game(){
	}
	static void gamelogic(){
		int opt;
		while(true){
		tryagain:	
		cout<<endl;
		cout<<"Player-1 Guess any number : ";
		cin>>p1;
		cout<<endl;
		cout<<"Player-2 Guess any number : ";
		cin>>p2;
		cout<<endl;
		if(p2==p1 || p2==p1){
			cout<<"You won!!"<<endl;
			cout<<"Do you want to play again..."<<endl;
			cout<<"1->Yes"<<endl;
			cout<<"2->No"<<endl;
			cin>>opt;
			if(opt==1){
				goto tryagain;
			}
			if(opt==2){
				cout<<"Thank you to playing this game";
			}
			break;
		}
		else if(p1!=p2){
		goto tryagain;
		}
	}
}
};
int game::p1=0;
int game::p2=0;

int main(){
	cout<<"Welcome To Guessing Game...!!"<<endl;
//	cout<<""
	game g1;
	g1.gamelogic();	
	return 0;
}
