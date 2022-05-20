// created by IT21212222

#include "Guest.h"
#include <cstring>
using namespace std;
Guest::Guest()
{
 strcpy(name, "");
 strcpy(studentID, "");
 strcpy(studentEmail, "");
 year = 0;
semester = 0;
}
Guest::Guest(char sName[], char sID[], char sEmail[], int yr, 
int Sem)
{
 strcpy(name, sName);
 strcpy(studentID, sID);
 strcpy(studentEmail, sEmail);
 year = yr;
 semester = Sem;
}
void Guest::viewContent()
{
 
}
Guest::~Guest()
{
 //Destructor
}
