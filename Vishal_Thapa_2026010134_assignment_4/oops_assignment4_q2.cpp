#include <iostream>
using namespace std;

class Person{
    public:
   string name;
};

class Employee:public Person{
    public:
    string empID;
};

class Manager:Employee{
    private:
    string department;
    public:
    void get(){
        cout<<"\nEnter manager details :\n\n";
        cout<<"Enter manager name : ";
        getline(std::cin, Person::name);
        cout<<"Enter manager ID : ";
        cin>>empID;
        cout<<"Enter manager department : ";
        cin>>department;

    }
    void show(){
        cout<<"\nManager details :\n\n";
        cout<<"Manager name : "<<Person::name;
        cout<<"\nManager ID : "<<empID;
        cout<<"\nManager department : "<<department;

    }
};

int main(){

    Manager mng;
    mng.get();
    mng.show();

    return 0;
}