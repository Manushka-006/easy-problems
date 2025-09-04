#include <iostream>
#include <cmath>
using namespace std;

int main (){
    double r,s,area;
    cout<<"Enter the radius :"<<endl;
    cin>>r;
    s = pow(r,2);
    area = 3.14*s;
    cout<<"The area of the circle is :"<<area;
    return 0;
    
}
