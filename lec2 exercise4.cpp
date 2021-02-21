// Exercise  04

/* Display number 1000,900,800,700,… 100 Using a
   while loop, do while loop and a for loop
   within the same program.
*/

#include <iostream>
using namespace std;

int main(void) {
  //veriable declaration
  int count=1000;

  //while
  while(count>=100){
    cout<<count<<"'";
    count-=100;
  }
  cout<<endl;

//do-while
  count=1000;
  do{
    cout<<count <<",";
    count-=100;
  }while(count>=100);
    cout<<endl;

    //for 
  for(int count=1000;count>=100;count-=100){
     cout<<count<<",";
  }
  cout << endl;

    return 0;
}
