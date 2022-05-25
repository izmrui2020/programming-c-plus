#include <iostream>

struct product
{
    int id;
    int price;
    int stock;
};

int main(void)
{
    product pen = {
        113,
        234,
        456,
    };

    std::cout << "id: " << pen.id << std::endl;
    std::cout << "price: " << pen.price << std::endl;
    std::cout << "stock: " << pen.stock << std::endl;

    return 0;
}