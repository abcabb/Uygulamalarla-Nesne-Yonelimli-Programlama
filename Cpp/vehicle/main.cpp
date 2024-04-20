#include <iostream>

using std::string;

class Vehicle{
private:    
    string manufacturer;
    int year;
    string color;
public:
    Vehicle(){
        std::cout<<"An Vehicle Instance has been created.";
    }

    Vehicle(string manufacturer, int year, string color) : Vehicle(){
        this->manufacturer = manufacturer;
        this->year = year;
        this->color = color;
    }

    string getManufacturer(){
        return this->manufacturer;
    }
    void setManufacturer(string manufacturer){
        this->manufacturer = manufacturer;
    }
    int getYear(){
        return this->year;
    }
    void setYear(int year){
        this->year = year;
    }
    string getColor(){
        return this->color;
    }
    void setColor(string color){
        this->color = color;
    }
};

int main(){
    std::cout <<"Hello World\n";

    Vehicle item1 = Vehicle();
    item1.setManufacturer("TOGG");
    std::cout <<"The manufacturer is "<<item1.getManufacturer() << std::endl; 
    
    Vehicle item2 = Vehicle("Scoda", 2019, "White");
    std::cout<<item2.getManufacturer();
}