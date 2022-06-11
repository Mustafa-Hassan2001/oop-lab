//Sir written code 
#include<iostream>
using namespace std;
class Shape{
	public:
	int a,b;
	getdata(int n, int m){
		a= m;
		b = n;	}};
class rectangle: public Shape{
	public:
	int RectArea(){
		int	result = a * b;
	return result;}};
class Triangle: public Shape{
	public:
	int TriArea(){
		float result = 0.5 * a * b;
		return result;}};
int main(){
	rectangle r;
	Triangle t;
	int l,b,base, height;
	cout<<"Enter lenght and breath of Rectangle: \n"<<endl;
	cin>>l>>b;
	r.getdata(l,b);
	int m = r.RectArea();
	cout<<"Area Of Rectangle: "<<m<<endl;
	cout<<"\nEnter base and height of triangle\n";
	cin>>base>>height;
	t.getdata(base,height);
	float n = t.TriArea();
	cout<<"Area Of Triangle: "<<n<<endl;}

