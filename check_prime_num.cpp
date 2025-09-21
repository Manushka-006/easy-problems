#include <iostream>
using namespace std;
int main(){
    int a;
    bool isPrimeNum = true;
    cout<<"Enter a number :"<<endl;
    cin>>a;
    if (a<=1){
        isPrimeNum = false;
    }
    else {
        for (int i = 2;i<a;i++){
            if (a%i == 0){
                isPrimeNum = false;
            }
        }
    }
    if (isPrimeNum){
        cout<<"It is a prime number"<<endl;
    }
    else{
        cout<<"It is not a prime number"<<endl;
    }
    return 0;
}
