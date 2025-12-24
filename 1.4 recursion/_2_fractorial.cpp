#include <iostream>
using namespace std;

int fractorial(int num)
{
    if (num >= 1)
    {
        return num*fractorial(num-1);
    }
    return 1;
}

int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int frac = fractorial(n);
    cout<<n<<" factorial = "<<frac<<endl;
}