#include <iostream>

using std::string;

class Person{
protected:    
    string name;
    int age;

public:
    Person(){
        std::cout<<"Person instance has been created"<<std::endl;
    }

    Person(string name, int age) : Person(){
        this->name = name;
        this->age = age;
    }

    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }
    int getAge(){
        return this->age;
    }
    void setAge(int age){
        this->age = age;
    }

    virtual void giveInfo(){ // Dont Forget To Add "virtual" Keyword To Your Overriden Function. !!!!
        std::cout<<"Person's name is " << this->name << " and age is " << this->age <<std::endl;
    }
};

class Student : public Person{
private:
    int studentNo;

public:
    Student(string name, int age, int studentNo) : Person(name, age){
        this->studentNo = studentNo;
        std::cout<< " instance has been created from student class with 3 args constructor.";
    }

    void giveInfo() override{
        std::cout<<"Student name : " << this->name << " Student age : " << this->age << "Student number : " << this->studentNo; 
    }
};

class Teacher : public Person{
private:
    string lessonOfTeacher;
public:
    Teacher(string name, int age, string lessonOfTeacher) : Person(name, age){
        this->lessonOfTeacher = lessonOfTeacher;
        std::cout<< " instance has been created from teacher class with 3 args constructor."; 
    }

    void giveInfo() override{
        std::cout<<"Teacher name : " << this->name << " Teacher age : " << this->age << "Teacher lesson : " << this->lessonOfTeacher;
    }
};

int main(){
    Person person1 = Person();
    person1.setAge(21);
    person1.setName("Semi");
    std::cout << "Person name : " << person1.getName() << "Person age : " << person1.getAge();

    Person person2 = Person("Pelin", 18);
    person2.giveInfo();  

    Student student1 = Student("Jack", 86, 100523);
    student1.giveInfo();

    Teacher teacher1 = Teacher("Billy", 50, "Math");
    teacher1.giveInfo();
}