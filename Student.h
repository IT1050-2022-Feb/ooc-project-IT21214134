//Created by IT21213694
#include<iostream>
#include<cstring>
#include "Guest.h"
#include "GradeOverview.h"
#include "EnrolledModules.h"
#include "Feedback.h"
#define SIZE1 5
#define SIZE2 5
#define SIZE 6
using namespace std;
class Student : public Guest {
private :
 char username[20];
 char password[8];
 GradeOverview * Grades[SIZE1];
 EnrolledModules *modules[SIZE2];
 Feedback *feedback[SIZE];

public:
 Student();
 Student(char sUsername[], char sPassword[]);
 void login();
 void checkLoginDetails();
 void viewGradeDetails(GradeOverview *G);
 void viewModuleDetails(EnrolledModules *M);
 ~Student();
};
