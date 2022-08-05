#include<iostream>
#include<thread>

using namespace std;
void printing(){

    for(int i=100;i<=1000;i+=100){
        cout<<"\n printing ()"<<i;
    }
    cout<<"\n *****";
}
void display(){
    for(int i=1;i<=20;i++){
        cout<<"\n display ()"<<"royal";
    }
}
int main(){

    
    
    thread t1(printing);

    for(int i=1;i<=10;i++){
        cout<<"\n main ()"<<i;
    }
    t1.join();
    thread t2(display);
    t2.join();

}
