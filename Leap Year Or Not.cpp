// Leap Year Or Not...........................................
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter Year: ";
    cin>>year;
    if ((year%400==0) || (year%4==0 && year%100!=0))
        cout<<year<<" Is Leap Year"<<endl;
    else
        cout<<year<<" Is Not Leap Year"<<endl;
}
/*
INPUT:
Enter Year: 1600
OUTPUT:
1600 Is Leap Year

INPUT:
Enter Year: 1665
OUTPUT:
1665 Is Not Leap Year
*/
