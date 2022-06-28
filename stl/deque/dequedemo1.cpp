#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{

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
