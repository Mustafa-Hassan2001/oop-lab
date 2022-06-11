#include <iostream>
#include <String>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//=========== Header File ==========
class payroll{
	int  empid,House_rant,tax, fund, EOBI,Union,net_salary;
	string fname, lname, desig;
	float basic, prfuel,prmedical,totalearnings;
	public:
		payroll(int EMPID,string f, string l,string des,float bas):empid(EMPID),fname(f),desig(des),basic(bas){
			set_empid();set_fname();set_lname();set_desig();set_basic();
			set_prfuel();set_prmedical();set_totalearnings();set_House_rant();
			set_tax();set_fund();set_EOBI();set_Union();set_net_salary();}	
	void set_empid(){
	empid=(empid<200)?500:empid;}
	int get_empid(){
	return empid;}
	void set_fname(){
	fname=fname;}
	string get_fname(){
	return fname;}
	void set_lname(){
	lname=lname;}
	string get_lname(){
	return lname;}
	void set_desig(){
	desig=desig;}
	string get_desig(){
	return desig;}
	void set_basic(){
	basic=basic;}
	float get_basic(){
	return basic;}
	void set_prfuel(){
	prfuel=(basic/100)*15;}
	float get_prfuel(){
	return prfuel;}
	void set_prmedical(){
	prmedical=(basic/100)*20;}
	float get_prmedical(){
	return prmedical;}
	void set_House_rant(){
	House_rant=(basic/100)*20;}
	float get_House_rant(){
	return House_rant;}
	void set_tax(){
	tax=(basic/100)*15.5;}
	float get_tax(){
	return tax;}
	void set_fund(){
	fund=(basic/100)*10;}
	float get_fund(){
	return fund;}
	void set_EOBI(){
	EOBI=(basic/100)*8;}
	float get_EOBI(){
	return EOBI;}
	void set_Union(){
	Union=(basic/100)*3;}
	float get_Union(){
	return Union;}
	void set_totalearnings(){
	totalearnings=basic+prfuel+prmedical+House_rant;}
	float get_totalearnings(){
	return totalearnings;}
	void set_net_salary(){
	net_salary=totalearnings-tax-Union-EOBI-fund;}
	float get_net_salary(){
	return net_salary;}
	void displayslip(){
			cout<<endl<<"Employee ID:"<<get_empid();
			cout<<endl<<"Employee Name:"<<get_lname()<<""<<get_lname();
			cout<<endl<<"Employee Designation:"<<get_desig();
			cout<<endl<<"Earning: "<<get_totalearnings();
			cout<<endl<<"Basic salary:"<<get_basic();
			cout<<endl<<"fuel Allowance:"<<get_prfuel();
			cout<<endl<<"Medical Allowance:"<<get_prmedical();
			cout<<endl<<"House rant Allowance:"<<get_House_rant();
			cout<<endl<<"Tax:"<<get_tax();
			cout<<endl<<"Fund:"<<get_fund();
			cout<<endl<<"Total EOBI :"<<get_EOBI ();
			cout<<endl<<"Union :"<<get_Union();
			cout<<endl<<"Total Net_salary:"<<get_net_salary();
			cout<<endl<<"Total salary:"<<get_totalearnings();}
	};


