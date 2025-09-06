#include <iostream>
#include <cctype>
using namespace std;
int main (){
    char a;
    cout<<"Enter a character :"<<endl;
    cin>>a;
    if (isalpha(a)){
        cout<<"It is an Alphabet"<<endl;
    }
    else {
        cout<<"It is not an Alphabet"<<endl;
        
    }
    return 0;
    
}
