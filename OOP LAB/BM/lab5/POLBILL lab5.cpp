#include <iostream>
#include <string>
using namespace std;

class POLBILL{
	// class part 
	string *vehicle;
	int *fuelcon, *openread, *closeread, *fuelrate, *differnce,*amount;
	float *avg;
	
	public:
		POLBILL(){
		set_vehicle();
		set_fuelcon();
		set_openread();
		set_closeread();
		set_fuelrate();
		set_differnce();
		set_avg();
		}
		void set_vehicle(){
			vehicle = new string;}
		void set_fuelcon(){
			fuelcon = new int;}
		void set_openread(){
			openread = new int;}
		void set_closeread(){
			closeread = new int;}
		void set_fuelrate(){
			fuelrate = new int;}
		void set_differnce(){
			differnce = new int;}
		void set_avg(){
			avg = new float;}
		void printdata(){
		cout<<*vehicle<< "\t\t" <<  *openread <<"\t\t"<< *closeread <<"\t\t"<< *differnce<<"\t\t"<<*fuelcon<<"\t\t"<<*fuelrate<<"\t\t"<<*avg<<"\t\t"<<*amount<<endl;}	
   		void set_data();
		void get_data();
		~POLBILL(){
		delete vehicle;
		delete fuelcon;
		delete openread;
		delete closeread;
		delete fuelrate;
		delete differnce;
		delete avg;}
};
int main() {
	//Main part
	POLBILL *obj1 = new POLBILL;
		obj1->get_data();
		obj1->printdata();
	delete[] obj1;
	return 0;
}
void POLBILL::set_data(){
		*differnce = *closeread - *openread;
		*avg = *differnce / *fuelrate;
		*amount = *differnce + *openread + *closeread;}
void POLBILL::get_data(){
	cout<<"Enter Vechile number:";
	cin>>(*vehicle);
	cin.clear();
	fflush(stdin);
	cout<<"Enter open Reading:";
	cin>>*openread;
	cout<<"Enter close Reading:";
	cin>>*closeread;
	cout<<"Enter Fuel consumed:";
	cin>>*fuelcon;
	cout<<"Enter Fuel Rate:";
	cin>>*fuelrate;
	set_data();	
	printdata();}

