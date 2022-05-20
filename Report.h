//created by IT21212222

#include<iostream>
#include<cstring>
using namespace std;
class Report{
private:
 int reportid;
public:
 Report();
 void setReportid(int id);
 void displayApprovedLoanDetais();
 void displayRespondedFeedbacks();
 void displayPlacedRequests();
 void ListOfPlacesRequests();
 ~Report();
};
