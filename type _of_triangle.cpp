#include <iostream>
using namespace std;
int main(){
    double a,b,c;
    cout<<"Enter 1st side of triangle :"<<endl;
    cin>>a;
    cout<<"Enter 2nd side of triangle : "<<endl;
    cin>>b;
    cout<<"Enter 3rd side of triangle : "<<endl;
    cin>>c;
    if (a==b && b==c ){
        cout<<"EQUILATERAL"<<endl;
    }
    else if (a== b || b == c|| c==a){
        cout<<"ISOCELES"<<endl;
    }
    else if(a!=b && b!=c && c!=a){
        cout<<"SCALENE"<<endl;
        
    }
    return 0;
}
