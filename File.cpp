#include "File.h"


 File::File():type("default"),name("default"){
   //empty
 }

  File::File(string t, string n):type(t),name(n){
    //empty
  }

  File::~File(){
    //empty
  }

  void File::setType(string t){
    type=t;
  }
  void File::setName(string n){
    name=n;
  }

  string File::returnType() const{
    return type;
  }
  string File::returnName() const{
    return name;
  }



