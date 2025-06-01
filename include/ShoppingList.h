#ifndef SHOPPINGLIST_H
#define SHOPPINGLIST_H

#include <string>
#include <vector>
#include <memory>
#include "Item.h"

class ShoppingList {
private:
    std::string name;
    std::vector<std::shared_ptr<Item>> items;

public:
    ShoppingList(const std::string& name);

    std::string getName() const;
    void addItem(const std::shared_ptr<Item>& item);
    void removeItem(const std::string& itemName);
    void listItems() const;
    int getTotalQuantity() const;
};

#endif // SHOPPINGLIST_H
