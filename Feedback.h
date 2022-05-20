//Created by IT21216046
#include "Student.h"
#include <cstring>
using namespace std;


class Feedback {
private:
  char feedbackCode[5];
  string description;
  string response;

public:
  Feedback();
  Feedback(char fCode[], string des, Student *Stu);
  void setResponse(string resp);
  string getResponse();
  void displayDetails();

  ~Feedback();
}
