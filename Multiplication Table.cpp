// Multiplication Table................................................................
#include<iostream>
using namespace std;

void table(int x){
  for(int i=1;i<=10;i++){
    cout<<i<<" x "<<i<<" = "<<x*i<<endl;
  }
}

void table1(int x){
  int i = 1;
  while(i<=10){
    cout<<i<<" x "<<i<<" = "<<x*i<<endl;
    i++;
  }
}

int main(){
  int number;
  cout<<"Enter Number: ";
  cin>>number;
  table(number);
  cout<<"---------------------\n";
  table1(number);
}
/*
INPUT:
Enter Number: 5
OUTPUT:
1 x 1 = 5
2 x 2 = 10
3 x 3 = 15
4 x 4 = 20
5 x 5 = 25
6 x 6 = 30
7 x 7 = 35
8 x 8 = 40
9 x 9 = 45
10 x 10 = 50
---------------------
1 x 1 = 5
2 x 2 = 10
3 x 3 = 15
4 x 4 = 20
5 x 5 = 25
6 x 6 = 30
7 x 7 = 35
8 x 8 = 40
9 x 9 = 45
10 x 10 = 50
*/
