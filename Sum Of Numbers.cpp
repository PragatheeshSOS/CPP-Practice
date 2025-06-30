// Sum Of Numbers......................................................
// APPROACH 1..................................
#include<iostream>
using namespace std;
int main(){
    int size,res = 0;
    cout<<"Enter Number: ";
    cin>>size;
    for(int i=1;i<=size;i++){
        res = res+i;
    }
    cout<<"Sum Of "<<size<<" = "<<res<<endl;
}

// APPROACH 2.................................
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter Number: ";
    cin>>size;
    cout<<"Sum Of "<<size<<" = "<<((size*(size+1))/2)<<endl;
}
/*
Enter Number: 5
Sum Of 5 = 15
*/
