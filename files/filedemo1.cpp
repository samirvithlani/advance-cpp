#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("C:\\Users\\Samir\\Desktop\\filedemo1.txt",ios::app);
    fout << "\n Hello World \n";
    fout.close();

    ifstream fin;
    fin.open("C:\\Users\\Samir\\Desktop\\filedemo1.txt");
    string s;

    while (!fin.eof())
    {
        getline(fin, s);
        cout << s << endl;
    }

    //  getline(fin,s);
    // cout<<s<<endl;
    fin.close();
}