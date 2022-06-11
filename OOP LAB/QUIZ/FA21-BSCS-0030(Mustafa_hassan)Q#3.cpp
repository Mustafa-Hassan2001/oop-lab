#include <iostream>
using namespace std;

template <typename T > T getdata(string x,T y){
	cout<<x;
	cin>>y;
	return y;
}

int main(){
int i;
string n;
float f;
string name = getdata("Enter name :",n);
int age = getdata("Enter age :",i);
float amount = getdata("Enter Amount :",f);

	return 0;
}
