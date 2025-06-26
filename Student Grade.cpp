// Student Grade.....................................
#include<iostream>
using namespace std;
int main(){
  int mark;
  cout<<"Enter Mark: ";
  cin>>mark;
  if(mark>=50 && mark<60){
    cout<<"Grade E";
  }
  else if(mark>=60 && mark<70){
    cout<<"Grade D";
  }
  else if(mark>=70 && mark<80){
    cout<<"Grade C";
  }
  else if(mark>=80 && mark<90){
    cout<<"Grade B";
  }
  else if(mark>=90 && mark<100){
    cout<<"Grade A";
  }
  else if(mark==100){
    cout<<"Grade O";
  }
  else if(mark<50){
      cout<<"Grade Fail";
  }
  else{
    cout<<"Invalid";
  }
}
/*
INPUT:
Enter Mark: 45
OUTPUT:
Grade Fail

INPUT:
Enter Mark: 55
OUTPUT:
Grade E

INPUT:
Enter Mark: 65
OUTPUT:
Grade D

INPUT:
Enter Mark: 75
OUTPUT:
Grade C

INPUT:
Enter Mark: 85
OUTPUT:
Grade B

INPUT:
Enter Mark: 95
OUTPUT:
Grade A

INPUT:
Enter Mark: 100
OUTPUT:
Grade O

INPUT:
Enter Mark: 1222
OUTPUT:
Invalid
*/
