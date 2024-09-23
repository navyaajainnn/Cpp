#include<iostream>
using namespace std;
int main()
{union money{
    int rice;
    char f;
    float dollar;
}m1;
m1.rice=33;
//m1.f='r';
m1.dollar=33443;
cout<<m1.dollar;
    return 0;
}