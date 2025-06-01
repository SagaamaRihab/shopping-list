// Item.cpp

#include "Item.h"

// Costruttore
Item::Item(const std::string& name, const std::string& category, int quantity)
    : name(name), category(category), quantity(quantity) {}

// Getter
std::string Item::getName() const {
    return name;
}

std::string Item::getCategory() const {
    return category;
}

int Item::getQuantity() const {
    return quantity;
}

// Setter
void Item::setQuantity(int newQuantity) {
    quantity = newQuantity;
}
