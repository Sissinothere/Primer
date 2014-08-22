#include<iostream>
using namespace std;

void section1_2()
{
    
    unsigned u = 10, u2 = 42;
    cout << u2-u << endl;
    cout << u - u2 <<endl;  //unsign cannot be negative answer error
    
    int i = 10, i2 = 42;
    cout << i2 -i <<endl;
    cout << i -i2 <<endl;
    
    cout << i - u <<endl;   //no problem
    cout << u-i <<endl;
}

    int main(){
        
        section1_2();
        return 0;
    }