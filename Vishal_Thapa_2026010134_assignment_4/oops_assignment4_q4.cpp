#include <iostream>
using namespace std;

class Vehicle{
    public:
    string brand,model;
};

class Car:Vehicle{
    public:
    int number_of_doors;
    void get(){
        cout<<"\nEnter car details :\n\n";
        cout<<"Enter car brand : ";
        cin>>brand;
        cout<<"Enter car model : ";
        cin>>model;
        cout<<"Enter number of doors in car : ";
        cin>>number_of_doors;
    }

    void show(){
        cout<<"\nCar details :\n\n";
        cout<<"\nCar brand : "<<brand;
        cout<<"\nCar model : "<<model;
        cout<<"\nNumber of doors in car : "<<number_of_doors;
    }
};

class Bike:Vehicle{
    public:
    double engine_capacity;
    void get(){
        cout<<"\n\nEnter bike details :\n\n";
        cout<<"Enter bike brand : ";
        cin>>brand;
        cout<<"Enter bike model : ";
        cin>>model;
        cout<<"Enter engine capacity in bike : ";
        cin>>engine_capacity;
    }

    void show(){
        cout<<"\nBike details :\n\n";
        cout<<"\nBike brand : "<<brand;
        cout<<"\nBike model : "<<model;
        cout<<"\nEngine capacity of bike : "<<engine_capacity<<" cc";
    }
};

int main(){

    Car car;
    car.get();
    car.show();

    Bike bike;
    bike.get();
    bike.show();

    return 0;
}