#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main(){

        vector<int> v;
        v.push_back(1);
        v.push_back(25);
        v.push_back(10);
        v.push_back(78);
        v.push_back(44);
        v.push_back(44);
        v.push_back(44);
        v.push_back(789);
        v.push_back(35);

        //sort
        cout<<"\n before sort ";

        for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";

        sort(v.begin(),v.end());

        cout<<"\n after sort ";
        for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";

        reverse(v.begin(),v.end());

        cout<<"\n after reverse ";

        for(int x:v){
                cout<<x<<" ";
        }                                    
        cout<<"\n\n";
        cout<<"\n max element from vector"<<*max_element(v.begin(),v.end());
        cout<<"\n max element from vector"<<*min_element(v.begin(),v.end());

        //count
        int c = count(v.begin(),v.end(),44);
        cout<<"\n count of 44 is "<<c;

        //accumulate
        int sum = accumulate(v.begin(),v.end(),0);
        cout<<"\n sum of all elements is "<<sum;



}