#include<iostream>
#include<queue>
using namespace std;

int main(){

    priority_queue<int> pq;
    pq.push(120);
    pq.push(150);
    pq.push(100);
    pq.push(250);
    pq.push(758);
    pq.push(252);

    cout<<pq.top()<<"\n";
    while(!pq.empty()){

        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;

}