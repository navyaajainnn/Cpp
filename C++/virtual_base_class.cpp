#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "Your roll number is " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
        ;
    }
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your score is " << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = physics + maths + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is " << total << endl;
    }
};

int main()
{Result navya;
navya.set_marks(36,34);
navya.set_number(45);
navya.set_score(89);
navya.display();
    return 0;
}