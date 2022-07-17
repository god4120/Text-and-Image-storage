#include "Text.h"
#include <iostream>

Text::Text():File(),characters(0){
  //empty
}

Text::Text(int c,string n):File("Text",n),characters(c){
  //empty
}

Text::~Text(){
  //empty
}

void Text::display(){
  cout<<returnName()<<" is a "<<returnType()<<" file with "<<returnCharacters()<<" characters and is "<<returnSize()<<" bytes large";
}

double Text::returnSize(){
  int bits=characters*8;
  int bytes=bits/8;
  return bytes;
  
}

int Text::returnCharacters(){
  return characters;
}