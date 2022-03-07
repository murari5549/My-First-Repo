#include<iostream>
using namespace std;
int main(){
    int a=45;
    float b=45.46;
    cout<<"the value a "<<float(a)<<endl;
    cout<<"the value a "<<(float)a<<endl;
    cout<<"the value b "<<float(b)<<endl;
    cout<<"the value b "<<(float)b<<endl;

    int c= int(b);
    cout<<"the express is "<<a+b<<endl;
    cout<<"the express is "<<a+int(b);
    cout<<"the express is "<<a+(int)b;
    return 0;

}