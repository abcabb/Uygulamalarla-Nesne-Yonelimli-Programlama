#include <iostream>

using std::string;

class Vehicle{
protected:    
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

    /* virtual keyword means this function might run into a change in child classes. (overriding)(polymorphism)*/
    virtual void start(){
        std::cout <<"The car has been started."<< std::endl;
    }
    virtual void drive(){
        std::cout <<"The car is driving."<< std::endl;
    }
    virtual void stop(){
        std::cout <<"The car has stoped."<< std::endl;
    }
};

class Car : public Vehicle{
public:
    void openSunRoof(){
        std::cout<<"The sunroof has been opened."<<std::endl;
    }
    Car() : Vehicle(){
        std::cout<<" from Car.(no args const.)"<<std::endl;
    }
    Car(string manufacturer, int year, string color) : Vehicle(manufacturer, year, color){
        std::cout<<" from Car (3 args const.)"<<std::endl;
    }

    void start() override{
        std::cout<<"The car manufactured by "<<this->manufacturer<<" is being driven."<<std::endl;
    }
};

class Truck : public Vehicle{
public:
    void transport(){
        std::cout<<"The items has been transported."<<std::endl;
    }
    Truck() : Vehicle(){
        std::cout<<" from Truck class with no args constructor."<<std::endl;
    }

    Truck(string manufacturer, int year, string color) : Vehicle(manufacturer, year, color){
        std::cout<<" from Truck class with 3 args constructor."<<std::endl;
    }

    void start() override{
        std::cout<<"The truck manufactured by "<<this->manufacturer<<" is being driven."<<std::endl;
    }
};

class Bus : public Vehicle{
public:
    Bus(string manufacturer, int year, string color) : Vehicle(manufacturer, year, color){
        std::cout<<" from Bus class with 3 args constructor."<<std::endl;
    }

    void scheduling(){
        std::cout<<"Scheduled."<<std::endl;
    }

    void start() override{
        std::cout<<"The bus manufactured by "<<this->manufacturer<<" is being driven."<<std::endl;
    }
};

class SchoolBus : public Bus{
public:
    SchoolBus(string manufacturer, int year, string color) : Bus(manufacturer, year, color){
        std::cout<<" from SchoolBus class from 3 args constructor."<<std::endl;
    }

    void getFare(){
        std::cout<<"Fare done."<<std::endl;
    }

    void start() override{
        std::cout<<"The schoolbus manufactured by "<<this->manufacturer<<" is being driven."<<std::endl;
    }
};

int main(){
    std::cout <<"Hello World\n";

    Vehicle item1 = Vehicle();
    item1.setManufacturer("TOGG");
    std::cout <<"The manufacturer is "<<item1.getManufacturer() << std::endl; 
    
    Car item2 = Car("Scoda", 2019, "White");
    std::cout<<item2.getManufacturer();

    Car item3 = Car();
    item3.openSunRoof();

    Truck item4 = Truck();
    item4.transport();

    Truck item5 = Truck("MAN", 2020, "White");
    item5.start();

    Bus item6 = Bus("Fiat", 2022, "White");
    item6.scheduling();

    SchoolBus item7 = SchoolBus("Mercedes", 2023, "White");
    item7.scheduling();
    item7.getFare();

    item2.start();
    item2.stop();
    item3.start();
    item3.stop();
    item4.start();
    item4.stop();
    item5.start();
    item5.stop();
    item6.start();
    item6.stop();
    item7.start();
    item7.stop();
}