#include <iostream>
using namespace std;
int main(){
    int a,pdt;
    cout<<"Enter a number :"<<endl;
    cin>>a;
    for( int i = 1;i<=10;i++){
        pdt = a*i;
        cout<<a<<"*"<<i<<" = "<<pdt<<endl;
    }
    return 0;
    
}
