//Created by IT21213694
#include<iostream>
using namespace std;

class FacultyInformation
{
private:
 string FacultyName;
 string FacultyEmail;
 int ContactNo;
public:
 FacultyInformation();
 void setFacultyDetails( string name , string email , int no);
 string getFacultyName();
 string getFacultyEmail();
 int getContactNo();
 ~FacultyInformation();
};