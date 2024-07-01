/*Eng:Abdulrahman Fawzy*/
/*abdelrahmanfawzy73@Gmail.com*/
#include<iostream>
#include<array>
#include<string>
using namespace std;
/* Enum to include integer and constant 
data and to follow core guideline.*/
enum optiones{value,add,fetch,Quit,muxmum_input=100};
/* create a class to include  information 
from user and save that in array and print it*/
class application
{
   public:
    int id=value,i=value;
    //array for names
    array<string,100>names;
    //array for ages
    array<int,100>ages;
    //function to print options
    void print_menu()
    {
     cout<<"----------------------------------------\n"
     <<"Please select an option \n"
     <<"1-Add Record\n"
     <<"2-Fetch Record\n"
     <<"3-Quit\n"
     <<"-->";
    }
    // function to add information of user and save it in array
   void Add_Record()
   {
        cout<<"Enter your name : ";
        cin>>names[i];
        cout<<"Enter your age : ";
        cin>>ages[i];
        cout<<"user record add successfully\n";
        cout<<"User ID is :"<<i<<"\n\n";
        i++;
   }
   //function to insert id and return information of user
   void fetch_Record()
   {
     cout<<"Plese Enter User ID : ";
     cin >>id;
     cout<<"User Name : "<<names[id]<<"\n"<<"User Age : "<<ages[id]<<"\n";
   }

};

int main()
{
 //declaration of class(application) into main function
 application box;
 int option=value;
 bool run=true;
cout<<"Welcome in user Sign-Up Application\n";
 
 while(run==true)
  {
    // for loop to limit input of user = 100 input.
    for(int x=value;x<muxmum_input;x++)
  {

  box.print_menu();
  cin>>option;
  // switch case to select option and do action of it.
    switch(option)
    {
        case add: box.Add_Record();break;
        case fetch:box.fetch_Record();break;
        case Quit:cout<<"Thank you to using application\n";run=false;break;
        default:cout<< "Invalid number try again\n";
    }
    // condition to out from for loop
   if (option==3)
   break;
  }
  run=false;
  
 }

}