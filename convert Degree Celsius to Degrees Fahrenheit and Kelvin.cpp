// Temperature
// convert Degree Celsius to Degrees Fahrenheit and Kelvin
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
  int cel;
  float Fahr,Kel;
  cout<<"Please Enter Degree Celsius: ";
  cin>>cel;
  
  Fahr = (1.8 * cel) + 32;
  Kel = cel + 273.15;
  
  cout<<"\n\nDegrees Fahrenheit= "	<<Fahr<<"\n\Kelvin= "<<Kel;
}
.