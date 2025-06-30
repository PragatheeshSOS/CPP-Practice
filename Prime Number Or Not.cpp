// Prime Number Or Not..............................................
// APPROACH 1..........................
#include<iostream>
using namespace std;
int main(){
    int number,count = 0;
    cout<<"Enter Number: ";
    cin>>number;
    for(int i=1;i<=number+1;i++){
        if(number%i==0)
            count++;
    }
    if (count<=2)
        cout<<number<<" Is Prime Number"<<endl;
    else
        cout<<number<<" Is Not Prime Number"<<endl;
}

// APPROACH 2.............................
#include<iostream>
using namespace std;
int main(){
    int number;
    bool isprime = true;
    cout<<"Enter Number: ";
    cin>>number;
    if (number<2){
        isprime = false;
    }
    else{
        for(int i=2;i<number;i++){
            if(number%i==0){
                isprime = false;
                break;
            }
        }
    }
    if(isprime)
        cout<<number<<" Is Prime Number";
    else
        cout<<number<<" Is Not Prime Number";
}

// APPROACH 3.............................
#include<iostream>
using namespace std;
int main(){
    int number;
    bool isprime = true;
    cout<<"Enter Number: ";
    cin>>number;
    if(number<2){
        isprime = false;
    }
    else{
        for(int i=0;i<=(number/2);i++){
            if(number%2==0){
                isprime = false;
                break;
            }
        }
    }
    if(isprime)
        cout<<number<<" Is Prime Number"<<endl;
    else
        cout<<number<<" Is Not Prime Number"<<endl;
}

// APPROACH 4...............................
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int number;
    bool isprime = true;
    cout<<"Enter Number: ";
    cin>>number;
    if (number<2){
        isprime = false;
    }
    else{
        for(int i=2;i<=(sqrt(number));i++){
            if(number%i==0){
                isprime = false;
                break;
            }
        }
    }
    if(isprime)
        cout<<number<<" Is Prime Number";
    else{
        cout<<number<<" Is Not Prime Number";
    }
}

// APPROACH 5..................................
#include<iostream>
#include<math.h>
using namespace std;
// isprime Function......................
bool isprime(int number){
    if (number<2)
        return false;
    else if(number == 2)
        return true;
    else if(number%2==0)
        return false;
    for(int i=3;i<=sqrt(number);i+=2){
        if(number%i==0)
            return false;
    }
    return true;
}
int main(){
    int number;
    cout<<"Enter Number: ";
    cin>>number;
    if(isprime(number))
        cout<<number<<" Is Prime Number";
    else
        cout<<number<<" Is Not Prime Number";
}
/*
INPUT:
Enter Number: 32
OUTPUT:
32 Is Not Prime Number
INPUT:
Enter Number: 31
OUTPUT:
31 Is Prime Number
*/
