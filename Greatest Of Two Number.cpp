// Greatest Of Two Number......................................................................
// APPROACH 1.........................................................................
#include<iostream>
using namespace std;
int main(){
  int num1,num2;
  cout<<"Enter Number 1: ";
  cin>>num1;
  cout<<"Enter Number 2: ";
  cin>>num2;
  if (num1 == num2)
    cout<<"Both Are Equal";
  else if (num1>num2)
    cout<<num1<<" Is Greater Than "<<num2;
  else
    cout<<num1<<" Is Greater Than "<<num2;
}
/*
INPUT & OUTPUT:
Enter Number 1: 5
Enter Number 2: 3
5 Is Greater Than 3

INPUT & OUTPUT:
Enter Number 1: 5
Enter Number 2: 5
Both Are Equal
*/

// APPROACH 2.........................................................................
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    if (num1 == num2){
        cout<<"Both Are Equal";
    }
    else{
        int larg = num1>num2?num1:num2;
        cout<<larg<<" Is The Largest Number";
    }
}
/*
INPUT & OUTPUT:
Enter Number 1: 6
Enter Number 2: 3
6 Is The Largest Number
*/
// APPROACH 3.........................................................................
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    cout<<max(num1,num2)<<" Is The Largest Number";
}
/*
INPUT & OUTPUT:
Enter Number 1: 6
Enter Number 2: 3
6 Is The Largest Number
*/
