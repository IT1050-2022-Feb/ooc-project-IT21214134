//Created by IT21216046
#include <iostream>
using namespace std;


class Content 
{
private:
  string type;
  string category;
  string description;

public:
  Content();
  void setType(string type);
  void setCategory(string cat);
  void setDescription(string des);
  void removeContent();
  void displayContent();
  ~Content();

};