//Created by IT21213762

#include "EnrolledModules.h"
#include<string>
using namespace std;

class LecturerInCharge{
private:
  string lecName;
  char lecID[6];
  string lecEmail;

  EnrolledModules *modules;

public:
  LecturerInCharge();
  void setLecturerInChargeDetails(string name, char ID, string email, EnrolledModules *M);
  string getLecturerInChargeName();
  char getLecturerInChargeID();
  string getLecturerInChargeEmail();
  void displayLectureInChargeDetails();
  ~LecturerInCharge();
};