#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include <memory>
#include "ShoppingList.h"
#include "Observer.h"

class User : public Observer {
private:
    std::string name;
    std::vector<std::shared_ptr<ShoppingList>> shoppingLists;

public:
    User(const std::string& name);
    void addShoppingList(std::shared_ptr<ShoppingList> list);
    void update() override; // Observer
    std::string getName() const;
};

#endif
