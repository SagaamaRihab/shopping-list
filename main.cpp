#include "User.h"
#include "ShoppingList.h"
#include "Item.h"

int main() {
    std::shared_ptr<User> user = std::make_shared<User>("Rihab");
    std::shared_ptr<ShoppingList> list = std::make_shared<ShoppingList>("Lista di Rihab");

    // collego l’utente come osservatore
    list->attach(user);

    // Creo un item con i parametri richiesti
    std::shared_ptr<Item> item = std::make_shared<Item>("Latte", "Bevande", 2);

    list->addItem(item);  // Qui il metodo update() sarà chiamato!

    return 0;
}
