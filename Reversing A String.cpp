// Reversing A String....................................
// APPROACH 1.........................
#include<iostream>
using namespace std;
int main(){
    string line;
    cout<<"Enter A String: ";
    getline(cin,line);
    cout<<"Before Reversing: "<<line<<endl;
    int len = line.size();
    for(int i=0,j=len-1;i<j;i++,j--){
        char temp = line[i];
        line[i] = line[j];
        line[j] = temp;
    }
    cout<<"After Reversing: "<<line<<endl;
}

// APPROACH 2............................
#include<iostream>
using namespace std;
void strrev(string &line){ // Address Should Be Passed.......
    int len = line.size();
    for(int i=0;i<len/2;i++){
        char temp = line[i];
        line[i] = line[len-i-1];
        line[len-i-1] = temp;
    }
}

int main(){
    string line;
    cout<<"Enter A String: ";
    getline(cin,line);
    cout<<"Before Reversing: "<<line<<endl;
    strrev(line);
    cout<<"After Reversing: "<<line<<endl;
}
/*
INPUT:
Enter A String: this is string
OUTPUT:
Before Reversing: this is string
After Reversing: gnirts si siht
*/
