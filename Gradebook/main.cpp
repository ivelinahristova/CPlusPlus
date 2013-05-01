#include <iostream>
using namespace std;
int main()
{
    int grades;
        cout<<"Enter grade(2-6):";
        cin>>grades;

    switch(grades)
    {
        case 2: cout<<"Slab\n"; break;
        case 3: cout<<"Sreden\n"; break;
        case 4: cout<<"Dobur\n"; break;
        case 5: cout<<"Mn. Dobur\n"; break;
        case 6: cout<<"Otlichen\n"; break;
        default: cout<<"Invalid grade!\n";
    }
    return 0;
}
