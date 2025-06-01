#include "User.h"
#include <iostream>

User::User(const std::string& name) : name(name) {}


void User::addShoppingList(std::shared_ptr<ShoppingList> list) {
    shoppingLists.push_back(list);
    list->attach(std::shared_ptr<Observer>(this)); // cast esplicito a shared_ptr<Observer>
}


void User::update() {
    std::cout << " [" << name << "] Hai una modifica in una delle tue liste della spesa!" << std::endl;
}

std::string User::getName() const {
    return name;
}
