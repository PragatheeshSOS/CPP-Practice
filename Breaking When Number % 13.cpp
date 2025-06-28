// Breaking When Number % 13..............................................
// APPROACH 1...............................................
#include<iostream>
using namespace std;
int main(){
    int low,high;
    cout<<"Enter Low: ";
    cin>>low;
    cout<<"Enter High: ";
    cin>>high;
    while(low<=high){
        cout<<low<<" ";
        if (low%13 == 0)
            break;
        low++;
    }
}

// APPROACH 2...............................................
#include<iostream>
using namespace std;
int main(){
    int low,high;
    cout<<"Enter Low: ";
    cin>>low;
    cout<<"Enter High: ";
    cin>>high;
    for(int i = low;i<=high;i++){
        cout<<i<<" ";
        if(i%13==0)
            break;
    }
}
/*
INPUT:
Enter Low: 1
Enter High: 10
OUTPUT:
1 2 3 4 5 6 7 8 9 10

INPUT:
Enter Low: 10
Enter High: 20
OUTPUT:
10 11 12 13
*/
