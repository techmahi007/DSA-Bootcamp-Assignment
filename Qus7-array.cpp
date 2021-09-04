#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    cout<<"The second largest element of array is: "<<a[n-2];
    return 0;
}
