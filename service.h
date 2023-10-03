#pragma once
#include <iostream>
using namespace std;
struct Service {
	string Date;
	int Cost;
};
Service createService(string Date, int Cost);
void PrintService(Service Service);


