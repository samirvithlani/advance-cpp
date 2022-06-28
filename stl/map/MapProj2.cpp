#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;

class Fashion{

        public:
        int fid;
        string fname;

        Fashion(int id,string name){

            this->fid = id;
            this->fname = name;
        }
};

class Eletronic{

        public:
        int eid;
        string ename;

        Eletronic(int eid,string ename){

            this->eid = eid;
            this->ename =ename;
        }
};

class Product{

    public:
    int id;
    string name;
    map<int,Product> products;
    

    Product(int id,string name){

        this->id = id;
        this->name = name;

    }
    Product(){}
    void addProduct();
    void dsiplayProduct();
};

void Product :: addProduct(){

    Product p1(101,"java");
    Product p2(102,"python");
    products[1001]=p1;
    products[1002]=p2;

}
void Product :: dsiplayProduct(){

    for(auto x: products){
        cout<<"product key ="<<x.first<<"\n "<<"product values are  id = "<<x.second.id <<" name ="<<x.second.name<<endl;
    }

}


int main(){

    vector<Eletronic> el;
    Eletronic e1(101,"fan");
    Eletronic e2(102,"laptop");

    vector<Fashion> f;
    Fashion f1(788,"man");
    Fashion f2(898,"kid");
    

}