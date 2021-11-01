#ifndef DESSERT
#define DESSERT

#include <iostream>
#include <string>
#include <memory>


struct Dessert
{
    std::string name;
    int price;

    virtual ~Dessert() = default;

    virtual void make(int quantity) = 0;



};

struct IceCream : Dessert 
{
    void make(int quantity) override 
    {
        std::cout << "Making " << quantity << " Ice Cream(s)" << std::endl;
    }
};

struct Cake : Dessert
{
    void make(int quantity) override 
    {
        std::cout << "Making " << quantity << " Cake(s)" << std::endl;
    }
};

#endif