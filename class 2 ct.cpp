
#include<iostream>
#include<conio.h>
using namespace std;
class box

{
public:
    int hight,length,width;
    void print_volume()
    {
        cout<<hight*length*width<<endl;
    }

};
main()
{
    box obj;
    cout<<"please Enter your hight width and lenght" <<endl;
    cin>>obj. hight>>obj. length>>obj. width;
    obj.print_volume();
    getch();
}
