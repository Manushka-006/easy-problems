// First 100 units ----> 5 
// Next 100 units ----> 7
// Next 100 units ----> 10
// Above 300 units ----> 15


#include <iostream>
using namespace std;
int main(){
    double bill = 0;
    int unit;
    cout<<"Enter the unit :"<<endl;
    cin>>unit;
    if (unit<=100){
        bill = unit*5;
    }
    else if (unit<=200){
        bill = 100*5 + (unit-100)*7;
    }
    else if (unit<=300){
        bill = 100*5 + 100*7 + (unit-200)*10;
    }
    else {
        bill = 100*5 + 100*7 + 100*10 +(unit-300)*15;
    }
    cout<<"The total bill is = "<<bill;
    return 0;
}
