#include <iostream>
#include <deque>
#include <string>

using namespace std;



int sum(int x,int y){

    cout<<"\n helllo ";
}

int main()
{

    cout<<sum(15,25);
    deque<string> names;
    names.push_back("John");
    names.push_front("Jane");
    names.insert(names.begin() + 2, "Jack");
    names.push_back("Jill");

    for (string x : names)
    {
        cout << "\n"
             << x;
    }

    names.erase(names.begin() + 2);
    

    for (string x : names)
    {
        cout << "\n"
             << x;
    }
}
