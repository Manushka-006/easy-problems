#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x,a,b,c,d,z;
    cout<<"Enter coeffcient of x^2 :"<<endl;
    cin>>a;
    cout<<"Enter coeffcient of x :"<<endl;
    cin>>b;
    cout<<"Enter the constant :"<<endl;
    cin>>c;
    d = pow(b,2) - (4*a*c);
    if (d == 0){
        x = -b / (2*a);
        cout<<"One root :"<<x;
    }
    else if (d >0){
        x = -b + d/(2*a);
        z = -b -d/(2*a);
        cout<<"There will be two roots "<<x<<" and"<<z;
    }
    else {
        cout<<"There will be no real roots"<<endl;
    }
    return 0;
   
    
}
