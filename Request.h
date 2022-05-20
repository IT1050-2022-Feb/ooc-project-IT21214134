//Created by IT21213762

#include"Report.h"
#include<iostream>
#include<cstring>
#define SIZE 20


class Request
{
private:
  Report *report[SIZE];
  int Req_No;
  string Req_Type;
  string Date;
  string Req_Description;

public:
  Request();
  void setRequest(int id,int no,char type,float pdate,string des);
  void ValidateDetails();
  void displayReport();
  ~Request();
};
