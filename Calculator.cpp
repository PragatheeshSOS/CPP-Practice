//Calculator..............................................................................................
#include<iostream>
#include<math.h>
using namespace std;

int add(int num1,int num2){
  return num1+num2;
}

int sub(int num1,int num2){
  return num1-num2;
}

int mul(int num1,int num2){
  return num1*num2;
}

int divison(int num1,int num2){
  return (num2>0)?num1/num2:-1;
}

int mod(int num1,int num2){
  return (num2>0)?num1%num2:-1;
}

int power(int num1,int num2){
  return pow(num1,num2);
}
int main(){
  int num1,num2;
  cout<<"Enter Number 1: ";
  cin>> num1;
  cout<<"Enter Number 2: ";
  cin>> num2;
  cout<<"---- Calculated Results ----\n";
  cout<<"Addition: "<<add(num1,num2)<<endl;
  cout<<"Subtraction: "<<sub(num1,num2)<<endl;
  cout<<"Multiplication: "<<mul(num1,num2)<<endl;
  cout<<"Division: "<<divison(num1,num2)<<endl;
  cout<<"Modulus: "<<mod(num1,num2)<<endl;
  cout<<"Power: "<<power(num1,num2)<<endl;
}
/*
INPUT:
Enter Number 1: 5
Enter Number 2: 5
OUTPUT:
---- Calculated Results ----
Addition: 10
Subtraction: 0
Multiplication: 25
Division: 1
Modulus: 0
Power: 3125

INPUT:
Enter Number 1: 0
Enter Number 2: 5
OUTPUT:
---- Calculated Results ----
Addition: 5
Subtraction: -5
Multiplication: 0
Division: 0
Modulus: 0
Power: 0

INPUT:
Enter Number 1: 5
Enter Number 2: 0
OUTPUT:
---- Calculated Results ----
Addition: 5
Subtraction: 5
Multiplication: 0
Division: -1
Modulus: -1
Power: 1
*/
