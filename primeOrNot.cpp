#include<iostream>
using namespace std;
int main()
{
    int num;
    int flag=1;
    cout<<"\nEnter a number: ";
    cin>>num;
    if(num==0||num==1)
    {
        cout<<"\nNeither prime nor composite.";
    }
    else
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
        {
            div++;              
        }
        }
        if(flag==1)
        {
        cout<<"\nPrime";
    }
    else
    {
        cout<<"\nNot Prime";
    }
    }
    
    return 0;
}
