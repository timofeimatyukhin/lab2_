#include "Patient.h"
#include <iostream>

Patient CreatePatient(Service Service, Data Data) {
	Patient patient;
	patient.Service = Service;
	patient.Data = Data;
}

void PrintPatient(Patient Patient) {
	std::cout << Patient.Service.Date << "; " << Patient.Service.Cost << "; " << Patient.Data.NumberPas << "; " << Patient.Data.Height << "; " << Patient.Data.Weight << "; " << Patient.Data.Age << std::endl;
}

void SetDoctor(Patient* Patient, Doctor Doctor) {
	Patient->Doctor = Doctor;
}


