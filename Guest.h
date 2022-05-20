//created by IT21212222

class Guest {
protected : 
 char name[20];
 char studentID[10];
 char studentEmail[20];
 int year;
 int semester;
public:
 Guest();
 void viewContent();
 Guest(char sName[], char sID [], char sEmail [], int yr, int 
sem);
 ~Guest();
};
