#include <iostream>
#include <string.h>
#include "task.h"
using namespace std;
int main() {
	//Main part
	POLBILL *obj1 = new POLBILL;
		obj1->get_data();
		obj1->printdata();
	delete[] obj1;
	return 0;
}
