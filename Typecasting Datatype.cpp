// Typecasting Datatype.......................................................
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch = 'A';
    short int a = -2;
    int b = -3;
    long int c = 2147483653;
    long long int d = 9223377234356435645564394;
    
    cout<<"Value Of ch: "<<ch<<endl;
    cout<<"Value Of a: "<<a<<endl;
    cout<<"Value Of b: "<<b<<endl;
    cout<<"Value Of c: "<<c<<endl;
    cout<<"Value Of d: "<<d<<"\n\n";
    
    cout<<"int to short int typecasting: "<<(short  int)b<<endl;
    cout<<"Its Size: "<<sizeof((short int)b)<<endl;
    cout<<"signed short to unsigned short typecasting: "<<(unsigned short)a<<endl;
    cout<<"signed int to unsigned int typecasting: "<<(unsigned int)b<<endl;
    cout<<"long int to int typecasting: "<<(int)c<<endl;
}
/*
OUTPUT:
Value Of ch: A
Value Of a: -2
Value Of b: -3
Value Of c: 2147483653
Value Of d: 5197501659837564394

int to short int typecasting: -3
Its Size: 2
signed short to unsigned short typecasting: 65534
signed int to unsigned int typecasting: 4294967293
long int to int typecasting: -2147483643
*/
