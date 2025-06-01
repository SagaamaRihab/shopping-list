// Item.h

#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
private:
    std::string name;
    std::string category;
    int quantity;

public:
    // Costruttore
    Item(const std::string& name, const std::string& category, int quantity);

    // Getter
    std::string getName() const;
    std::string getCategory() const;
    int getQuantity() const;

    // Setter
    void setQuantity(int newQuantity);
};

#endif
