//created by IT21212222

#include "Student.h"
using namespace std;
class ShuttleService {
private: 
 char shuttleNo[10];
 float shuttleTime;
 string shuttleRoute;
public:
 ShuttleService();
 ShuttleService(char No[], float Time, string Route);
 void displayShuttleDetails();
 void updateShuttleDetails();
 void validateShuttleDetails(Student *Stu);
 ~ShuttleService();
}
