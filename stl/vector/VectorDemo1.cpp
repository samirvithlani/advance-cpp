#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){


        vector<string> v;
        v.push_back("java");
        v.push_back("c++");
        v.push_back("c#");
        v.push_back("python");
        v.push_back("php");

        //remove...
        v.erase(v.begin()+2);

        cout<<"\n"<<v[2];
        cout<<"\n"<<v.at(2);

        v.at(2) ="node";

        


/*
        for(int i=0;i<v.size();i++){
            //cout<<"\n"<<v[i];
            cout<<"\n"<<v.at(i);
        }
*/      

/*
        for(string x:v){

            cout<<"\n"<<x;
        }
*/


        vector <string>::iterator it;
        for(it =v.begin();it!=v.end();it++){

                cout<<"\n "<<*it;
        }







    


}