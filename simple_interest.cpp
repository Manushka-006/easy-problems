#include <iostream>
using namespace std;
int main(){
    int s,p,r,t;
    cout<< "Enter the priciple amt :";
    cin>>p;
    cout<< "Enter the interest rate :";
    cin>>r;
    cout<< "Enter the time taken :";
    cin>>t;
    s = (p*r*t)/100;
    cout<<"The simple interest is :"<<s;
    return 0;
}
