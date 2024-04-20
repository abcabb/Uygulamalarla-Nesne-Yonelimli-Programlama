#include <iostream>

using std::string;

class Vehicle{
private:    
    string manufacturer;
public:
    string getManufacturer(){
        return manufacturer;
    }
    void setManufacturer(string value){
        manufacturer = value;
    }
};

int main(){
    std::cout <<"Hello World\n";

    Vehicle item1 = Vehicle();

    item1.setManufacturer("TOGG");

    std::cout <<"The manufacturer is "<<item1.getManufacturer(); 
    
}