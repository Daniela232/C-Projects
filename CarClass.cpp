/*
	Name: CarClass
	Copyright: 2023
	Author: Daniela Valerio
	Date: 05/14/2023
	Description: Make a car class and display the car model and year of the car.
	            Also make the car accelarate and brake by 5. Display the speed of the car 5 times
	            while accelarating and braking.
*/

#include <iostream>
#include <string>
using namespace std;

class CarClass{
    private: 
    int yearModel;
    string make;
    int speed;

    public:
    //Constructor
    CarClass(){}
    //Constructor that initializes the variables
    CarClass(int year, string name)
    {
        yearModel = year;
        make = name;
        speed = 0;
    }

    //Accessors that return the values of the variables
    int getyearModel()
    {
        return yearModel;
    }

    string getMake()
    {
        return make;
    }

    int getSpeed()
    {
        return speed;
    }
    //Mutators changes the variable speed to increase or decrease
    void acceleration()
    {
        speed += 5;
    }
    
    void braking()
    {
        speed -= 5;
    }

};

//Main function
int main()
{
    //Displays the car make model and year of the car
    CarClass mercedes(2020, "Mercedes GLE");
    cout << "The car make model is " << mercedes.getMake() << " and the year of the car is "
        << mercedes.getyearModel() << endl;
    
    //Displays the speed of the car while accelerating by 5, 5 times.
    cout << "\nAccelerating..." << endl;
    for (int i = 0; i < 5; i++) 
    {
        mercedes.acceleration();
        cout << "The speed is: " << mercedes.getSpeed() << "mph" << endl;
    }
    
    //Displays the speed of the car while braking by 5, 5 times.
    cout << "\nBraking..." << endl;
    for (int i = 0; i < 5; i++) 
    {
        mercedes.braking();
        cout << "The speed is: " << mercedes.getSpeed() << "mph" << endl;
    }

    return 0;
}