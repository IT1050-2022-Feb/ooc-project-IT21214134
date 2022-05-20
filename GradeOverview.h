//Created by IT21213694

#include "Student.h"
class GradeOverview{
private:
 char referenceNo[6];
 float gpa;
 char grade;
 Student *Stu;
public:
 GradeOverview();
 GradeOverview(char gReferenceNo[], float gGpa, char gGrade,
Student *gStu);
 void displatGradeDetails();
 void updateGradeDetails();
 ~GradeOverview(); 
};