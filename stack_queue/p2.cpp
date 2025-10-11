//Write a program to check if the word is palindrome or not
/*
#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    string st;
    cout << "Enter a word: ";
    cin >> st;
    string rev=" ";
    stack<char> s;
    for (char ch : st) {
        s.push(ch);
    }

    while (!s.empty()) {
        cout<< s.top()<<" ";
        s.pop();
    }

    if (st == rev) {
        cout <<endl<<"Palindrome" << endl;
    } else {
        cout << endl<<"Not Palindrome" << endl;
    }

    return 0;
}
*/

#include<iostream>
#include<stack>
using namespace std;
string reverseString(string str){
    stack<char> s;
    string rev=" ";
    for (char ch:str){
        s.push(ch);
    }
    while(!s.empty()){
        rev += s.top();
        s.pop();
    }
    return rev;
}
    bool palindrome(string str){
        if(str == reverseString(str)){
            return true;
        }
        return false;
    }

int main(){
    string str=" MADAM";
    if (palindrome(str)){
        cout<<str<< "is a plaindrome"<<endl;
    }
    else{
        cout<<str<<" is not a palindrome"<<endl;
    }
    return 0;
}