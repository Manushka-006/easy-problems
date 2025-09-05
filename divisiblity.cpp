#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number :"<<endl;
    cin>>a;
    if (a%5 == 0 && a%11 == 0){
        cout<<"It is divisible by 5 and 11"<<endl;
    }
    else {
        cout<<"It is not divisible by 5 and 11"<<endl;
    }
    return 0;
}
