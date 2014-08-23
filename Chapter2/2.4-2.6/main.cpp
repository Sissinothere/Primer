#include <iostream>
#include "Sales_data.h"
using namespace std;


//exercise section 2.4
/*
 * 1. const object has to intialized at the first time it created
 * const int buf; //error.
 * 2. once it created it cannot be changed, only can be copied by others.
 * 3. if a const reference to a nonconst value, it is legal, but the reference cannot change the nonconst value.
 *
 * 4. int *const curErr = &errNumb; const poiter to a int value
 * 5. const double *cptr = &pr; pointer to a const double;
 * 6. const double *const pip = &pi; const poiter to a const double object
 * 7. a const pointer must be initialized.
 * 8. all const object must be initialized
 
 */

void constant()
{
   const int b = 12, &r = 14;       //a reference may refer to a const value./ don't have to be object
    cout << "b is " << b << "r is " << r <<endl;
    
   // int *const cp;  // error, a constant poiter must be initialized.
  
    
}

void Aliases()
{
    using math = double;        // math can be use as double now.
    math mm = 3.45;
    typedef int single;         //single = int
    single man = 2;
    
    int i = 0;
    const int ci = i, &cr = ci;
    auto b = ci;                    // b is an int.
    auto c = cr;                    // c is an int
    auto d = &i;                    //d is an int
    auto e = & ci;                  // e is a const int (& of an object is low-level const
    const auto &j = 43;             //we can bind a const referenct to a literal
    
    const int cii = 0, &cj = cii;
    decltype(cj) x = 0;         // x has type const int
    decltype(cj) y = x;         // y has type const int& and is bound to x
    // a reference must be initialized
    
}

int main()
{
   // constant();
    // Aliases();
    
    
    /*
     * Exercises Section 2.6.1
     * Exercises Section 2.6.2
     * Exercises Section 2.6.3
     */
    
    Sales_data tempData, data;
    double unitySell;
    double totleSell;
    string tempISBN;
    int curCopy = 0;
    int copy;
    
    cout << "please enter how many copy you have: ";
    cin >> copy;
    
    
    cout << "Please enter isbn and unit and price: " << endl;
    cin >> tempData.isbn >> tempData.sold >> tempData.price;        //get the temp isbn to compare with data.
    unitySell = tempData.getSold();
    totleSell = tempData.getRevenue();
    
    curCopy++;
    --copy;
    while(copy > 0)
    {
    
        cout << "Please enter isbn and unit and price: " << endl;
        cin >> data.isbn >> data.sold >> data.price;
        --copy;                                                     //count back right away
        while (string(tempData.getISBN()) == string (data.getISBN()) && copy >= 0)           //compare two ISBN are the same.
        {
            curCopy++;
            cout << "isbn are the same" << endl;
            
            unitySell += data.getSold();
            totleSell += data.getRevenue();
            //enter more item
            if(copy != 0){
                cout << "Please enter isbn and unit and price: " << endl;
                cin >> data.isbn >> data.sold >> data.price;
                cout<< "copy is " << copy <<endl;
                --copy;
            }
            else
            {
                break;
            }
        }
        
        cout << " isbn are not the same" <<endl;
       
        //for the situation that last few items are the same ISBN number
        if(copy == 0 && tempData.getISBN() == data.getISBN())
        {
            cout << "1. ISBN is " << tempData.getISBN() << " unit " << unitySell << " Totle " << totleSell << " occur time: " <<  curCopy << endl;
            
        }
        //for the situation that the last two items are not the same ISBN copy = 1 and 0
        else if(copy == 0 && tempData.getISBN() != data.getISBN())
        {
            cout << "2a. ISBN is " << data.getISBN() << " unit " << data.getSold() << " Totle " << data.getRevenue() << " occur time: " <<  "1" << endl;
            
            cout << "2b. ISBN is " << tempData.getISBN() << " unit " << unitySell << " Totle " << totleSell << " occur time: " <<  curCopy <<endl;
        }
        
        // two items' ISBN changed, but copy number >= 1;
        else
        {
            cout << "3. ISBN is " << tempData.getISBN() << " unit " << unitySell << " Totle " << totleSell << " occur time: " <<  curCopy <<endl;
            
            totleSell = data.getRevenue();
            unitySell = data.getSold();

            tempData.isbn = data.getISBN();
            curCopy = 1;
        }
        
        cout << " now isbn is " << tempData.getISBN() <<endl;
        
        cout<< "copy is " << copy <<endl;
    }


    return 0;
        
}



