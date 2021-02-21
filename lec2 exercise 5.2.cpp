// continue entering prices until -1 is entered

#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
  float price = 0 ;
  float discount = 0 ;

cout << " price:"<< endl<<endl;
  
 while( price !=-1){
   cout<<"customer"<<endl;
   
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
