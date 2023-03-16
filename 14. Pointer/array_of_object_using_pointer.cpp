#include <iostream>
using namespace std;
class ShopeItem
{
    int id;
    float prise;

public:
    void set_Data(int id, float prise)
    {
        this->id = id;
        this->prise = prise;
    }

    void getData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "prise of this item is " << prise << endl;
    }
};

int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[50];

    ShopeItem *ptr = new ShopeItem[size];
    ShopeItem *ptrItem = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the Id and prise of the Item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).set_Data(p,q);
        ptr->set_Data(p, q);
        ptr++;
    }

    cout << "You entered the id and prise: " << endl
         << endl
         << endl;

    for (i = 0; i < size; i++)
    {
        cout << "Item number " << i + 1 << endl;
        ptrItem->getData();
        ptrItem++;
    }

    return 0;
}