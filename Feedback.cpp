//Created by IT21216046
#include "Feedback.h"

using namespace std;


Feedback::Feedback()
{
  strcpy(feedbackCode, "");
  description = "";
  response = "";
}

Feedback::Feedback(char fCode[], string des, Student *Stu)
{
  strcpy(feedbackCode, fCode);
  description =  des;
}

void Feedback::setResponse(string resp)
{
   
}

string Feedback::getResponse()
{
  
}

void Feedback::displayDetails()
{
  
}

Feedback::~Feedback()
{
  //Destructor
}