#include <iostream>
#include "Sales_item.h"

using namespace std;

void section5_2()
{
    /*
     Exercise 1.23: Write a program that reads several transactions and counts
     how many transactions occur for each ISBN.
     Exercise 1.24: Test the previous program by giving multiple transactions
     representing multiple ISBNs. The records for each ISBN should be grouped
     together.
     */
    
    //does not work for mix isbn number. only work for gouped isbn number.

    Sales_item currItem, item;
    int copy;
    int occur;      //how many time a ISBN occurs
    
    cout << "how many copies do you have? " <<endl;
    cin >> copy;
    
    if(copy <= 0)
    {
        cout <<"copy cannot be <= 0" <<endl;
    }
    else
    {
        cout << "please enter ISBN number, quantity, price: ";
        cin >> currItem;            //first time record ISBN, use to compare ISBN with item
        occur = 1;
        --copy;
        while(copy>0)          // second time record ISBN, compare with currItem.
        {
            cin >> item;
            if(currItem.getISBN() == item.getISBN())        //if ISBN are the same.
            {
                occur++;
            }
            else                                        //if not the same, print the information out.
            {
                cout << "ISBN: " << currItem.getISBN() << " occurs " << occur << " times\n";
                currItem = item;                        //currItem store changed ISBN information
                occur = 1;                              //count from beginning.
            }
            --copy;                                     //reduce copy.
  //          cout<<"debug "<<copy <<endl;
        }
    }
        cout << "ISBN: " << currItem.getISBN() << " occurs " << occur << " times\n";
    
    
    
}

void section5(){
    
    //exercise 1.22
    /*
     Write a program that reads several transactions for the same
     ISBN. Write the sum of all the transactions that were read.
     */
    int copy;
    Sales_item tempItem;
    Sales_item sumItem;
    bool sameISBM = true;
    
    
    cout << "How many copies do you have? " <<endl;
    cin >> copy;
    
    
    if(copy <= 0)
    {
        cout <<"copy cannot be <= 0" <<endl;
    }
    
    else
    {
        Sales_item *item = new Sales_item[copy];        // an array must be declare befor using it.
        
        for(int i = 0; i < copy ;i++)
        {
            cout << "please enter ISBN number, quantity, price: ";
            cin >> tempItem;
            item[i] = tempItem;
        }
        
        //check if all the ISBN are the same
        for(int i = 0; i < (copy-1); i++){
            if(!item[i].same_isbn(item[i+1]))
            {
                cout << "please enter same ISBN number" <<endl; //if not the same
                sameISBM = false;
                break;
            }
        }
        
        //sum the value of the items
        if(sameISBM)
        {
            for(int i = 0; i < copy; i++)
            {
                sumItem += item[i];
                
            }
            delete[] item;      //deleted array CANNOT do delete item[];
            
            cout << "Totle: " << sumItem;
        }
        
    }
    

    
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

int main(){
    
  //  section5_1();
    section5_2();
    
    return 0;
}
