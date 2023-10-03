#pragma once
#include "service.h"
#include "Data.h"
#include "Doctor.h"
struct Patient {
	Service Service;
	Data Data;
	Doctor Doctor;
};
Patient CreatePatient(Service Service, Data Data);
void PrintPatient(Patient Patient);
void SetDoctor(Patient* Patient, Doctor Doctor);
