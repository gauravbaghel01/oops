#include <iostream>
using namespace std;
class MARKS
{
private:
    int rno;
    int perc;

public:
    MARKS()
    {
        rno = 0;
        perc = 0;
    }
    MARKS(int r, float p)
    {
        rno = r;
        perc = p;
    }
    void PrintDetails()
    {
        cout << "\nRoll no." << rno << endl;
        cout << "Pefcentage " << perc << endl;
    }
};
class Student
{
private:
    MARKS objM;
    string name;

public:
    void SetName()
    {
        cout << "Enter the name: " << endl;
        cin >> name;
    }
    void getResult(MARKS obj)
    {
        objM = obj;
        cout << "Details of students:\n";
        cout << "Name:" << name;
        objM.PrintDetails();
    }
};
int main()
{
    MARKS MKS[5] = {MARKS(3001, 81), MARKS(2001, 71), MARKS(2005, 85), MARKS(3004, 92), MARKS(2002, 90)};
    Student std[5];
    for (int i = 0; i < 5; i++)
    {
        std[i].SetName();
    }
    for (int i = 0; i < 5; i++)
    {
        std[i].getResult(MKS[i]);
    }
}