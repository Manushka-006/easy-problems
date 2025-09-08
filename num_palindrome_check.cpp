#include <iostream>
using namespace std;
int main(){
    int a,reversed_num,digit,temp;
    
     cout<<"Enter a value :"<<endl;
     cin>>a;
     temp = a;
     reversed_num = 0;
    while (temp>0){
        digit = temp%10;
        reversed_num = reversed_num*10 + digit;
        temp/=10;
    }
     cout<<reversed_num<<endl;
    if (reversed_num == a){
        cout<<a<<" is palindrome of "<<reversed_num<<endl;
    }
    else {
        cout<<a<<" is not  palindrome of "<<reversed_num<<endl;
        
    }
    return 0;
    
}
