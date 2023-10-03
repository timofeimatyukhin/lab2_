#pragma once
#include "Patient.h"
#include "Doctor.h"
struct Hospital {
	Patient Patient[50];
	Doctor Doctor[50];
	int length_patients;
	int length_doctors;
};
Hospital CreateHospital(Patient Patient[], Doctor Doctor[], int length_patients, int length_doctors);
void SetPatient(Hospital* Hospital, Patient Patient);
void SetDoctor(Hospital* Hospital, Doctor Doctor);



