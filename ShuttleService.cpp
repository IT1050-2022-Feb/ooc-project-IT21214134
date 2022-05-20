//created by IT21212222

#include "ShuttleService.h"
#include<cstring>
using namespace std;
ShuttleService::ShuttleService()
{
 strcpy(shuttleNo, "");
 shuttleTime = 0.0;
 shuttleRoute = "";
}
ShuttleService::ShuttleService(char No[], float Time, string 
Route)
{
 strcpy(shuttleNo, No);
 shuttleTime = Time;
 shuttleRoute = Route;
}
void ShuttleService::displayShuttleDetails()
{
 
}
void ShuttleService::updateShuttleDetails()
{
 
}
void ShuttleService::validateShuttleDetails(Student *Stu)
{
}
ShuttleService::~ShuttleService()
{
 //Destructors
}