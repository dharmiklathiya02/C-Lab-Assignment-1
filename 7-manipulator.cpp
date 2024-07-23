#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=2000,b=30,c=500;
    cout<<"WithOut Use Of Manipulatos"<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<"Using Of Manipulatos"<<endl;
    cout<<setw(4)<<a<<endl<<setw(4)<<b<<endl<<setw(4)<<c<<endl;
    return 0;
}