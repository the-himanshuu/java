#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "\nenter the id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is :" << id << "   and this is employee number \t" << count << endl;
    }

    static void getcount(void)
    {
        // cout << id; // throw an error
        cout << "the value of count is " << count << endl;
    }
};
// count is the static data members of class employee
int employee::count = 100; // static variable always have default value is 0 and static variable is also known as class variables
int main()
{
    employee harry, roham, yash;
    harry.setdata();
    harry.getdata();
    employee::getcount();

    yash.setdata();
    yash.getdata();
    employee::getcount();

    roham.setdata();
    roham.getdata();
    employee::getcount();

    return 0;
}