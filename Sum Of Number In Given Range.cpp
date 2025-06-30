// Sum Of Number In Given Range........................................
// APPROACH 1................................
#include<iostream>
using namespace std;
int main(){
    int start,end,res = 0;
    cout<<"Enter Starting Number: ";
    cin>>start;
    cout<<"Enter Ending Number: ";
    cin>>end;
    for(int i=start;i<=end;i++){
        res = res+i;
    }
    cout<<"Sum Of Number In Given Range: "<<res<<endl;
}

// APPROACH 2................................
#include<iostream>
using namespace std;
int main(){
    int start,end;
    cout<<"Enter Starting Number: ";
    cin>>start;
    cout<<"Enter Ending Number: ";
    cin>>end;
    int res = (((end*(end+1))/2)-((start*(start+1))/2))+start;
    cout<<"Sum Of Number In Given Range: "<<res<<endl;
}
/*
INPUT:
Enter Starting Number: 1
Enter Ending Number: 5
OUTPUT:
Sum Of Number In Given Range: 15
*/
