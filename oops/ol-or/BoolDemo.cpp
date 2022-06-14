#include<iostream>
using namespace std;

class Demo{

    public:
    
     bool checkage(int age){

            if(age>=18){
                return true;
            }
            
        return false;
     }

};

int main(){


        Demo d;
        cout<<boolalpha<<d.checkage(20);

        if(d.checkage(9)){

            cout<<"\n valid...";
        }
        else{
            cout<<"\n not valid...";
        }


}