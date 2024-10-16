#include <iostream>
using namespace std;
class incNum {
private:
    int value;
public:
    incNum(int v = 0) : value(v) {}
    friend incNum& operator++(incNum& num) {
        ++num.value;  
        return num;   
    }
    friend incNum operator++(incNum& num, int) {
        incNum temp = num;  
        ++num.value;        
        return temp;        
    }


    void display() const {
     cout << "Value: " << value <<endl;
    }
};

int main() {
    incNum num(5);
    cout << "Initial: ";
    num.display();
    ++num;
   cout << "After Pre-increment: ";
    num.display();
    incNum oldNum = num++;
   cout << "After Post-increment: ";
    num.display();
   cout << "Old Value (Post-increment): ";
    oldNum.display();
    return 0;
}