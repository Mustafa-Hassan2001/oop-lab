#include<iostream>
using namespace std;
class Animal{
	public:
	eat(){
		cout<<"Eating...\n";
	}
	int color(){
		cout<<"\nThis is Animal Class\n";
	}
};
class Dog: public Animal,Food{
	public:
	int color(){
	cout<<"\nThis is inside Dog class\n";	
	}	
	bark(){
	cout<<"Barking....";
	}
	display(){
		Animal::color();
		Dog::color();
		Food::food1();
	}
};
class Food{
	public:
		void food1(){
			cout<<"Food is inherits dog class\n";
		}
		
}; 
int main(){
	Dog d;
	d.eat();
	d.bark();
//	d.color();
//	d.Animal::color();
//	is used to access Animal member function
	d.display();
	Food f;
	f.food1();
}
