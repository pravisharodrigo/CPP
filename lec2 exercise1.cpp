// Exercise  01
//calculate perimeter of rectangle with 2 decimal places
#include<iostream>
#include<iomanip>

int  main(void)  {

float length,width,perimeter=0;

std::cout<<"enter length  :";
std::cin>>length;
std::cout<<"width  :";
std::cin>>width;

perimeter=2*(length+width);

std::cout<<"pertimeter="<<std::fixed<<std::setprecision(2)<<perimeter<<std::endl;
//std::serprecision() is used to round numbers
//fixed is used to show its not scienstific method
return 0;
}