#pragma once
struct Data {
	int NumberPas;
	int Height;
	int Weight;
	int Age;
};

Data CreateData(int NumberPas, int Height, int Weight, int Age);
void PrintData(Data Data);
void SetHeight(Data* Data, int Height);
void SetNumberPas(Data* Data, int NumberPas);
void SetWeight(Data* Data, int Weight);
void SetAge(Data* Data, int Age);

