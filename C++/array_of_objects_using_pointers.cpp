#include <iostream>
using namespace std;
class Shop
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "code of this item is " << id << endl;
        cout << "price of this item is " << price << endl;
    }
};

int main()
{int size=3;
//int *ptr= new int[34];
Shop *ptr= new Shop[size];
Shop *ptrTemp=ptr;
int p,i;
float q;
for(i=0;i<size;i++){
    cout<<"Enter id and price of item "<<i+1<<endl;
    cin>>p>>q;
    ptr->setdata(p,q);
    ptr++;
}
for(i=0;i<size;i++){
    cout<<"Item number: "<<i+1<<endl;
    ptrTemp->getdata();
    ptrTemp++;
}
    return 0;
}