// #include<iostream> mera name tushar kadam hai
// using namespace std;

// int main(){
//     int a;
//     cout<<a;
//     cout<<" First line ko hum comments ki tarah use kar skte hai";
//     return 0;
// }

// Find the simple interest take the principal, rate of interest and time from the user ;

#include<iostream>
using namespace std;

int main(){
    int p , r, t;
    cout<<"Enter the Principal Amount : ";
    cin>>p;   
    cout<<"Enter Rate of interest : ";
    cin>>r; 
    cout<<"Enter Time duration : ";
    cin>>t; 

    int si = (p*r*t)/100;
    cout<<"Simple Interest is => "<<si;
    return 0;
}