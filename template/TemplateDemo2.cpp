#include<iostream>
using namespace std;

template<class T> class Color{




    public:

     template<typename S> void area(S x){

         cout<<"\n area of "<<x;
     }
    void print(T a){
        cout<<"\n"<<a;
    }
    T area1(T x){

        return x;
    }

};
int main(){

        Color <int> c;
        //c.print(15);
        c.area("bb");



}