/*
    product --> int-qty,float-price ,string -name
    1 -> product1 
    2 -> product2
    3 -> product3
    4 -> product4
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Product{

    public:
        int qty;
        float price;
        string name;



};
int main(){

        vector<Product> products;

        // Product p1;
        // p1.name = "apple";
        // p1.qty = 10;
        // p1.price = 1000.0;

        // Product p2;
        // p2.name = "mac";
        // p2.qty = 12;
        // p2.price = 2000.0;


        while(true){
            Product p;
            cout<<"\n enter product name: ";
            cin>>p.name;
            cout<<"\n enter producy price";
            cin>>p.price;
            cout<<"\n enter producy qty";
            cin>>p.qty;
            products.push_back(p);
            cout<<"\n enter 0 to exit";
            int ch;
            cin>>ch;
            if(ch==0)
                break;
        }
        

        

        //for each loop
        for(Product p :products){
            cout<<"\n"<<p.name<<" "<<p.qty<<" "<<p.price;
        }

}

