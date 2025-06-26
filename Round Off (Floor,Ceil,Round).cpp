// Round Off (Floor,Ceil,Round).............................
#include<iostream>
#include<cmath> // Floor And Ceil Requires This Library
#include<bits/stdc++.h> // For Precisioning
using namespace std;
int main(){
  float number = 9.34;
  //Floor Will Give Lower Value....
  cout<<"Floor Value: "<<floor(number)<<endl;
  
  //Ceil Will Give Higher Value....
  cout<<"Ceil Value: "<<ceil(number)<<endl;
  
  //Round......................
  cout<<"Round Value: "<<round(number)<<endl;
  
  //Printing With Decimals.........
  cout<<fixed<<setprecision(10);
  cout<<"\nAftering Precisioning\n";
  cout<<"Floor Value: "<<floor(number)<<endl;
  cout<<"Ceil Value: "<<ceil(number)<<endl;
  cout<<"Round Value: "<<round(number)<<endl;
}
/*
OUTPUT:
Floor Value: 9
Ceil Value: 10
Round Value: 9

Aftering Precisioning
Floor Value: 9.0000000000
Ceil Value: 10.0000000000
Round Value: 9.0000000000
*/
