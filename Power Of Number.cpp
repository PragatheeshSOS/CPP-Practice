// .............................................................
// APPROACH 1...........................................
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    double number,expo,res;
    cout<<"Enter Number: ";
    cin>>number;
    cout<<"Enter Expo: ";
    cin>>expo;
    res = pow(number,expo);
    cout<<res<<endl;
    printf("%lf\n",res);
    printf("%.lf\n",res);
    printf("%.1lf\n",res);
    printf("%.2lf\n",res);
    cout<<"------------------\n";
    cout<<res<<endl;
    cout<<fixed<<setprecision(1)<<res<<endl;
    cout<<fixed<<setprecision(2)<<res<<endl;
    cout<<fixed<<setprecision(6)<<res<<endl;
}

// APPROACH 2...........................................
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double base,res;
    int expo;        // Must Be INT.............
    cout<<"Enter Base: ";
    cin>>base;
    cout<<"Enter Expo: ";
    cin>>expo;
    res = 1;
    while (expo>0){
        res*=base;
        expo-=1;
    }
    cout<<res<<endl;
}
/*
INPUT:
Enter Number: 2.5
Enter Expo: 3.16
OUTPUT:
18.0922
18.092160
18
18.1
18.09
------------------
18.0922
18.1
18.09
18.092160
*/
