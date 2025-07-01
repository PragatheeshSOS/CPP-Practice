// Armstrong Number Or Not...............................................................
#include<iostream>
#include<math.h>
using namespace std;
int powsize(int number){
    int count = 0;
    while(number>0){
        count+=1;
        number/=10;
    }
    return count;
}
bool isarm(int number){
    int num = number,res = 0;
    int size = powsize(number);
    while(num>0){
        res+=pow(num%10,size);
        num/=10;
    }
    return res == number;
}
int main(){
    int number;
    cout<<"Enter Number: ";
    cin>>number;
    if(isarm(number))
        cout<<number<<" Is An Armstrong Number";
    else
        cout<<number<<" Is Not An Armstrong Number";
}
/*
INPUT:
Enter Number: 152
OUTPUT:
152 Is Not An Armstrong Number

INPUT:
Enter Number: 153
OUTPUT:
153 Is An Armstrong Number
*/
