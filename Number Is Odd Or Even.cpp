//Number Is Odd Or Even.............................................
#include<iostream>
using namespace std;

int main(){
  int number;
  cout<<"Enter Number: ";
  cin>>number;
  (number%2)?cout<<"Odd":cout<<"Even";
}
/*
INPUT:
Enter Number: 5
OUTPUT:
Odd

INPUT:
Enter Number: -4

OUTPUT:
Even

INPUT:
Enter Number: 0

OUTPUT:
Even
*/
