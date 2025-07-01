// Reversing A Number..................................................
#include<iostream>
using namespace std;
int main(){
    int number,res = 0;
    cout<<"Enter Number: ";
    cin>>number;
    cout<<"Original Number: "<<number<<endl;
    while (number>0){
        res = (res*10)+(number%10);
        number = number/10;
    }
    cout<<"Reversed Number: "<<res<<endl;
}
/*
INPUT:
Enter Number: 123
OUTPUT:
Original Number: 123
Reversed Number: 321

INPUT:
Enter Number: 12746534
OUTPUT:
Original Number: 12746534
Reversed Number: 43564721
*/
