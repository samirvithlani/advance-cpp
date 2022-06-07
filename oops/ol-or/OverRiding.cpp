#include <iostream>
using namespace std;

class Facebook
{

public:
    virtual void smile() = 0;
};
class CompanyA : public Facebook
{

public:
    void smile()
    {
        cout << "CompanyA smile" << endl;
    }
};

class CompanyB : public Facebook
{

public:
    void smile()
    {
        cout << "CompanyB    smile" << endl;
    }
};

class Trai
{

public:
    virtual void call() = 0;
};
class Jio : public Trai
{
public:
    void call()
    {
        cout << "Jio call() called" << endl;
    }
};

int main()
{

    /*
            Jio j;
            j.call();
            */

    // parent class reference and child class object
    // 123466 --->
    Trai *t;
    // 456789
    Jio j;

    t = &j;
    t->call();

    Facebook *f;
    CompanyA c1;
    CompanyB c2;

    f = &c1;
    f->smile();
    f = &c2;
    f->smile();


}
