#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x1,a,b,c,d,x2;
    cout<<"Enter coeffcient of x^2 :"<<endl;
    cin>>a;
    cout<<"Enter coeffcient of x :"<<endl;
    cin>>b;
    cout<<"Enter the constant :"<<endl;
    cin>>c;
    d = pow(b,2) - (4*a*c);
    if (d == 0){
        x1 = -b / (2*a);
        cout<<"One root :"<<x1;
    }
    else if (d >0){
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b -sqrt(d))/(2*a);
        cout<<"There will be two roots "<<x1<<" and"<<x2;
    }
    else {
        cout<<"There will be no real roots"<<endl;
    }
    return 0;
