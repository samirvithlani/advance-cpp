#include<iostream>
#include<mutex>
#include<thread>
#include<string>
using namespace std;

mutex m;
void shared(string name){

    m.lock();
    for(int i=1;i<=10;i++){
        cout<<"shared function"<<name <<endl;
    }
    
    m.unlock();

}

void thread1(){
    shared("Mahi");
    
}
void thread2(){
        shared("Kohli");
    
}
int main(){

    thread t1(thread1);
    thread t2(thread2);
    t1.join();
    t2.join();
    return 0;

}