#include "Image.h"
#include <iostream>
Image::Image():File(),pixelRows(0),pixelColumns(0),colorDepth(0){
  setName("default");
}

Image::Image(int r,int c, int cd, string n):File("Image",n),pixelRows(r),pixelColumns(c),colorDepth(cd){
//empty
}
Image::~Image(){
  //empty
}

void Image::display(){
   cout<<returnName()<<" is a "<<returnType()<<" file with "<<returnPixelColumns()<<" pixel columns and "<< returnPixelRows()<<" pixel rows has a color depth of "<<returnColorDepth()<<" and is "<<returnSize()<<" bytes large";
}
double Image::returnSize(){
  int bitSize=pixelRows*pixelColumns*colorDepth;
  int byteSize=bitSize/8;
  return byteSize;
}

int Image::returnColorDepth(){
  return colorDepth;
  }

int Image::returnPixelColumns(){
  return pixelColumns;
}
int Image::returnPixelRows(){
  return pixelRows;
}