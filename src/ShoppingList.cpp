#include <iostream>
#include <algorithm>
#include "ShoppingList.h"

ShoppingList::ShoppingList(const std::string& name) : name(name) {}

std::string ShoppingList::getName() const {
    return name;
}

void ShoppingList::addItem(const std::shared_ptr<Item>& item) {
    items.push_back(item);
    notifyObservers();
}

void ShoppingList::removeItem(const std::string& itemName) {
    items.erase(
        std::remove_if(items.begin(), items.end(),
                       [&](const std::shared_ptr<Item>& i) {
                           return i->getName() == itemName;
                       }),
        items.end()
    );
    notifyObservers();
}

void ShoppingList::listItems() const {
    std::cout << "Lista: " << name << std::endl;
    for (const auto& item : items) {
        std::cout << "- " << item->getName() << " (x" << item->getQuantity() << ")" << std::endl;
    }
}

int ShoppingList::getTotalQuantity() const {
    int total = 0;
    for (const auto& item : items) {
        total += item->getQuantity();
    }
    return total;
}

void ShoppingList::attach(std::shared_ptr<Observer> observer) {
    observers.push_back(observer);
}

void ShoppingList::detach(std::shared_ptr<Observer> observer) {
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void ShoppingList::notifyObservers() const {
    for (const auto& observer : observers) {
        observer->update();
    }
}
