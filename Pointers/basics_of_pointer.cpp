#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    float y = 20;
    int *ptr = &x;
    cout << ptr <<"\n";
    int **ptr2 = &ptr;
    cout << ptr2 ;
    
    return 0;
}