#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    for (int i = 1; i<= 10; i++)
    {
        v.push_back(i);
    }
    cout<<"Size : "<<v.size()<<endl;

    v.resize(7);
    cout<<"\nAfter resizing it becomes : "<<v.size()<<endl;

    if(v.empty()==false){
        cout<<"Not empty"<<endl;
    }
    else{
        cout<<"It is empty"<<endl;
    }

    cout<<"\nVecotor : ";
    for( auto i=v.begin(); i!=v.end(); i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}