#include <iostream>
using namespace std;
int main (){
    int x,y;
    cout<<"Enter a number :"<<endl;
    cin>>x;
    cout<<"Enter a second number :"<<endl;
    cin>>y;
    int a = min(x,y);
    cout<<"The smallest number is :"<<a;
    return 0;
}
