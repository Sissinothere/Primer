#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(){

    Sales_item item1,item2;
    cin>> item1>>item2;
    
    cout<<item1+item2 <<endl;
    return 0;
}

void section1_3(){
    int a = 9;
    int b = 10;
    
    
    cout << "Hello World!\n" <<endl;
    
    
    cout << "a is "<< a << " and b is "
         <<  b << ", a x b = " << a*b <<endl;
    
   // cout << /* "*/" /* "/x" x/";
    /*
     * comment pairs /*    */ //cannot nest.
    /*
     
     
     */

}



void section4(){

    int answer = 0, numb = 50, numb2 = 10;;
    
    answer = 0;
    while( numb <= 100)
    {
        answer += numb;
        numb++;
    }
    
    cout<<" answer = " << answer << endl;
    cout<<endl;
    
    while( numb2 >=0)
    {
        cout<< numb2-- <<endl;
        
    }
    
    int a,b;
    cout << "Please give two number: " <<endl;
    cin >> a >> b ;
    
    cout << "The number range is " <<endl;
    while (b == a)
    {
        cout << "you are giving two same number \n";
        break;
    }
    while ((a-b) == 1 || (b-a) == 1)
    {
        cout << "you have enter two continues numbers" <<endl;
        break;
    }
    while (a < b)
    {
        a++;
        if(a == b)
            break;
        else
            cout << a <<endl;
    }
    while (b < a)
    {
        b++;
        if(a == b)
            break;
        else
            cout << b <<endl;
    }
    
    cout << "the sume of " << a << " and " << b << " is "
            << a+b <<endl;
    cout<<endl;
//for loop example:
    answer = 0;
    for(int i = 50; i <= 100; i++)
    {
        answer += i;
    }
    
    cout<<" answer = " << answer << endl;
    
    for(int i = 10; i >= 0; i--)
    {
        cout << i <<endl;
    }
}
void section4_4(){
    cout<<"Please enter two integer number: ";
    int a,b;
    cin >> a >> b;
    
    if(a == b)
    {    cout << " you enter two same numbers" <<endl;}
    
    else if((a-b) == 1||(b-a)==1)
    {   cout <<"you enter two continue numbers"<<endl;}
   
    else{
        cout<<" Then number range is : "<<endl;
        if(a>b)
        {
            b++;
            for( ; a>b ; b++){
                cout<< b ;
            }
        }
        else if(a<b)
        {
            a++;
            for(a; a<b ; a++)
            {
                cout<< a ;
            }
        }cout<<endl;
    }
    
}
