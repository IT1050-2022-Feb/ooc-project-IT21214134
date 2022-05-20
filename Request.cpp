//Created by IT21213762

#include"Request.h"
#include"Report.h"
#include <cstring>
using namespace std;

Request::Request()
{
  report[0] = new Report(00);
  Req_No = 0;
  Req_Type = "";
  Date = "0";
  Req_Description = "" ;
  
}
void Request::setRequest(int id,int no,char type,float pdate,string des)
{
  report[0] = new Report(id);
  Req_No = no;
  Req_Type = type;
  Date = pdate;
  Req_Description = des;
  
}

void Request::displayReport()
{
  for (int i=0; i<SIZE; i++)
    {
      report[i] -> displayPlacedRequests();
    }

}

Request::~Request()
{
  cout << "Destruction for Request " << endl;
  for (int i=0; i<SIZE; i++)
    {
      delete report[i];
    }
  
}