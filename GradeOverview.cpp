//Created by IT21213694

#include "GradeOverview.h"
#include "Student.h"
#include <cstring>
using namespace std;
GradeOverview::GradeOverview()
{
 strcpy(referenceNo, "");
 grade = 'o';
 gpa = 0;
}
GradeOverview::GradeOverview(char gReferenceNo[], float gGpa,
char gGrade, Student *gStu)
{
 strcpy(referenceNo, gReferenceNo);
 grade = gGrade;
 gpa = gGpa;

}
void GradeOverview::displatGradeDetails()
{

}
void GradeOverview::updateGradeDetails()
{

}
GradeOverview::~GradeOverview()
{
 //Destructor
}