// 1D Array.........................................
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"INPUT:\nEnter Size: ";
    cin>>size;
    int lis[size];
    for(int i=0;i<size;i++){
        cout<<"Enter Value: ";
        cin>>lis[i];
    }
    cout<<"OUTPUT:"<<endl;
    for(int i=0;i<size;i++){
        cout<<lis[i]<<" ";
    }
}
/*
INPUT:
Enter Size: 5
Enter Value: 1
Enter Value: 2
Enter Value: 3
Enter Value: 4
Enter Value: 5
OUTPUT:
1 2 3 4 5
*/
