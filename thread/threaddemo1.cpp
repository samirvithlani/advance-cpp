#include<iostream>
#include<string>
#include<thread>
using namespace std;
//function class lambda

//callable function
void print(){
    for(int i=100;i<=1000;i+=100){
        cout<<"\n print ()"<<i;
    }
}

//it self is a thread..
int main(){
/**/
    
    thread t1(print);
    for(int i=1;i<=20;i++){
        cout<<"\n main ()"<<i;
    }
    
    t1.join();
    thread t2(print);
    t2.join();
    

}
