#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,x=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string statement;
        cin>>statement;
        if(statement=="x++"||statement=="++x")
        {
            ++x;
        }
        else
        {
            --x;
        }


        cout<<x<<endl;

    }

    return 0;
}
