#include<iostream>
#include<string>

using namespace std;


class Gov{

    public:
   
    Gov(int grant){

        cout<<"Gov param constructor called with grant"<<grant<<endl;
    }


};
class State : public Gov{


    public:
    State():Gov(100){   
        cout<<"State constructor called"<<endl;
    }

};

int main(){

    State s;

}