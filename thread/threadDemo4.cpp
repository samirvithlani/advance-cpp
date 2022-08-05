#include<iostream>
#include<thread>

using namespace std;
int main(){

thread t1([]{

        for(int i=0;i<=10;i++){
            cout<<"Thread "<<i<<endl;
        }
    });
    for(int i=1;i<=10;i++){
        cout<<"Main Thread "<<i<<endl;
    }

    
    thread t2([]{

        for(int i=50;i<=60;i++){
            cout<<"\n Thread "<<i<<endl;
        }
    });
    t1.join();
    
    t2.join();


}
