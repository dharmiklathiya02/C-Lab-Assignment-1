#include<iostream>
using namespace std;
int n=20;
int main(){
    int n=10;
    {
        int k=n;
        int n=50;
        cout<<"This Is Inner Block\n";
        cout<<"k="<<k<<" n="<<n<<" ::n="<<::n<<endl;
    }    
    cout<<"This is Out Bloack"<<endl;
    cout<<"n "<<n<<" ::n "<<::n<<endl;
    return 0;
}