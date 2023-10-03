#include "Data.h"
#include <iostream>

Data CreateData(int NumberPas, int Height, int Weight, int Age) {
	Data data;
	data.NumberPas = NumberPas;
	data.Height = Height;
	data.Weight = Weight;
	data.Age = Age;
	return data;
}

void PrintData(Data Data) {
	std::cout << Data.NumberPas << "; " << Data.Height << "; " << Data.Weight << "; " << Data.Age << std::endl;
}

void SetHeight(Data* Data, int Height) {
	Data->Height = Height;
}

void SetNumberPas(Data* Data, int NumberPas) {
	Data->NumberPas = NumberPas;
}

void SetWeight(Data* Data, int Weight) {
	Data->Weight = Weight;
}

void SetAge(Data* Data, int Age) {
	Data->Age = Age;
}




