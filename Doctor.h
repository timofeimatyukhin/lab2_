#pragma once
#include "Data.h"
#include "Patient.h"
struct Doctor {
	Data Data;
	Patient Patient[50];
	int length;
};
Doctor CreateDoctor(Data Data);
void PrintDoctor(Doctor Doctor);
void SetPatient(Doctor *Doctor, Patient Patient[], int length);
void PrintPatients(Doctor Doctor);
