#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name;
   	string* pointer;
	pointer = &name;	//address
 
    cout<<"Enter The Name of Footbal: "<<endl;
    getline(cin,name);

    cout<<"The Name of Footbal is: "<<*pointer<<endl;
    cout<<"The address in RAM is "<<pointer<<endl;

    return 0;
}

