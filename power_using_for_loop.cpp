#include <iostream>
using namespace std;
int main(){
    int x,y,power;
    cout<<"Enter the base :"<<endl;
    cin>>x;
    cout<<"Enter the exponent :"<<endl;
    cin>>y;
     power = 1;
    for (int i = 1; i<=y; i++) {
        power*=x;
    }
    cout<<x<<"^"<<y<<" = "<<power;
    return 0;
    
}
