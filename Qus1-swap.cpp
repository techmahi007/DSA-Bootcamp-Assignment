#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before swapping: "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After swapping: "<<a<<" "<<b<<endl;
    return 0;
}
