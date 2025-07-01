// Palindrome Or Not..................................................
#include<iostream>
#include<math.h>
using namespace std;
bool ispal(int number){
    if (abs(number)<10){
        return true;
    }
    number = abs(number);
    int num = number,reverse = 0;
    while (num>0){
        reverse = (reverse*10)+(num%10);
        num = num/10;
    }
    return reverse == number;
}
int main(){
    int number,reverse;
    cout<<"Enter Number: ";
    cin>>number;
    if (ispal(number))
        cout<<number<<" Is Palindrome";
    else
        cout<<number<<" Is Not Palindrome";
}
/*
INPUT:
Enter Number: 121
OUTPUT:
121 Is Palindrome

INPUT:
Enter Number: 51325
OUTPUT:
51325 Is Not Palindrome
*/
