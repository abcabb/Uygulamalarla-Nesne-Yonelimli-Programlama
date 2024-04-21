#include <iostream>

using namespace std;

class Shape{
protected:
    int x;
    int y;
public:  
    Shape(int x, int y){
        this->x = x;
        this->y = y;
    }

    int getX(){
        return this->x;
    }
    int getY(){
        return this->y;
    }
    void setX(int x){
        this->x = x;
    }
    void setY(int y){
        this->y = y;
    }

    virtual void draw() = 0;
};

class Rectangle : public Shape{
public:
    Rectangle(int x, int y) : Shape(x, y){}

    void draw() override{
        cout<<"Rectangle has been drawn.";
    }
};

class Triangle : public Shape{
public:
    Triangle(int x, int y) : Shape(x,y){}

    void draw(){
        cout<<"A triangle has been drawn.";
    }
};

class Square : public Rectangle{
public:
    Square(int x, int y) : Rectangle(x,y){}

    void draw(){
        cout<<"A square has been drawn.";
    }
};

int main(){
    Triangle item1 = Triangle(3,5);
    item1.draw();

    Rectangle item2 = Rectangle(5,10);
    item2.draw();

    Square item3 = Square(3,3);
    item3.draw();
}