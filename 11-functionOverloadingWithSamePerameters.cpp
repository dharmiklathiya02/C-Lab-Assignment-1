#include<iostream>
using namespace std;
void sum(int a,int b){
    cout<<"Sum="<<(a+b)<<endl;
}
void sum(double a,double b){
    cout<<"Sum="<<(a+b)<<endl;
}
int main(){
    sum(5,10);
    sum(15.235,10.523);
    return 0;
}