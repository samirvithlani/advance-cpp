#include<iostream>
using namespace std;

class  Complex{

    public:

    void operator ++(){

        cout<<"\n ++ operator overloaded....";
    }


};

int main(){

    Complex c;
    //1010
    //1011
    ++c;


}