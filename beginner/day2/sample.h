//

#ifndef _SAMPLE_H_
#define _SAMPLE_H_

#include <string>

using namespace std;

class Sample
{
private:
    int id;
    string name;
    int age;
    string region;

public:
    void set(int id, string name, int age, string region);
    int future(int num);
};

#endif