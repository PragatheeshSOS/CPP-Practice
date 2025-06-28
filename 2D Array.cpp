// 2D Array.....................................................
#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"INPUT:\nEnter Number Of Rows: ";
    cin>>row;
    cout<<"Enter Number Of Columns: ";
    cin>>column;
    int lis[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<"Enter Value For "<<i+1<<" "<<j+1<<": ";
            cin>>lis[i][j];
        }
    }
    cout<<"OUTPUT:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<lis[i][j]<<" ";
        }
        cout<<endl;
    }
}
/*
INPUT:
Enter Number Of Rows: 3
Enter Number Of Columns: 3
Enter Value For 1 1: 1
Enter Value For 1 2: 2
Enter Value For 1 3: 3
Enter Value For 2 1: 4
Enter Value For 2 2: 5
Enter Value For 2 3: 6
Enter Value For 3 1: 7
Enter Value For 3 2: 8
Enter Value For 3 3: 9
OUTPUT:
1 2 3 
4 5 6 
7 8 9 
*/
