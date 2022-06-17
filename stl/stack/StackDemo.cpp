#include<iostream>
#include<stack>
#include<string>
using namespace std;

/*
    LIFO: Last In First Out
**/

int main(){


    stack<string> s;

    s.push("Amit");
    s.push("Vijay");
    s.push("Raj");
    s.push("Sachin");

    cout<<"\n size -->"<<s.size();

    //s[0];

    cout<<"\n top -->"<<s.top();
    s.pop();
    cout<<"\n top -->"<<s.top();
    cout<<"is empty ??"<<s.empty();

    while(!s.empty()){
        cout<<"\n element = "<<s.top()<<endl;
        s.pop();
    }

    cout<<"\n size -->"<<s.size();
    





    



}