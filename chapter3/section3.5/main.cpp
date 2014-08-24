#include <iostream>
#include <vector>               //otherwise cannot use vector
using namespace std;



void Exercise352()
{
    /*
     * Exercise 3.31: Write a program to define an array of ten ints. Give each
     * element the same value as its position in the array.
     */
    
    int arr[10];
    for(int i = 0; i < 10; i++)
    {
        arr[i] = i+1;
    }
    
    for(auto print: arr)
    {
        cout << print << " " ;
    }
    cout<<endl;
    
    /*
     Exercise 3.32: Copy the array you defined in the previous exercise into
     another array. Rewrite your program to use vectors.
     */
    
    int arr2[10];
    vector <int> iv;
    for(int i = 0; i < 10; i++){
        arr2[i] = i+1;
        iv.push_back(i+1);
    }
    for(auto print: arr2)
    {
        cout << print << " " ;
    }
    cout<<endl;
    for(auto print: iv)
    {
        cout << print << " " ;
    }
    cout<<endl;
}

void Exercise353()
{
    
    /*
     Exercise 3.34: Given that p1 and p2 point to elements in the same array, what does the following code do? Are there values of p1 or p2 that make this code illegal?
         p1 += p2 - p1;
     Exercise 3.35: Using pointers, write a program to set the elements in an array to zero.
     Exercise 3.36: Write a program to compare two arrays for equality. Write a similar program to compare two vectors.
     
     */
    int arr[] = {2,3,4,5,0};
    int arr2[] = {2,3,4,5};
    int *p1 = &arr[0];
    int *p2 = &arr[1];
    bool sameArray = true;
    
    vector<string> sv;
    vector<string> sv2;
    bool sameVector = true;
    string temp;
    
    p1 += p2 - p1;
    
    *p1 = 0;
    for(auto print: arr)
    {
        cout << print << " " ;
    }
    cout<<endl;
    
    //compare two array, 1. length, 2. element.
    if(sizeof(arr) != sizeof(arr2))         //compare two array, use sizeof(array);
    {
        cout << "two array are not the same length!\n";
        sameArray = false;
    }
    else
    {
        for(int i = 0; i < sizeof(arr);i++)
        {
            if(arr[i] != arr2[i])
            {
              
                sameArray = false;
                
            }
        }
        if(sameArray)
        {
            cout <<" two array are the same\n";
        }
        else
        {
            cout << "two array contains difference element!\n";
        }

    }

    
    cin >> temp;
    sv.push_back(temp);
    cin >> temp;
    sv2.push_back(temp);
    
    cout<< "sv.size(): " <<sv.size()<< " sv2.size(): "<<sv2.size() <<endl;
    if(sv.size() !=sv2.size())
    {
        cout << "two vectors are not the same size!\n";
        sameVector = false;
    }
    else
    {
        for(int i = 0; i < sv.size();i++)
        {
            if(sv[i] != sv2[i])
            {
                cout << "two vectors contain difference elements!\n";
                sameVector = false;
                
            }
            else
            {
                sameVector = true;
            }
            }
            if(sameVector){
                cout <<" two vectors are the same\n";
            }
        }
}

void Exercise355()
{
    /*
     Exercise 3.41: Write a program to initialize a vector from an array of
     ints.
     Exercise 3.42: Write a program to copy a vector of ints into an array of
     ints.
     */
    
    int arr[] = { 1,2,3,4,5,6,7,};
    vector <int> iv(begin(arr), end(arr));
   
    int arr2[iv.size()];
    
    for(int temp : iv)
    {
        cout << temp << " ";
    }
    cout<<endl;
   
    for(int i = 0; i < iv.size();i++)
    {
        arr2[i] = iv[i];
    }
    for(auto temp : arr2)
    {
        cout << temp << " ";
    }
}

void Exercise36()
{
    
    /*
     *   Exercise 3.43: Write three different versions of a program to print the elements of ia. One version should use a range for to manage the iteration, the other two should use an ordinary for loop in one case using subscripts and in the other using pointers. In all three programs write all the types directly. That is, do not use a type alias, auto, or decltype to simplify the code.
     */
    
    int arr[3][2] = { {1,2},{3,4},{5,6}};       //3 is size of the outer array, row,
                                                //2 is the size of the inner array, col
    
    //iteration:
    cout<<"Using iterator: ";
    for(int (&row)[2] : arr)                   //must use reference. do the inner array first
    {
        for(int &col : row)                     // col is inside the element of row
        {
            cout << col << " ";                 //print out the col first.
        }
    }
     cout <<endl;
    
    cout <<"Using for loop: ";
    for(int i = 0; i < 3; i++)
    {
        for( int j = 0; j < 2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    
    cout << "Using pointers: ";
    for(int (*p)[2] = arr; p != arr+3; p++)     //p points to row, row = 3, and p points to [0]first, so it cannot excess [3]
    {
        for(int *p1 = *p; p1 != p1+2; p1++)         //p1 points to pointer p, points to col
        {
            cout << *p1 <<" ";
        }
    }
}

int main()
{
    
   // Exercise352();
   // Exercise355();
   // Exercise353();
    Exercise36();
    
    return 0;
}