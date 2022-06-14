#include<iostream>
using namespace std;

class Bank{

    public:
    int x;
    void operator +(Bank b){

        cout<<"\n + operator overloaded...."<<b.x;
    }

};
int main(){

    Bank b1;
    Bank b2;
    Bank b3;
    b1.x = 150;
    b2.x = 200;
    //(b1  + b2) + b3;

}