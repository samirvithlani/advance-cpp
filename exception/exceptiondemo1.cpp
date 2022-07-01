#include <iostream>

using namespace std;

int main()
{
    int x = 10, y = 0;

    // try catch block
    try
    {
        if (x > y)
        {
            throw x;
        }
    }
    
    catch (...)
    {
        cout << "Can not divide by zero" << endl;
    }
}
