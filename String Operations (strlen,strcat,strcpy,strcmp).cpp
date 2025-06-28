// String Operations (strlen,strcat,strcpy,strcmp)............................
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[10] = "hello";
    const char *s2 = "world";
    
    // Strlen().........................................
    int size = strlen(s1);
    cout<<size<<endl;
    
    // Strcat...........................................
    strcat(s1,s2);
    cout<<s1<<endl;
    
    // Strcpy............................................
    char s3[10];
    strcpy(s3,s2);
    cout<<s3<<endl;
    
    // Strcmp............................................
    int s4 = strcmp(s2,s3);
    cout<<s4<<endl;
}
/*
OUTPUT:
5
helloworld
world
0
*/
