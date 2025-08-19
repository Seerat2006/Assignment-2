#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    int i;
    int missing=-1;
    cout<<"Array size:";
    cin>>n;

    cout<<"Elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        {

            missing=i+1;
            break;

        }


    }

    if(missing!=-1)
    {
        cout<<"Missing element is "<<missing;
    }
    else
    {
        cout<<"Not found";
    }

}    