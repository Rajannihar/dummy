#include <iostream>
using namespace std;
int main(){
    int a; int b; int c;
    cout<<"\n enter the first number";
    cin>>a;
    cout<<"\n enter the second number";
    cin>>b;
    cout<<"\n ente the third number";
    cin>>c;


    if(a>b){
        if(a>c){
            cout<<"a is the First largest Number";
            if(b>c)
            cout<<"\n b is the second largest";
            else
            cout<<"\n c is the  second largest";
        }
        else {
            cout<<"\n c is the first largest";
             cout<<"\n a is the second largest";
        }
    }
    else if(b>c){
if(b>a){
    cout<<" b is the  first largest";
    if(a>c)
    cout<<"a is the second largest";
    else
    cout<<"c is the second largest";
}
}
else{
    cout<<"c is the first largest";
    if(a>b)
    cout<<"\n a is second largest";
    else
    cout<<"\n b is the second largest";
}
}