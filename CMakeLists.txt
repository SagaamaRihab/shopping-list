cmake_minimum_required(VERSION 3.20)
project(shopping_list)

set(CMAKE_CXX_STANDARD 17)

# Includi la cartella include per i .h
include_directories(include)

# Aggiungi main.cpp (è nella root) + sorgenti .cpp nella cartella src/
add_executable(shopping_list
        main.cpp
        src/Item.cpp
        src/ShoppingList.cpp
        src/User.cpp

)

# ====== GoogleTest Setup ======
include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# ====== Test Executable ======
add_executable(
        run_tests
        tests/test_item.cpp
        tests/test_shoppinglist.cpp
        src/Item.cpp
        src/ShoppingList.cpp
        src/User.cpp
        src/Subject.cpp

)

target_link_libraries(run_tests gtest_main)

include(GoogleTest)
gtest_discover_tests(run_tests)
