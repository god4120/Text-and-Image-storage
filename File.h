#ifndef FILE_H
#define FILE_H
#include <string>
using namespace std;

class File{

private:
  string type;
  string name;



public:
  File();
  File(string t, string n);

  void setType(string t);
  void setName(string n);

  string returnType() const;
  string returnName() const;

virtual void display()=0;
virtual double returnSize()=0;

virtual ~File();
};




#endif