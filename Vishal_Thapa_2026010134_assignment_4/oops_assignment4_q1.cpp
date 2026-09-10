#include <iostream>
using namespace std;

class Person{
    public:
   string name;
   int age;
};

class Student:Person{
    private:
    int roll_number;
    string course;
    public:
    void get(){
        cout<<"\nEnter student details :\n\n";
        cout<<"Enter student name : ";
        getline(std::cin, name);
        cout<<"Enter student age : ";
        cin>>age;
        cout<<"Enter student roll number : ";
        cin>>roll_number;
        cout<<"Enter student course : ";
        cin>>course;

    }
    void show(){
        cout<<"\nStudent details :\n\n";
        cout<<"Student name : "<<name;
        cout<<"\nStudent age : "<<age<<" years";
        cout<<"\nStudent roll number : "<<roll_number;
        cout<<"\nStudent course : "<<course;

    }
};

int main(){

    Student stu;
    stu.get();
    stu.show();

    return 0;
}