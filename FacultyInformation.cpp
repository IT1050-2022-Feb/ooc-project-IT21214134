//Created by IT21213694
#include "FacultyInformation.h"
#include<cstring>
using namespace std;
FacultyInformation::FacultyInformation()
{
 FacultyName = "";
 FacultyEmail = "";
 ContactNo = 0;

}
void FacultyInformation::setFacultyDetails(string name,string
email,int no)
{
 FacultyName = name;
 FacultyEmail = email;
 ContactNo = no;
}
string FacultyInformation::getFacultyName()
{

}
string FacultyInformation::getFacultyEmail()
{

}
int FacultyInformation::getContactNo()
{

}
FacultyInformation::~FacultyInformation()
{
 //Destructor
}