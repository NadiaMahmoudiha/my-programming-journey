#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
    system("color 5e");
    int n;
    cout<<"enter your number:";
    cin>>n;
    switch(n)
    {
        case 1:
        cout<<"saturday";
        break;

        case 2:
        cout<<"sunday";
        break;

        case 3:
        cout<<"monday";
        break;

        case 4:
        cout<<"tuesday";
        break;

        case 5:
        cout<<"wednesday";
        break;

        case 6:
        cout<<"thursday";
        break;

        case 7:
        cout<<"friday";
        break;

        default:
            cout<<"wrong number";

    }
    return 0;
}
