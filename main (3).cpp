/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
  double temp;
  char unit;
  
  cout<<"*******temperature converter*********\n";
  
 cout<<"Fahrenheit= F"<<'\n';
 cout<<"Celcius = C"<<'\n';
 
 cout<<"enter the unit in f or c : ";
 cin>>unit;
 
 if(unit== 'F' || unit=='f') {
     cout<<"enter the temp in C: ";
        cin>>temp;

     temp=(1.8*temp)+32.0;
     cout<<"the temp in fahrenheit is: "<<temp<<'\n';
     
 }
 

else if(unit=='c' || unit=='C') {
    
    cout<<"enter the temp in F: ";
     cin>>temp;
    temp=(temp-32)/1.8;
    cout<<"the temp in fahrenheit is : "<<temp<<'\n';
   
}




    return 0;
}