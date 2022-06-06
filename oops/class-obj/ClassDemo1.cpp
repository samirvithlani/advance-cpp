                            
                            /*
                            IOS

            istream                     ostream

                         iostream                            
*/
#include <iostream>
//# pre processive
using namespace std;
#include<string>

class Employee{

    public:
    string name;
    int age;
    void getEmployeeData(){

        cout<<"\n enter employee name";
        cin>>name;
        cout<<"\n enter employee age";
        cin>>age;

    }
    void displayEmployeeData();

};

void Employee :: displayEmployeeData(){
    
        cout<<"\n name is "<<name;
        cout<<"\n age is "<<age;    
}

int main()
{

   Employee e1;
   e1.getEmployeeData();
   e1.displayEmployeeData(); 
}
