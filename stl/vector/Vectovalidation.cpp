#include<iostream>
using namespace std;

bool isValid(int age){

    if(age>=18){
        return 1;
    }
    
    return 0;
}

void add(){

    int age;
    cout<<"\n enter age";
    // if(age>=18){

    // }

    cin>>age;
    if(isValid(age)){
        cout<<"\n valid";
    }
    else{
        cout<<"\n invalid";
    }
    
}

int main(){


}