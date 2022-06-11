#include <iostream>
#include <string>
using namespace std;

class UFSreconcilition{
	string *TBSname;
	int*code, *poenreadcm, *openreadcm , *closereadcm, *differencecm;
	float *purchasemcf;
	const double ufgunit = 28.17285d;
	public:
		UFSreconcilition(){
			set_code(); set_TBSname(); set_openreadcm(); set_closereadcm();
			set_differencecm();	set_purchasecf();
		}
	void set_TBSname(){
		TBSname =new string;}
	void set_code(){
		code =new int;}
	void set_openreadcm(){
		openreadcm = new int;}
	void set_closereadcm(){
		closereadcm = new int;}
	void set_differencecm(){
		differencecm = new int;}
	void set_purchasecf(){
		purchasemcf = new float;}
	void printdata(){
		cout<<*code<< "\t\t" << *openreadcm <<"\t\t"<< *closereadcm <<"\t\t"<< *differencecm<<"\t\t"<<*purchasemcf<<endl;}
	void set_ufg();
	void takeinput();
	~UFSreconcilition(){
		delete TBSname;
		delete code;
		delete openreadcm;
		delete closereadcm;
		delete differencecm;
		delete purchasemcf;}
//cout<<*code<< "\t\t" << *openreadcm<< "\t\t" << *closereadcm <<"\t\t"<< *differececm<<"\t\t"<<*purchasemcf<<endl;
};
void UFSreconcilition::set_ufg(){
	*differencecm = *closereadcm - *openreadcm;
	*purchasemcf = *differencecm / ufgunit;}
void UFSreconcilition::takeinput(){
	cout<<"Enter TBS code:";
	cin>>(*code);
	cin.clear();
	fflush(stdin);
	cout<<"Enter TBS name:";
	cin>>*TBSname;
	cout<<"Enter open Reading:";
	cin>>*openreadcm;
	cout<<"Enter close Reading:";
	cin>>*closereadcm;
	set_ufg();
	printdata();}
