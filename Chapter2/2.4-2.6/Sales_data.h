#ifndef SALES_DATA.H
#define SALES_DATA.H

#include <iostream>
using namespace std;

struct Sales_data
{
    //the object here can be changed by others
    string isbn;
    unsigned int sold;
    double price;
    double revenue;
    
    int getRevenue()
    {
        return price * sold;
    }
    
    string getISBN(){
        return isbn;
    }
    
    unsigned int getSold(){
        return sold;
    }
};

#endif