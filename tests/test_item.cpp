#include "gtest/gtest.h"
#include "Item.h"

TEST(ItemTest, CreateItem) {
    Item item("Latte", "Alimentari", 2);
    EXPECT_EQ(item.getName(), "Latte");
    EXPECT_EQ(item.getCategory(), "Alimentari");
    EXPECT_EQ(item.getQuantity(), 2);
}

TEST(ItemTest, SetQuantity) {
    Item item("Pane", "Alimentari", 1);
    item.setQuantity(5);
    EXPECT_EQ(item.getQuantity(), 5);
}
