#include <iostream>
using namespace std;
int main(){
    char text;
    text = 'Z';
    char text1 = tolower(text);
    if (text1 == 'a' || text1 == 'e' || text1 == 'i' ||text1 == 'o' || text1 == 'u'){
            cout<<"it is a vowel"<<endl;
        }
    
    else {
        cout<<"it is consonant"<<endl;
    }    
    
   
    return 0;
}
