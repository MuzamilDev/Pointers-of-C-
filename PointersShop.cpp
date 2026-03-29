#include<iostream>

using namespace std;

int main()
{
    float length;

    float *pointer;
    pointer= &length; //Address

    cout<<"Enter the length of Foot "<<endl;
    cin>>length;

    cout<<"The Length of Foot is "<<*pointer<<endl;
    cout<<"The address in RAM is "<<pointer<<endl;

    return 0;
}
