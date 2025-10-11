//str = {[()]}  valid  find valid parenthesis using stack

#include<iostream>
#include<stack>
using namespace std;

bool isValid(string str){
    stack<char> s;
    for (char ch:str){
        if(ch == '(' ||ch == '[' || ch == '{'){
            s.push(ch);
        }
        else{
            if(s.empty()) return false;
            char top = s.top();
            s.pop();

            if((ch == ')' && top != '(')||
            (ch == ']' && top != '[') ||
            (ch == '}' && top != '{'))
            {
                return false;
            }
        }
    }
return s.empty();
}

int main(){
    string str;
    cout<<"enter paranthesis string: ";
    cin>>str;

    if(isValid(str)){
        cout<<"valid paranthesis"<<endl;
    }
    else{
        cout<<"invalid paranthesis"<<endl;
    }
    return 0;
}
