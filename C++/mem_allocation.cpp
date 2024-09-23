#include <iostream>
using namespace std;
class Shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void setprice(void);
    void displayprice(void);
    void incounter(void)
    {
        counter = 0;
    }
};

void Shop ::setprice(void)
{
    cout << "Enter id of your item no. " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter price of your item " << endl;
    cin >> itemprice[counter];
    counter++;
}
void Shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item id " << itemid[i]  << " is " << itemprice[i] << endl;
    }
}
int main()
{
    Shop dukaan;
    dukaan.incounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}