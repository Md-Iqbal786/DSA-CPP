#include<iostream>
#include<string>
using namespace std;

int main() {
    // string str;
    // cin >> str; // this will take inpute only till the first space
    // If you want to take the entire line including spaces, use getline
    // getline(cin, str);
    // cout<< str << endl;

    string str2;
    getline(cin , str2);
    cout << str2 << endl;
    return 0;
}