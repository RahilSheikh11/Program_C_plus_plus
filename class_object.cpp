#include<iostream>
using namespace std;
class person{
    public:
    person(){
        cout<<"Hello without params"<<endl;
    }
    person(int b){
        cout<<b<<endl;
    }
    person(long t){
    cout<<t<<endl;
    }
};
int main(){
    person();
    person(150);
    person(456423168);

}