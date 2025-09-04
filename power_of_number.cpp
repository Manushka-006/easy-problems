// In c++ there is no exponent operator 
#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int a,b,r;
    cout<<"Enter the base number"<<endl;
    cin>>a;
    cout<<"Enter the exponent number"<<endl;
    cin>>b;
    r = pow(a,b);
    cout<<a<<"^"<<b<<" = "<<r;
    return 0;
}
