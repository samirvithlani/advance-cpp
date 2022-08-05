#include<iostream>
#include<thread>
#include<string>

using namespace std;

class MyThread{

public:

    void operator()(){
        
        for(int i=0;i<=10;i++){
            cout<<"Thread "<<i<<endl;
        }
    }

};

int main(){

    MyThread m;
    thread t1(m);
    for(int i=100;i<=500;i+=100){
        cout<<"Main Thread "<<i<<endl;
    }
    t1.join();



}
