#include <iostream>
using namespace std;
int main(){
    int mark;
    cout<<"Enter mark of the student :"<<endl;
    cin>>mark;
    if (mark>=90){
        cout<<"GRADE A"<<endl;
    }
    else if (mark>=80){
        cout<<"GRADE B"<<endl;
    }
    else if (mark>=70){
        cout<<"GRADE C"<<endl;
    }
    else if (mark>=50){
        cout<<"GRADE D"<<endl;
    }
    else {
        cout<<"FAILED"<<endl;
    }
    return 0;
}
