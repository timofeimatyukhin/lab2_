#include "Doctor.h"
#include <iostream>

Doctor CreateDoctor(Data Data) {
	Doctor doctor;
	doctor.Data = Data;
	doctor.length = 0;
}

void PrintDoctor(Doctor Doctor) {
	std::cout << Doctor.Data.NumberPas << "; " << Doctor.Data.Height << "; " << Doctor.Data.Weight << "; " << Doctor.Data.Age << std::endl;
}

void PrintPatients(Doctor Doctor) {
	for (int i = 0; i < Doctor.length; i++) {
		PrintPatient(Doctor.Patient[i]);
	}
}

void SetPatient(Doctor* Doctor, Patient Patient[], int length) {
	for (int i = 0; i < length; i++) {
		Doctor->Patient[Doctor->length + i] = Patient[i];
	}
	Doctor->length += length;
}

