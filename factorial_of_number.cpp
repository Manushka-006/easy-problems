#include <iostream>
using namespace std;
int main(){
    int a,pdt;
    cout<<"Enter a number :"<<endl;
    cin>>a;
    pdt = 1;
    for (int i;i<=a;i++){
        pdt*=i;
        
    }
    cout<<"THE FACTORIAL IS :"<<pdt;
    return 0;
}
