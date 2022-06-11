//lab-task-07
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
class publication{
	private:
 		string title;
 		float price;
	public:
void getdata(void){
  string t;
  float p;
  cout << "Enter title of publication: "<<endl;
  cin >> t;
  cout << "Enter price of publication: "<<endl;
  cin >> p;
  title = t;
  price = p;}
void putdata(void) {
  cout << "Publication title: " << title << endl;
  cout << "Publication price: " << price<<endl;}};
class book :public publication{
private:
 int pagecount;
public:
 void getdata(void) {
  publication::getdata(); //call publication class function to get data
  cout << "Enter Book Page Count: "<<endl; //Acquire book data from user
  cin >> pagecount;}
void putdata(void){
  publication::putdata();  //Show Publication data
  cout << "Book page count: " << pagecount << endl; //Show book data
 }};
class tape :public publication{
private:
 float ptime;
public:
 void getdata(void) {
  publication::getdata();
  cout << "Enter tap's playing time: "<<endl;
  cin >> ptime;}
 void putdata(void){
  publication::putdata();
  cout << "Tap's playing time: " << ptime << endl; }};
int  main(){
 book b;
 tape t;
 b.getdata();
 t.getdata();
 b.putdata();
 t.putdata();
 _getch();}

