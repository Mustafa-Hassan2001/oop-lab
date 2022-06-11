#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class GenerateID{
public:
virtual int generateID() = 0;
};
class GenerateAID: public GenerateID{
public:
int generateID(){
fstream file1, file2;
int ID = 0;
string name= " ", Department= " ";
file1.open("Account.txt",ios_base::app);
file1.close();
file2.open("Account.txt",ios_base::in);
while(true){
while(!file2.eof()){
file2>>ID>>name>>Department;
}
if(ID==0){
ID = 1;
}
else{
ID+=1;
}
cout<<"Account ID is Generated: "<<ID<<endl;
return ID;
}
file2.close();
return ID;
}
};
class GenerateTraID: public GenerateID{
public:
int generateID(){
fstream file1,file2;
int ID = 0;
string name= " ", Department= " ";
file1.open("Textf.txt",ios_base::app);
file1.close();
file2.open("Textf.txt",ios_base::in);
while(true){
while(!file2.eof()){
file2>>ID>>name>>Department;}
if(ID==0){
ID = 1;}
else{
ID+=1;}
cout<<"Transaction ID is Generated: "<<ID<<endl;
return ID;}
file2.close();
return ID;}};
int main(){
GenerateID *bptr;
GenerateAID c;
GenerateTraID d;
bptr = &d;
int a = bptr->generateID();
bptr = &c;
int b = bptr->generateID();
return 0;}
