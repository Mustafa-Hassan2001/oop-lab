//Multiplr inheritance
#include<iostream>
#include<string.h>
using namespace std;
class A{
	public:
		A(){cout<<"This is constrcutor of class A"<<endl;}
		void display(){
			cout<<"Class A"<<endl;}};
class B{
	public:
		B(){cout<<"This is constructor of class B"<<endl;}
		void display(){
			cout<<"Class B"<<endl;}};
class C:public A,public B{
	public:
		C(){cout<<"This is constructor of class C"<<endl;}
		void view(){
			//display();     
			A::display();  //calling the display() function of class
			B::display();  //calling the display() function of class
			}};
int main(){
	C c;
	c.view();
	return 0;}
