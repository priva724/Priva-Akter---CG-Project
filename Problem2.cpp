#include<iostream>
#include<conio.h>
using namespace std;

class box
{
public:
    string name,address,blood_group;
    int ID_number,dob;
    void contain()
    {
        cout<<"Enter your name :";
        cout<<"Enter your ID :";
        cout<<"Enter your blood group :";
        cout<<"Enter your birtbay :";
        cout<<"Enter your address :";
        cin>>name;
        cin>>ID_number;
        cin>>blood_group;
        cin>>dob;
        cin>>address;
    }

};

main()
{
box p;

p.(contain);
p.display();
    getch ();
}
