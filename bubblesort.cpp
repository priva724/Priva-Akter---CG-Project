#include <iostream>
using namespace std;
int main()
{
    int arrsize;
    cout <<"Enter array size: ";
    cin>>arrsize;
    int arr[arrsize];
    cout<<"Enter value in array";
    for(int i=0; i<arrsize;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<arrsize-1;i++)
    {
        for(int j=0;j<arrsize-1;j++)
        {
            if(arr[j] > arr[j+1])
                {

                    int temp=arr[j];
                    arr[j]=arr[j=1];
                    arr[j+1]=temp;
                }
        }
        for(i=0;i<arrsize;i++)
        {
            cout<<arr[i];
        }
    }


}
