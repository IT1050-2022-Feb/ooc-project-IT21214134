#include "EnrolledModules.h"
#include "Student.h"
#include "LecturerInCharge.h"
#include <cstring>
using namespace std;


EnrolledModules::EnrolledModules()
{
  strcpy(moduleCode, "");
  strcpy(moduleName, "");
  strcpy(enrolledType, "");
}

EnrolledModules::EnrolledModules(char mCode[], char mName[], char eType[], Student *mStu)
{
  strcpy(moduleCode, mCode);
  strcpy(moduleName, mName);
  strcpy(enrolledType, eType);

  
}
  
void displaymoduleDetails(Student *mStu, LecturerInCharge *lec)
{
  
}

EnrolledModules::~EnrolledModules()
{
  //Destructors
}

