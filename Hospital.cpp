#include "Hospital.h"
#include <iostream>

Hospital CreateHospital(Patient Patient[], Doctor Doctor[], int length_patients, int length_doctors) {
	Hospital hospital;
	for (int i = 0; i < length_patients; i++) {
		hospital.Patient[i] = Patient[i];
	}
	hospital.length_patients = length_patients;
	for (int i = 0; i < length_doctors; i++) {
		hospital.Doctor[i] = Doctor[i];
	}
	hospital.length_doctors = length_doctors;
}

void SetPatient(Hospital* Hospital, Patient Patient) {
	Hospital->Patient[Hospital->length_patients] = Patient;
	Hospital->length_patients++;
}

void SetDoctor(Hospital* Hospital, Doctor Doctor) {
	Hospital->Doctor[Hospital->length_doctors] = Doctor;
	Hospital->length_doctors++;
}

