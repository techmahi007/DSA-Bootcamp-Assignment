#include<iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime=true;
    cout<<"Enter any positive integer: ";
    cin>>n;
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        cout<<n<<" is a prime number";
    }
    else{
        cout<<n<<" is not a prime number";
    }
    return 0;
}
