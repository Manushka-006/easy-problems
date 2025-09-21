#include <iostream>
using namespace std;
int main(){
    string a;
    int sum = 0;
    cout<<"Enter a number :"<<endl;
    cin>>a;
    for(char i : a){
        int x = i-'0';
        sum+=x;
        
    }
    cout<<"The sum is : "<<sum<<endl;
    return 0;
    
    
}
