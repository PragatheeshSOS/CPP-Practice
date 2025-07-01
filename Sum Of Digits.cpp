// Sum Of Digits.........................................................
#include<iostream>
using namespace std;
int main(){
    int number,res = 0;
    cout<<"Enter Number: ";
    cin>>number;
    while (number!=0){
        res+=number%10;
        number=number/10;
    }
    cout<<"Sum Of Digits: "<<res<<endl;
}
/*
INPUT:
Enter Number: 444
OUTPUT:
Sum Of Digits: 12

INPUT:
Enter Number: 654981
OUTPUT:
Sum Of Digits: 33
*/
