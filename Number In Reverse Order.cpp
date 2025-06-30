// Number In Reverse Order.................................................
// APPROACH 1..................................................
#include<iostream>
using namespace std;
int main(){
  int size;
  cout<<"Enter Number: ";
  cin>>size;
  int number = size;
  while(number>0){
    cout<<number<<" ";
    number--;
  }
}

// APPROACH 2........................................
#include<iostream>
using namespace std;
int main(){
  int size;
  cout<<"Enter Number: ";
  cin>>size;
  for(int i=size;i>0;i--){
    cout<<i<<" ";
  }
}
/*
INPUT:
Enter Number: 10
OUTPUT:
10 9 8 7 6 5 4 3 2 1
*/
