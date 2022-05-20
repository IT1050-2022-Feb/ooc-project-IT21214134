//Created by IT21214134
#include"Request.h"
#include"Student.h"
#include"StudentLoan.h"
#include"Ticket.h"

using namespace std;

int main ()
{
  Guest *guest = new Guest();
  Student *student = new Student();
  GradeOverview *grd = new GradeOverview();
  EnrolledModules *module = new EnrolledModules();
  LecturerInCharge *lic = new LecturerInCharge();
  Feedback *feed = new Feedback();
  LastLoginReport *lastlog = new LastLoginReport();
  Ticket *ticket = new Ticket();
  StudentLoan *loan = new StudentLoan();
  Request *req = new Request();
  Report *report = new Report();
  Content *content = new Content();
  FacultyInfo *faculty = new FacultyInfo();

  
  delete guest;
  delete student;
  delete grd;
  delete module;
  delete lic;
  delete feed;
  delete lastlog;
  delete ticket;
  delete loan;
  delete req;
  delete report;
  delete content;
  delete faculty;

  return 0;
}



