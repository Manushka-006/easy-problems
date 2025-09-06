#include <iostream>
#include <cctype>
using namespace std;
int main (){
    char b;
    cout<<"Enter a character :"<<endl;
    cin>>b;
    if (isdigit(b)){
        cout<<"It is a Digit"<<endl;
    }
    else {
        cout<<"It is not an Digit"<<endl;
        
    }
    return 0;
    
}
