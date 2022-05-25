#include <string>
#include <iostream>

class Animal
{
public:
    std::string name;

    std::string get_name();
    void set_name(std::string new_name);

private:
    int age;
};

std::string Animal::get_name()
{
    return name;
}

void Animal::set_name(std::string new_name)
{
    name = new_name;
}

int main(void)
{
    Animal neko;

    neko.set_name("hgoehgoe");

    std::cout << "name: " << neko.get_name() << std::endl;

    return 0;
}