#include<iostream>
using namespace std;

int main(){
    int x = 10;

    int * ptr= &x;
    //accessing the value inside the store adress;
    //we use dereferencing operrator *
    cout << *ptr << "\n"; // Output: 10

    int ** prt2 = &ptr;
     cout<< *prt2 << "\n"; // Output: address of ptr
    cout << **prt2 << "\n"; // Output: 10, dereferencing twice gives the value of x
    cout << prt2 << "\n"; // Output: address of ptr2
    
    return 0;

}