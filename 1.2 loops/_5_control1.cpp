#include <iostream>
using namespace std;

int main() 
{

    int num = 100;
    while (num <= 200)
    {
        cout<<"value is : "<<num<<endl;
        if (num == 150)
        {
            break;
        }
        num+=10;

    }
    cout<<"out of the loop";
    return 0;
    
}