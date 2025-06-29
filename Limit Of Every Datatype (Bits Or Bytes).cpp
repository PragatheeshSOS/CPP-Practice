// Limit Of Every Datatype (Bits Or Bytes)......................................................
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"CHAR_BIT: "<<CHAR_BIT<<endl;
    cout<<"CHAR_MAX: "<<CHAR_MAX<<endl;
    cout<<"CHAR_MIN: "<<CHAR_MIN<<endl;
    cout<<"INT_MAX: "<<INT_MAX<<endl;
    cout<<"INT_MIN: "<<INT_MIN<<endl;
    cout<<"LONG_MAX: "<<(long)LONG_MAX<<endl;
    cout<<"LONG_MIN: "<<(long)LONG_MIN<<endl;
    cout<<"SCHAR_MAX: "<<SCHAR_MAX<<endl;
    cout<<"SCHAR_MIN: "<<SCHAR_MIN<<endl;
    cout<<"SHRT_MAX: "<<SHRT_MAX<<endl;
    cout<<"SHRT_MIN: "<<SHRT_MIN<<endl;
    cout<<"UCHAR_MAX: "<<UCHAR_MAX<<endl;
    cout<<"UINT_MAX: "<<(unsigned int)UINT_MAX<<endl;
    cout<<"ULONG_MAX: "<<(unsigned long)ULONG_MAX<<endl;
    cout<<"USHRT_MAX: "<<(unsigned short)USHRT_MAX<<endl;

    cout<<"\nFLT_MAX: "<<(float)FLT_MAX<<endl;
    cout<<"FLT_MIN: "<<(float)FLT_MIN<<endl;
    cout<<"-FLT_MAX: "<<(float)-FLT_MAX<<endl;
    cout<<"-FLT_MIN: "<<(float)-FLT_MIN<<endl;

    cout<<"\nDBL_MAX: "<<(double)DBL_MAX<<endl;
    cout<<"DBL_MIN: "<<(double)DBL_MIN<<endl;
    cout<<"-DBL_MAX: "<<(double)-DBL_MAX<<endl;
    cout<<"-DBL_MIN: "<<(double)-DBL_MIN<<endl;
    
    cout<<"\nLDBL_MAX: "<<(double)LDBL_MAX<<endl;
    cout<<"LDBL_MIN: "<<(double)LDBL_MIN<<endl;
    cout<<"-LDBL_MAX: "<<(double)-LDBL_MAX<<endl;
    cout<<"-LDBL_MIN: "<<(double)-LDBL_MIN<<endl;
    
    cout<<"\n"<<FLT_DIG<<endl;
    cout<<DBL_DIG<<endl;
    cout<<LDBL_DIG<<endl;
    return 0;
}
/*
OUTPUT Varies According To Compliers........................................
CHAR_BIT: 8
CHAR_MAX: 127
CHAR_MIN: -128
INT_MAX: 2147483647
INT_MIN: -2147483648
LONG_MAX: 9223372036854775807
LONG_MIN: -9223372036854775808
SCHAR_MAX: 127
SCHAR_MIN: -128
SHRT_MAX: 32767
SHRT_MIN: -32768
UCHAR_MAX: 255
UINT_MAX: 4294967295
ULONG_MAX: 18446744073709551615
USHRT_MAX: 65535

FLT_MAX: 3.40282e+38
FLT_MIN: 1.17549e-38
-FLT_MAX: -3.40282e+38
-FLT_MIN: -1.17549e-38

DBL_MAX: 1.79769e+308
DBL_MIN: 2.22507e-308
-DBL_MAX: -1.79769e+308
-DBL_MIN: -2.22507e-308

LDBL_MAX: inf
LDBL_MIN: 0
-LDBL_MAX: -inf
-LDBL_MIN: -0

6
15
18
*/
