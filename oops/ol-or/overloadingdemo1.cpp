#include<iostream>
using namespace std;

class Shape{

    public:
    void area(int x){
        cout<<"(int)"<<x;

    }
    void area(float x){
        cout<<"(float)"<<x;

    }
    void area(double x){
            cout<<"(double)"<<x;

    }
    void area(long x){
        cout<<"(long)"<<x;

    }
    void area(unsigned int x){

            cout<<"(unsigned int)"<<x;
    }
};

int main(){


    Shape s;
    s.area(+10);

}