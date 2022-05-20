//Created by IT21216046
#include "StudentLoan.h"
#include "Report.h"
#include <cstring>

using namespace std;

StudentLoan::StudentLoan()
{
  strcpy(loanNo, "");
  amount = 0;
  description = "";
  strcpy(approval, "");
  Date = "0";

  reports[0] = new Report(000000);
  reports[1] = new Report(000001);
}

StudentLoan::StudentLoan(char No[], float Amount, string des, char appro[], string D, Student *Stu)
{
  strcpy(loanNo, No);
  amount = Amount;
  description = des;
  strcpy(approval, appro);
  Date = D;
}

void StudentLoan::displayApproval(int reportid)
{
  
}

StudentLoan::~StudentLoan()
{
  //Destructor
}
