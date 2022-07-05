#include<iostream>
#include<list>

using namespace std;

int main(){

    list<int> l;
    l.push_back(10);
    l.push_back(22);
    l.push_back(25);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_back(6);
    l.push_back(6);
    l.push_back(7);

    
    for(int i:l){
        cout<<i<<" ";
    }
    

}