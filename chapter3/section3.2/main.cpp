#include <iostream>
#include <vector>
#include <cctype>
using namespace std;


void stringType(){
    
    string line;
    
    while(getline(cin,line))
    {
        if(line.size()>8)
            cout << line <<endl;
    }

}
void nVector()
{
    vector<int> vt;
    for(int i = 0; i < 10; i++)
    {
        vt.push_back(i);
    }
    for( auto i : vt)
    {
        cout << i << endl;
    }
    
    cout <<vt.size() <<endl;
}

void Exercise317()
{
    vector <string> sVc;
    vector <char> cVc;
    
    //if vector<string> sVC(5), the first 5 element is empty.
    string temp;
    int sSize;
    
    for(int i = 0; i < 3; i++)
    {
        cout << "enter: " ;
        cin >> temp;
        for( auto &i : temp)
        {
            i = toupper(i);             //touper only use for a string, not a vector of string.
        }
        cout << "temp is " << temp << "\n";
        
        sVc.push_back(temp);
        cout << "store success" <<endl;
    }
    temp = "";
    //print the vector
    for( string i : sVc)
    {
        temp += i;
    }
    
    sSize = temp.size();
    string temp2 = temp;
    int curr = 0;
    for(int i = sSize/8; i>=0; i--)
    {
        curr++;
        for(int j = 0; j < 8; j++ )
        {
            cout<<temp[j];
        }
        temp = "";
        for(int k = 8 * curr ; (sSize-k) == 0; k++)
        {
            temp += temp2[k];
        }
        cout << endl;
    }
}

void Iterators323()
{
    /*
     *Exercise 3.23: Write a program to create a vector with ten int elements. Using an iterator, assign each element a value that is twice its current value. Test your program by printing the vector.
     */
    
    vector<int> intVector;          //cannot do vector<int> intVector = {2,3,4}
    vector<int> intVector2;         //maybe complier's problem
    int tempNub;
    
    cout << "enter 5 numbers: " <<endl;
    
    for(int i = 0; i <5; i++)
    {
        cin >> tempNub;
        intVector.push_back(tempNub);               //add 5 numbers to the vector
    }
    
    for (auto it = intVector.begin();it != intVector.end(); it++)
    {
        intVector2.push_back((*it) * 2);            //not sure how to change inside the vector, so here is second vector.
    }
    
    for(auto temp : intVector2)
    {
        cout << temp << "\t";
    }
    
    

}

void Iterator324()
{
/*
 * Exercise 3.25: Rewrite the grade clustering program from § 3.3.3 (p. 104) using iterators instead of subscripts.

 */
    vector <unsigned> scores(11,0);     //create a vector size 0, sign to 0;
    vector <int> tempV;
    unsigned grade;
    
    for(int i = 0; cin >> grade; i++)
    {
        tempV.push_back(grade);
    }
    auto begin = tempV.begin();
    auto end = tempV.end();
    
    while(begin != end)
    {
        ++scores[*begin / 10];          // change the element inside the vector
        begin++;
    }
    
    
    for(auto temp : tempV)
    {
        cout << temp << " ";
    }
    cout <<endl;
  /*
    while (cin >> grade) { // read the grades
        if (grade <= 100) // handle only valid grades
            ++scores[grade/10]; // increment the counter for the current clust
    
    }
   */
    
    for(auto temp : scores)
    {
        cout << temp << " ";
    }

}

void Iterators322(){
    /*
     * Exercise 3.22: Revise the loop that printed the first paragraph in text to instead change the elements in text that correspond to the first paragraph to all uppercase. After you’ve updated text, print its contents.
     
     */
    string s("some string");
    
    for(auto it = s.begin(); it!= s.end();++it)
    {
        if(isspace(*it))
        { //do nothing }
        }
        else
        {
            *it = toupper(*it);
        }
    }
    cout << s <<endl;
}

int main()
{
    
 //   stringType();
    //nVector();v
   //  Exercise317();
   // Iterators323();
   // Iterators322();
    Iterator324();
    return 0;
    
}