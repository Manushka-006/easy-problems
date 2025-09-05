#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    int pdt = 1;
    for (int j = 1;j<=n;j++){
        pdt*=j;
    }
    cout<<"The pdt of n natural number is :"<<pdt;
    return 0;
}
