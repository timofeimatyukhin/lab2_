#include "service.h"
#include <iostream>

Service createService(string Date, int Cost) {
	Service service;
	service.Date = Date;
	service.Cost = Cost;
	return service;
}

void PrintService(Service Service) {
	std::cout << Service.Date << "; " << Service.Cost << "ð" << std::endl;
}

