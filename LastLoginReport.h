//Created by IT21213762

#include "Student.h"
using namespace std;

class LastLoginReport {
private:
  string Date;
  float Time; 

public:
  LastLoginReport();
  void UpdateDetails(Student *Stu);
  void RemoveDetails();

  ~LastLoginReport();
};
