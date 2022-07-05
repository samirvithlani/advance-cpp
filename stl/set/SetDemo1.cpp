#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;
    s.insert(1);
    s.insert(12);
    s.insert(96);
    s.insert(35);
    s.insert(35);
    s.insert(785);
    s.insert(78);

    s.erase(35);
    cout<<"\n <->"<<s.count(35);
    

       for(int i:s){
              cout<<i<<" ";
       } 
    

}