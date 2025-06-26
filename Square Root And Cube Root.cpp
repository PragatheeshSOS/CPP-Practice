// Square Root And Cube Root...........................
#include<iostream>
#include<math.h>
using namespace std;

double square(int number){
  return sqrt(number);
}

double cube(int number){
  return cbrt(number);
}

int main(){
  int number1 = 52,number2 = 90;
  cout<<"Square Root: "<<square(number1)<<endl;
  cout<<"Cube Root: "<<cube(number2)<<endl;
}
/*
OUTPUT:
Square Root: 7.2111
Cube Root: 4.4814
*/
