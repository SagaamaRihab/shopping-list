#ifndef SHOPPINGLIST_H
#define SHOPPINGLIST_H

#include <string>
#include <vector>
#include <memory>
#include "Item.h"
#include "Subject.h"
#include "Observer.h"

class ShoppingList : public Subject {
private:
    std::string name;
    std::vector<std::shared_ptr<Item>> items;

public:
    explicit ShoppingList(const std::string& name);

    std::string getName() const;
    void addItem(const std::shared_ptr<Item>& item);
    void removeItem(const std::string& itemName);
    void listItems() const;
    int getTotalQuantity() const;

    // Metodi Subject
    void attach(std::shared_ptr<Observer> observer) override;
    void detach(std::shared_ptr<Observer> observer) override;
    void notifyObservers() const override;
};

#endif
