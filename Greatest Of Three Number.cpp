// ...............................................
//APPROACH 1....................
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    cout<<"Enter Number 3: ";
    cin>>num3;
    if((num1>=num2) && (num1>=num3))
        cout<<num1<<" Is Greatest.";
    else if((num2>=num1) && (num2>=num3))
        cout<<num2<<" Is Greatest.";
    else
        cout<<num3<<" Is Greatest.";
}

//APPROACH 2....................
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    cout<<"Enter Number 3: ";
    cin>>num3;
    int temp = num1>=num2?num1:num2;
    int result = temp>=num3?temp:num3;
    cout<<result<<" Is Greatest.";
// }

//APPROACH 3....................
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    cout<<"Enter Number 3: ";
    cin>>num3;
    cout<<max(num1,max(num2,num3))<<" Is Greatest.";
}
/*
Enter Number 1: 5
Enter Number 2: 3
Enter Number 3: 4
5 Is Greatest.
*/
