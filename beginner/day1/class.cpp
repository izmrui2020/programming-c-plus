//
#include <iostream>
#include <string>

using namespace std;

class CSample
{
private:
    int id;
    string name;
    int age;

public:
    void sum_age();
    string full_name();
};

void CSample::sum_age()
{
    name = "I am strong";
}

string CSample::full_name()
{
    string res;

    res = "Iam ////";

    return res;
}

int main()
{
    CSample instance1;

    string res;
    res = instance1.full_name();

    cout << res << endl;

    return 0;
}