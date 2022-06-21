#include<map>
#include<iostream>
#include<string>

using namespace std;

int main(){

        map<int,string> ranks;
        ranks[1] = "Country";
        ranks[2] = "State";
        ranks[3] = "District";
        ranks[4] = "City";
        ranks[5] = "Town";
        ranks[6] = "Village";
        ranks[5] = "abcd";
        // ranks[6] = '\0';
        // ranks[7] = "";

           //auto x =  ranks.at(8);
           auto p = ranks.find(5);
           //cout<<ranks.find(9);

              if(p != ranks.begin()){
              	cout<<"Not found"<<endl;
              }
              else{
              	cout<<"Found"<<endl;
              }
           

           //cout<<"at "<<x;

            auto c = ranks.count(50);
            cout<<"\n count = "<<c;

            //ranks.size();
            auto z = ranks.equal_range(5);
            cout<<"\n"<<z.first->second;
            
        

        for(auto itr : ranks){
            cout<<"\n"<<itr.first<<" "<<itr.second;
        }


        







}