// Exercise 05

/* • Modify the EX03 to input details of 3 customers and
    calculate the total discount amount given.
   • What would you do if you want to continue entering prices until -1 is entered ?
    What would you do if you want to enter data until user enters
    ‘y’ to continue and ‘n’ to stop?
*/

#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
  float price = 0 ;
  float discount = 0 ;


  //for 3 customers
 for(int c=1;c<=3;c++){
   cout<<"customer"<<c<<endl;
   cout << " price:"<< endl<<endl;
    cin >> price; 
    if (price>=3000){

     if ((price>=3000) && (price<5000))
        discount = (price * 10/100) ;

       else if ((price>=5000) && (price<10000)) 
        discount = (price * 15/100) ;

     else 
      discount = (price*25/100) ;

     cout <<"Discount: "<< setiosflags (ios::fixed) <<  setprecision(2)<< discount << endl;  
     }
     else 
     cout<<"No discount  "<<endl;  

     //
  }
  return 0;    
}


