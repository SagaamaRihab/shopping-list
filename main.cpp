// main.cpp

#include <iostream>
#include "Item.h"

int main() {
    Item latte("Latte", "Alimentari", 2);

    std::cout << "Oggetto: " << latte.getName() << std::endl;
    std::cout << "Categoria: " << latte.getCategory() << std::endl;
    std::cout << "Quantità: " << latte.getQuantity() << std::endl;

    // Cambiamo quantità
    latte.setQuantity(3);
    std::cout << "Nuova quantità: " << latte.getQuantity() << std::endl;

    return 0;
}
