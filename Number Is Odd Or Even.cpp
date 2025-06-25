//Number Is Odd Or Even.............................................
//APPROACH 1......................................
#include<iostream>
using namespace std;

int main(){
  int number;
  cout<<"Enter Number: ";
  cin>>number;
  (number%2)?cout<<"Odd":cout<<"Even";
}

//APPROACH 2......................................
#include<iostream>
int main(){
  int number;
  std::cout<<"Enter Number: ";
  std::cin>>number;
  if (number%2)
    std::cout<<"Odd";
  else
    std::cout<<"Even";
}

//APPROACH 3......................................
#include<iostream>
using namespace std;

bool isEven(int number){
  return (!(number&1));
}
int main(){
  int number;
  cout<<"Enter Number: ";
  cin>>number;
  isEven(number)?cout<<"Even":cout<<"Odd";
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
