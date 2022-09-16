#ifndef CPP_DRINKMAKER_H
#define CPP_DRINKMAKER_H


#include <string>

class DrinkMaker {
public:
    virtual void execute(std::string command) = 0;
};


#endif //CPP_DRINKMAKER_H
