#include "File.h"
#include <iostream>
#include "Image.h"
#include "Text.h"
#include <vector>
using namespace std;

void output(vector<File*> list);
vector<File*> filterByType(vector<File*> v, string type);
void mainMenu();

int main()
{
  vector<File*> list;
  int input=7;
  while(true){
    mainMenu();
    cin>>input;
    
    switch(input){
      case 1:
        //read from File
      break;

      case 2:
        {
          
        
        int r;
        int c;
        int cd;
        string n;
        cout<<"How many pixel rows does your image have?: ";
        cin>>r;
        cout<<endl<<"How many pixel columns does your image have?: ";
        cin>>c;
        cout<<endl<<"What is the color depth of your image?: ";
        cin>>cd;
        cout<<"What is the name of your image?: ";
        cin>>n;
        cout<<endl;
        
        list.push_back(new Image(r,c,cd,n));}
      break;

      case 3:
        {
        int ch;
        string na;
        cout<<"How many characters does your text have?: ";
        cin>>ch;
        cout<<"What is the name of your text?: ";
        cin>>na;
        cout<<endl;
        
        list.push_back(new Text(ch,na));}
      break;

      case 4:
        output(list);
      break;

      case 5:
        output(filterByType(list,"Image"));
      break;

      case 6:
        output(filterByType(list,"Text"));
      break;

      case 7:
        {
        string type;
        string name;
        cout<<"What is the type and name of the file you want to delete?"<<endl;
        cout<<"Type? Image or Text:";
        cin>>type;
        cout<<endl<<"what is the name?"<<endl;
        cout<<"name?:";
        cin>>name;
        int index=0;
        for(int i=0; i<list.size();i++){
          if(list[i]->returnName()==name && list[i]->returnType()==type){
            index=i;
          }
        }
        list.erase(list.begin()+index);}
      break;

      case 8:
        exit(0);
      break;
    }
  }
  
}


//recursive output
void output(vector<File*> list){
if(list.size() != 0)
   {
      File* last = list[list.size() - 1];
      list.resize(list.size() - 1);
      output(list);
      last->display();
      cout << endl;
   }
}


//recursive filter
vector<File*> filterByType(vector<File*> v, string type){
   if (v.size() == 0)
   {
      vector<File*> empty;
      return empty;
   }
   File* last = v[v.size() - 1];
   v.resize(v.size() - 1);
   vector<File*> filtered = filterByType(v,type);
   if (last->returnType() == type)
   {
      filtered.push_back(last);
   }
   return filtered;
}

void mainMenu(){
  cout<<"1- Read from a File"<<endl;
  cout<<"2- Create an Image File"<<endl;
  cout<<"3- Create a Text file"<<endl;
  cout<<"4- Print all Files"<<endl;
  cout<<"5- Print Image Files"<<endl;
  cout<<"6- Print Text Files"<<endl;
  cout<<"7- Delete a file"<<endl;
  cout<<"8- Quit"<<endl;
  cout<<endl<<"Please Select and option from above^"<<endl<<endl;
  
}
