// Uppercase To Lowercase String And Lowercase To Uppercase String....................................
#include<iostream>
#include<string>
using namespace std;
int main(){
    string line;
    cout<<"Enter A String: ";
    cin>>line;
    
    //Uppercase To Lower..................
    // +32
    for(int i=0;i<line.size();i++){
        if(line[i]>='A' and line[i]<='Z')
            line[i]+=32;
    }
    cout<<"UpperToLower: "<<line<<endl;
    
    // Lowercase To Upper.................
    // -32
    for(int i=0;i<line.length();i++){
        if(line[i]>='a' and line[i]<='z')
            line[i]-=32;
    }
    cout<<"LowerToUpper: "<<line<<endl;
}
/*
INPUT:
Enter A String: UPPERtOlower
UpperToLower: uppertolower
LowerToUpper: UPPERTOLOWER
*/
