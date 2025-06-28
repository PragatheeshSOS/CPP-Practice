// Skipping Number % 5...........................................
#include<iostream>
using namespace std;
int main(){
    int low,high;
    cout<<"Enter Low: ";
    cin>>low;
    cout<<"Enter High: ";
    cin>>high;
    for(int i=low;i<=high;i++){
        if(i%5==0)
            continue;
        else
            cout<<i<<" ";
    }
}
/*
INPUT:
Enter Low: 1
Enter High: 10
OUTPUT:
1 2 3 4 6 7 8 9

INPUT:
Enter Low: 10
Enter High: 20
OUTPUT:
11 12 13 14 16 17 18 19
*/
