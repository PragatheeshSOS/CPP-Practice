// Armstrong Number Between Given Range...........................
#include<iostream>
#include<math.h>
using namespace std;
int pown(int number){
    int count = 0;
    while(number>0){
        count+=1;
        number/=10;
    }
    return count;
}
bool isarm(int number){
    int num = number,res = 0;
    int size = pown(number);
    while(num>0){
        res+=pow(num%10,size);
        num/=10;
    }
    return res == number;
}
int main(){
    int start,end;
    bool noarm = true;
    cout<<"Enter Starting Number: ";
    cin>>start;
    cout<<"Enter Ending Number: ";
    cin>>end;
    cout<<"Armstrong Number From "<<start<<" To "<<end<<": ";
    for(int i=start;i<=end;i++){
        if(isarm(i)){
            cout<<i<<" ";
            noarm = false;
        }
    }
    if(noarm)
        cout<<"No Armstrong Number Found";
}
/*
INPUT:
Enter Starting Number: 1
Enter Ending Number: 160
OUTPUT:
Armstrong Number From 1 To 160: 1 2 3 4 5 6 7 8 9 153

INPUT:
Enter Starting Number: 160
Enter Ending Number: 10000
OUTPUT:
Armstrong Number From 160 To 10000: 370 371 407 1634 8208 9474

INPUT:
Enter Starting Number: 100
Enter Ending Number: 101
OUTPUT:
Armstrong Number From 100 To 101: No Armstrong Number Found
*/
