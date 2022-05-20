//Created by IT21214134
#include "Student.h"
#include "LecturerInCharge.h"


class EnrolledModules {
private:
  char moduleCode[6];
  char moduleName[20];
  char enrolledType[10];

  Student *Stu;
  LecturerInCharge *lecturers;

public:
  EnrolledModules();
  EnrolledModules(char mCode[], char mName[], char eType[], Student *mStu);
  void displaymoduleDetails(Student *mStu, LecturerInCharge *lec);
  ~EnrolledModules();
}

