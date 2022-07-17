#ifndef TEXT_H
#define TEXT_H

#include "File.h"

class Text:public File{

private:
  int characters;

public:
  Text();
  Text(int c, string n);
  virtual ~Text();
  virtual void display();
  virtual double returnSize();
  int returnCharacters();
};
#endif