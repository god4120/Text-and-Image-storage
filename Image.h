#ifndef IMAGE_H
#define IMAGE_H

#include "File.h"
class Image:public File{

private:
  int pixelRows;
  int pixelColumns;
  int colorDepth;

public:
  Image();
  Image(int r,int c, int cd, string n);
  virtual void display();
  virtual double returnSize();
  virtual ~Image();

  int returnColorDepth();
  int returnPixelColumns();
  int returnPixelRows();
};

#endif