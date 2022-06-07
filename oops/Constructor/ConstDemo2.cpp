#include<iostream>
using namespace std;

class Parent{

public:
int pm;

    Parent(){
        cout<<"Parent constructor called"<<endl;
        pm = 15000;
    }
    Parent(int x){

        pm = x;
    }


};
class Child:public Parent{

    public:
    Child():Parent(25000){
        cout<<"Child constructor called"<<endl;
    }
    Child(int pm):Parent(pm){

        cout<<"Child constructor called with pm"<<pm<<endl;
    }

    void display(){
        cout<<"pm = "<<pm<<endl;
    }

};

int main(){

    Child c; //
    Child c1(30000);
    c.display();
    c1.display();

}