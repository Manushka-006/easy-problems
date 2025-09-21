#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a num"<<endl;
    cin>>x;
    int r = 0;
    int c = x;
    while(c>0){
        
        int dig = c%10;
        r = r*10+dig;
        c/=10;
    }
    cout<<"REVRSED NUMBER IS :"<<r;
    return 0;
}
