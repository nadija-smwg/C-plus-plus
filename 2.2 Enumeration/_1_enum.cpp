#include <iostream>
#include <vector>
using namespace std;

enum captain { Avi, Sid, Robby, Sami, Jake};

int main()
{
    captain cap = Sid;
    if (cap == Avi)
    {
        cout<<"Our captain is Avi and it's value is : "<<Avi<<endl;
    }
    else{
        cout<<"he is not our captain";

    }
    return 0;

}