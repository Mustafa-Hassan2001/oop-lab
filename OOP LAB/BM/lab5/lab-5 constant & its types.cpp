#include <iostream>
#include <string>
using namespace std;

void uppercase(char *stptr ){
		while(*stptr != '\0'){
		if(islower (*stptr)){
			*stptr = toupper(*stptr);
			cout<<"String Print:"<<*stptr<<endl;
			++stptr;}}}
int main() {
	int val1 = 55;
	int val2 = 65;
	//1-Non constant Pointer to non constant data
	char text[] = "mohammad ali jinnah university";
	char *a=text;
	cout<<"string before operation: "<<text<<""<<a<<endl;
	uppercase(text);
	cout<<"string after operation:" << text<<endl;
	//2-Non contant pointer to contant data
	//( cont int )* number = 658;
	const int *number =&val1;
	cout<<"Print Non constant pointer's contant data:"<<*number<<endl;
	number =& val2;
	cout<<"print Non constant pointer's contant data after change: "<<*number<<endl;
	//3-consatnt Pointer to non constant data
	int *const number2 =&val1;
	//int* (const number ) =& val1;
	cout<<"Print constant pointer's Non-contant data:"<<*number2<<endl;
	*number2=834;
	cout<<"Print constant pointer's non constant data after change:"<<*number<<endl;
	//4-consatnt Pointer to constant data
	// (const int*) (const number) = &val1;
	const int* const number3 =& val1;
	cout<<"Print constant pointer's contant data:"<<*number3<<endl;
	// *number3 = 831;
	//number3 = &val1;
	cout<<"Print constant pointer's contant data after change:"<<*number<<endl;
	return 0;
}


