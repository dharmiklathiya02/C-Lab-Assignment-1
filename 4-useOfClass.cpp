#include <iostream>
using namespace std;
class student
{
    int stdID;
    char stdName[20];

public:
    void getVal();
    void display();
};
void student::getVal(void)
{

    cout << "Enter Student Id" << endl;
    cin >> stdID;
    cout << "Enter Student Name" << endl;
    cin >> stdName;
}
void student::display(void)
{
    cout << "Your Id Is " << stdID << "And Your Name Is " << stdName;
}
int main()
{
    student s;
    s.getVal();
    s.display();
    return 0;
}