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
    
    cout <<"Who goes with F\145rgus?\012"<<endl;
    
    int sum = 0;
    for(i = 10; i!=10;++i){
        sum += i;
    }
    cout << i << " " << sum<<endl;
}

void reference()
{
    int ival = 12;
    int &refVal = ival;     //refVal is reference to ival, opposite poiter
    
    refVal = 2;             //means refVal = ival = 2;
    cout << "ival " << ival <<endl;
    int ii = refVal;        // now ii gets the value that refVal reference to.
    cout << "1. ii " << ii <<endl;
    ii = 3;
    cout << "after resign value, ii " << ii <<endl; //ii change does not change ival
    cout << "ival " << ival <<endl;
    int &iii = refVal;
    iii = 5;                //this will change ival value;
    cout << "after resign value, iii is " << iii << ", &iii is " << &iii << endl;
    cout << "ival " << ival <<endl;
    
    
    cout<<endl;
    int i, &ri = i;
    i = 5;
    ri = 10;
    
    cout << i << " " << ri << endl;
}

void poiter()
{
    /*
     * Exercise 2.18: Write code to change the value of a pointer. Write code to
     * change the value to which the pointer points.
     */
    
    int a = 10;
    int *c = nullptr;
    int *b = &a;
    
    *b = 20;
    
    c = b;         // c is pointing to what b is pointing to is 20
    //b = 30;       // b is access to address, cannot asign value
    
    cout << "a " << a << " and b " << b << " and *b is " << *b << " *c is " << *c << endl;
    
    /*
     * Exercise 2.19: Explain the key differences between pointers and references.
     * reference is not an object, it just another name for an exsiting objec
     * pointer is an object, and it is use for indirect access o other objects.
     */
    int i = 42;
    int *p;
    int *&r = p;        // r is a reference to the pointer p
    r = &i;             // r refers to a pointer, assigning &i to r makes p point to i
    *r = 0;
    *p = 3;
    cout << "i is " << i << ", and *r is " << *r << endl;
    
    
    int d, *ipp = 0; //*ipp is initialized but addresses no object
    
    
    
}

int main(){
       
      //  section1_2();
        reference();
        poiter();
        return 0;
    }