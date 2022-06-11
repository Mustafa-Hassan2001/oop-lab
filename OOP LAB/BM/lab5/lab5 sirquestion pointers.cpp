#include <iostream>
#include <string.h>
#include "lab5.h"
using namespace std;
int main() {
	UFSreconcilition *obj1 = new UFSreconcilition[2];
	for(int i=0;i<2;i++){
		obj1[i].takeinput();}
	for(int i=0;i<2;i++){
		obj1[i].printdata();}
	delete [] obj1;
	return 0;}
