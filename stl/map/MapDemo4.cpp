#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

int main(){

    map<int,vector<string>> data;
    vector<string> v1;
    v1.push_back("raj");
    v1.push_back("jay");
    v1.push_back("parth");

    vector<string> v2;
    v2.push_back("jiya");
    v2.push_back("rama");
    v2.push_back("shanti");

    data[101]=v1;
    data[102]=v2;
    

    for(auto x:data){

        cout<<"\n key  = "<<x.first;
        for(auto y:x.second){

            cout<<"\n students ="<<y;
        }
    }








}