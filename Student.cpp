//Created by IT21213694
#include "Student.h"
#include "Feedback.h"
#include "EnrolledModules.h"
#include <cstring>
using namespace std;
Student::Student()
{
 strcpy(username, "");
 strcpy(password, "");
 feedback[0] = new Feedback(00001);
 feedback[1] = new Feedback(00002);
}

void Student::login()
{

}
void Student::checkLoginDetails()
{

}
void viewGradeDetails(GradeOverview *G)
{

}
void viewModuleDetails(EnrolledModules *M)
{

}
Student::~Student()
{
 //Destructor
}