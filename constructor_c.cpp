#include<iostream>
using namespace std;
class person{

    public:

    void demo(){
        cout<<"Default method"<<endl;
    }
    void demo(int a){
        cout<<a<<endl;
    }
    void demo(string f){
        cout<<f<<endl;
    }
};
    int main(){
        person p;
        p.demo();
        p.demo(12);
        p.demo("Rahil");
    }
