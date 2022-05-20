#include "Student.h"

class Ticket {
private:
  int ticketNo;
  char ticketType[];

public:
  Ticket();
  void setTicketNo(int tNo);
  void setTicketType(char type);
  int getTicketNo();
  char getTicketType();

  void validateDetails(Student *Stu);

  ~Ticket();
}