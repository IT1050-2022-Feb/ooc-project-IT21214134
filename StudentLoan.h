//Created by IT21216046
#include "Student.h"
#include "Report.h"
#include <string>
#define SIZE 5
using namespace std;

class StudentLoan {
private:
  char loanNo[6];
  float amount;
  string description;
  char approval[3];
  string Date;

  Report *reports[SIZE];

public:
  StudentLoan();
  StudentLoan(char No[], float Amount, string des, char appro[], string D, Student *Stu);
  void displayApproval(int reportid);

  ~StudentLoan();
}