#include<iostream>
#include<array>
#include<string>
constexpr int fries =1;
constexpr int burger =2;
constexpr int out =3;
constexpr int frise_price=1;
constexpr int burger_price=2;

int main()
{
    int price=fries;
    bool run =true;
    std:: cout<<"welcome in Restrarnt\n";
    while (run==true)
    {
     std::cout<<"-----------------------------------------------------------\n";
     std:: cout  <<"The menu is-> \n 1-frize\n 2-burger\n 3-Exit\n "
    <<"Enter number of order to show price\n ";
    std:: cin>>price;
    
    switch(price)
    {
    case fries:
    {
        std::cout<<"The price of frize is"<<frise_price<<"$ and "<<frise_price*50<<"LE\n";
    }break;
    
    case burger:
    {
        std::cout<<"The price of Burger is "<<burger_price<<"$ and "<<burger_price*50<<"LE\n";
    } break;
    case out:
    {
        std:: cout<<"Thank you \n";
        run=false;
    }break;
   
    default:if(price!=out)
    {
        std::cout<<"this number is not found in menu  \n";
    }  break;
    }
    }
    
    }
    
