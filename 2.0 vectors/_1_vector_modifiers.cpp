#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>name;

    name.assign(9,1);  //(position, value) = {1,1,1,1,1,1,1,1,1}

    cout<< "The contents are : ";
    for(int a=0; a< name.size(); a++)
    {
        cout<<name[a]<< ",";
    }
    cout<<endl;

    name.push_back(2);
    int no = name.size();
    cout<< "Last elemenet : "<<name[no-1]<<endl;

    name.pop_back();
    cout<<"Now the contents are :";
    for(int a=0; a< name.size(); a++)
    {
        cout<<name[a]<< ",";
    }
    cout<<endl;

    name.insert(name.begin(),7);    // first element = 7
    cout<<"First element is : "<<name[0]<<endl;


name.clear();
cout<<"Now size : "<<name.size()<<endl;
    
}



///  iterator   =  begin()  / end()