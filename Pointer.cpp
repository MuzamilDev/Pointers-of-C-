#include<iostream>

using namespace std;

int main()
{
    int a=1000;

    int* pointer;

    pointer= &a;

    cout<<*pointer<<endl;
    cout<<pointer<<endl;

    return 0;
}
