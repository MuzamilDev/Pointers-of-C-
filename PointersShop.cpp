#include<iostream>

using namespace std;

int main()
{
    float length;

    float *pointer;
    pointer=&length;

    cout<<"Enter the length of foot "<<endl;
    cin>>length;

    cout<<"The Length of Foot is "<<*pointer<<endl;
    cout<<"The address in RAM is "<<pointer<<endl;

    return 0;
}
