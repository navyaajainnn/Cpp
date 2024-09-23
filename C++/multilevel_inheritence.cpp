#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll_numer(int);
    void get_roll_number(void);
};
void Student::set_roll_numer(int r)
{
    roll_number = r;
}
void Student::get_roll_number()
{
    cout <<"Roll number is: "<< roll_number << endl;
    ;
}
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam::get_marks()
{
    cout << "marks obtained in physics: " << physics << endl;
    cout << "marks obtained in maths: " << maths << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "percentage is: " << (maths + physics) / 2 << "%" << endl;
    };
};

int main()
{Result harry;
harry.set_roll_numer(420);
harry.set_marks(99,100);
harry.display();
    return 0;
}