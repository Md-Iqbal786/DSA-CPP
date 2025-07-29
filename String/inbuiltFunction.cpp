#include<iostream>
#include<string>
using namespace std;    
int main(){
    //reverse function to reverse a string
    // string str;
    // getline(cin , str);
    // reverse(str.begin() , str.end());
    // // reverse(1,4); // this will not work as reverse function needs iterators
    // cout<<str;

    // substring function to get a substring
    string str1;
    getline(cin, str1);
    string sub= str1.substr(1,3);
    
    //first we hqave to store the substring in a new string
    // substr(start, length) - start is the index to start from, length is the number of characters to take
    // if length is not given, it will take the rest of the string from start index
    // if start is not given, it will take the substring from the beginning of the string
    // if both are not given, it will take the whole string
    // if start is out of range, it will return an empty string
    // if length is out of range, it will take the rest of the string from start
    // if both are out of range, it will return an empty string
    // if start is negative, it will count from the end of the string
    // if length is negative, it will return an empty string
    
    // cout<<sub << endl;

    //concatinate 

    string str2;
    getline(cin, str2);
    string str3 = str1+str2; // this will concatenate the two strings
    cout << str3 << endl;

    

}