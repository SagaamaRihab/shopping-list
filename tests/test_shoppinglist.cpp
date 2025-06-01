#include "gtest/gtest.h"
#include "ShoppingList.h"
#include "Item.h"
#include <memory>

TEST(ShoppingListTest, CreateAndGetName) {
    ShoppingList list("Lista Settimanale");
    EXPECT_EQ(list.getName(), "Lista Settimanale");
}

TEST(ShoppingListTest, AddAndListItems) {
    ShoppingList list("Spesa");
    auto item1 = std::make_shared<Item>("Latte", "Alimentari", 2);
    auto item2 = std::make_shared<Item>("Pane", "Alimentari", 1);

    list.addItem(item1);
    list.addItem(item2);

    // Controlliamo che il totale quantità sia corretto
    EXPECT_EQ(list.getTotalQuantity(), 3);

    // Non possiamo testare l'output di listItems() facilmente,
    // ma possiamo verificare che gli item siano stati aggiunti correttamente
}

TEST(ShoppingListTest, RemoveItem) {
    ShoppingList list("Spesa");
    auto item1 = std::make_shared<Item>("Latte", "Alimentari", 2);
    auto item2 = std::make_shared<Item>("Pane", "Alimentari", 1);

    list.addItem(item1);
    list.addItem(item2);

    list.removeItem("Latte");

    EXPECT_EQ(list.getTotalQuantity(), 1);

    list.removeItem("Pane");

    EXPECT_EQ(list.getTotalQuantity(), 0);
}
