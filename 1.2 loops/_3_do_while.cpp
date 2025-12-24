#include <iostream>
using namespace std;

int main() 
{
    int n = 0;
    int sum = 0;
    do{
        cout<<(n+1)<<") ````````````hello"<<endl;
        n++;
        sum+= n;
    }while(n<3);
    cout<<"sum = "<<sum;


}