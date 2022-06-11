#include <iostream>
using namespace std;
//template <typename T> T myMax(T x, T y)
//{
//	return (x > y) ? x : y;
//}
//
//int main(){
//	cout << myMax<int>(13, 7) << endl; 
//	cout << myMax<double>(3.0, 7.0)<< endl; 
//	cout << myMax<char>('g', 'e')<< endl; 
//
//	return 0;
//}

//// C++ program to demonstrate the use of class templates
//
//#include <iostream>
//using namespace std;
//
//
//template <class T>
//class Number {
//   private:
//    T num;
//   public:
//    Number(T n) : num(n) {}  
//    T getNum() {
//        return num;
//    }
//};
//
//int main() {
//    Number<int> numberInt(7);
//    Number<double> numberDouble(7.7);
//
//    cout << "int Number = " << numberInt.getNum() << endl;
//    cout << "double Number = " << numberDouble.getNum() << endl;

//    return 0;
//}

//class A{
//	public:
//		template <class T> void print(T a){
//			cout<<a<<endl;
//		}
//};
//class B: public A{
//	
//};

//class A{
//	public:
//		template <class T> void function(string st,T var){
//			cout<<"\t"<<"Recived: "<<var<<endl;
//		}
//};
//class B: virtual public A{
//};
//class C: virtual public A{
//};
//class D: public B,C{
//};
//int main(){
//	D obj1;
//	obj1.function("Enter any data ",44);
//	return 0;
//}

//operator overloading 
class any{
	public:
		int a, b, c;
		any operator+(any c){
			any temp;
			temp.a=c.a+a;
			temp.b=c.b+b;
			return temp;	}
		any operator+=(any e){
			any obj;
			a+=e.a;
			b+=e.b;
			obj.a=a;
			obj.b=b;
			return obj;	}
any operator--(){
	any temp;
	temp.a=--a;
	temp.b=--b;
	return temp;}		
any operator++(int){
	any temp;
	temp.a=a++;
	temp.b=b++;
	return temp;}		};
int main(){
	any obj1, obj2, obj3;
	obj1={5,3};
	obj2={3,8};
	cout<<"\n The Actual Value of \n Object 3 A= "<<obj3.a<<endl;
	cout<<"1 Object 3 B= "<<obj3.b<<endl;
	obj3=obj1+obj2;
	cout<<"\n after implemetation obj1+obj2\n 2 Object 3 A="<<obj3.a<<endl;
	cout<<"2 Object 3 B= "<<obj3.b<<endl;
	obj3+=obj1;
	cout<<"\n After using  += operator \n3 Object 3 A="<<obj3.a<<endl;
	cout<<"3 Object 3 B= "<<obj3.b<<endl;
	--obj3;
	cout<<"\n After impletetion uniry prefix operator \n Object 3 A= "<<obj3.a<<endl;
	cout<<"Object 3 B= "<<obj3.b<<endl;	
	obj3++;
	cout<<"\n After impletetion uniry postfix operator \n Object 3 A= "<<obj3.a<<endl;
	cout<<"Object 3 B= "<<obj3.b<<endl;	
	return 0;}
