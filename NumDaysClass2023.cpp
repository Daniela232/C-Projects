/*
	Name: NumDays Class
	Copyright: 2023
	Author: Daniela Valerio
	Date: 05/21/2023
	Description: Design a class called NumDays. The class’s purpose is 
                to store a value that represents a number of work hours and convert it 
                to a number of days.
*/

#include <iostream>
using namespace std;

class NumDays{
    private:
    float workHours;



    public:
    //Constructors
    NumDays();
    NumDays(float hours, float days);


    //Accessors - getters
    float getWorkHours(){ 
        return workHours;
    }
    
    float getWorkDays(){ 
        return workHours / 8;
    }

    //Mutators - setters
    void setWorkHours(float hours){
        workHours = hours;
    }

    void setWorkDays(float days)
    { 
       workHours = 8 * days;
    }

};

NumDays::NumDays()
{
    workHours = 0;
}

NumDays::NumDays(float hours, float days)
{
    workHours = hours;
    
    
}


 

int main(){
    NumDays test1;
    test1.setWorkHours(40);
    cout << "The number of work hours entered is: " << test1.getWorkHours() << " hours" 
    << "\nThe work hours converted into work days is: " << test1.getWorkDays() << " days" << endl;

    NumDays test2;
    test2.setWorkHours(9);
    cout << "The number of work hours entered is: " << test2.getWorkHours() << " hours" 
    << "\nThe work hours converted into work days is: " << test2.getWorkDays() << " days" << endl;


    return 0;

}