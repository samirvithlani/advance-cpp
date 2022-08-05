#include <iostream>
#include <string>
using namespace std;

// normal function

void demo()
{
    cout << "\n demo called...";
    auto print = []()
    {
        cout << "\n Print called...";
    };

    print();
}

int main()
{

    //demo();

    // lamda function
    // callable function
    auto print = []()
    {
        cout << "\n Print called...";
    };

    auto dsiplay = [](int x, int y)
    {
        cout << "\n Display called..." << x << "," << y;
        
        auto prints = [](){
        cout<<"\n Prints called...";

    };
    prints();
    

    };
    auto naming = [](string name)
    {
        return name.length();
    };

    dsiplay(10, 200);
    //print();
    cout << "\n len of name = " << naming("royal");
}