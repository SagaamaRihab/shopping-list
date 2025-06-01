cmake_minimum_required(VERSION 3.20)
project(shopping_list)

set(CMAKE_CXX_STANDARD 17)

# Includi la cartella include per i .h
include_directories(include)

# Aggiungi main.cpp (è nella root) + sorgenti .cpp nella cartella src/
add_executable(shopping_list
        main.cpp
        src/Item.cpp
)
