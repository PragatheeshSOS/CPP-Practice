// Setting Precision Or Decimal Points...................................
#include<bits/stdc++.h>
using namespace std;
int main(){
    double x = 1.2344,y = 1.500, z = 1.44534;
    cout<<"------ FLOOR --------"<<endl;
    cout<<floor(x)<<endl;
    cout<<floor(y)<<endl;
    cout<<floor(z)<<endl;
    cout<<"------ Ceil --------"<<endl;
    cout<<ceil(x)<<endl;
    cout<<ceil(y)<<endl;
    cout<<ceil(z)<<endl;
    cout<<"------ TRUNC --------"<<endl;
    cout<<trunc(x)<<endl;
    cout<<trunc(y)<<endl;
    cout<<trunc(z)<<endl;
    cout<<"------ ROUND --------"<<endl;
    cout<<round(x)<<endl;
    cout<<round(y)<<endl;
    cout<<round(z)<<endl;
    
    //Negative Numbers....................................
    double x1 = -1.2344,y1 = -1.500, z1 = -1.44534;
    cout<<"------ FLOOR --------"<<endl;
    cout<<floor(x1)<<endl;
    cout<<floor(y1)<<endl;
    cout<<floor(z1)<<endl;
    cout<<"------ Ceil --------"<<endl;
    cout<<ceil(x1)<<endl;
    cout<<ceil(y1)<<endl;
    cout<<ceil(z1)<<endl;
    cout<<"------ TRUNC --------"<<endl;
    cout<<trunc(x1)<<endl;
    cout<<trunc(y1)<<endl;
    cout<<trunc(z1)<<endl;
    cout<<"------ ROUND --------"<<endl;
    cout<<round(x1)<<endl;
    cout<<round(y1)<<endl;
    cout<<round(z1)<<endl;
    
    double pi = 3.15435, neg_pi = -3.15435;
    cout<<fixed<<setprecision(0)<<pi<<"  "<<neg_pi<<endl;
    cout<<fixed<<setprecision(1)<<pi<<"  "<<neg_pi<<endl;
    cout<<fixed<<setprecision(2)<<pi<<"  "<<neg_pi<<endl;
    cout<<fixed<<setprecision(3)<<pi<<"  "<<neg_pi<<endl;
    cout<<fixed<<setprecision(4)<<pi<<"  "<<neg_pi<<endl;
    cout<<fixed<<setprecision(5)<<pi<<"  "<<neg_pi<<endl;
    cout<<fixed<<setprecision(6)<<pi<<"  "<<neg_pi<<endl;
    cout<<fixed<<setprecision(16)<<pi<<"  "<<neg_pi<<endl;
}
/*
OUTPUT:
------ FLOOR --------
1
1
1
------ Ceil --------
2
2
2
------ TRUNC --------
1
1
1
------ ROUND --------
1
2
1
------ FLOOR --------
-2
-2
-2
------ Ceil --------
-1
-1
-1
------ TRUNC --------
-1
-1
-1
------ ROUND --------
-1
-2
-1
3  -3
3.2  -3.2
3.15  -3.15
3.154  -3.154
3.1543  -3.1543
3.15435  -3.15435
3.154350  -3.154350
3.1543500000000000  -3.1543500000000000
*/
