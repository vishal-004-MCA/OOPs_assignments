#include <iostream>
using namespace std;

class College{
    public:
    string name;
    College(){
        cout<<"\n\nEnter college name : ";
        getline(std::cin,name);
        cout<<"\nCollege name : "<<name;
    }
};

class Department:College{
    public:
    string name;
    Department(){
        cout<<"\n\nEnter department name : ";
        getline(std::cin, name);
        cout<<"\nDepartment name : "<<name;
    }
};

int main(){

    Department dept;

    return 0;
}