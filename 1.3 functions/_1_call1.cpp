#include <iostream>
using namespace std;

void salary_change(int s)
{
    s=30000;
    cout<<"value inside function"<<s <<endl;  //30000
}


int main()
{
    int sal = 27000;
    salary_change(sal);
    cout<<"valu inside main "<<sal<<endl;   //27000
    return 0;
}