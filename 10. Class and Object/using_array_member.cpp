#include <iostream>
using namespace std;
class Shope
{
    int itemId[100];
    int itemPrise[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrise(void);
    void displayPrise();
};

void Shope::setPrise(void)
{
    cout << "Enter Id of your intem no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter prise of your item " << endl;
    cin >> itemPrise[counter];
    counter++;
}

void Shope::displayPrise(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The prise of intem with Id " << itemId[i] << " " << itemPrise[i] << endl;
    }
}
int main()
{
    Shope mall;
    mall.initCounter();
    mall.setPrise();
    mall.setPrise();
    mall.setPrise();
    mall.displayPrise();
    return 0;
}