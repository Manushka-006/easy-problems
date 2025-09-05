#include <iostream>
using namespace std;
int main (){
    int a;
    cout<<"Enter a number :"<<endl;
    cin>>a;
    int sum = 0;
    for (int i=1;i<=a;i++){
        sum+=i;
    }
    cout<<"The sum of natural number is :"<<sum;
    return 0;
}
