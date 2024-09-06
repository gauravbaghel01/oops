#include<iostream>
using namespace std;
class Circle{
    private:
    float radius;
    const float pi=3.14;
    public:
    static int count;
    Circle(){
        radius=0;
    }
    void circle(int r){
        radius=r;
    }
    int circleArea(){
        return pi*radius*radius;
    }
    int circleCircumference(){
        return 2*pi*radius;
    }
    static int counter(){
        return count++;
    }
};
int Circle::count=0;
int main(){
    Circle obj;
    obj.circle(5);
    cout<< "Circle Area: "<<obj.circleArea()<<endl;
    cout<< "Circle Circumference: "<<obj.circleCircumference()<<endl;
    return 0;
}