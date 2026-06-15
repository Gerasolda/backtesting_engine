cmake_minimum_required(VERSION 4.2)
project(backtesting_engine)

set(CMAKE_CXX_STANDARD 20)

add_executable(backtesting_engine src/main.cpp
        include/market_event.hpp
        src/src_loader.cpp
        include/src_loader.hpp
        include/order.hpp
        include/order_book.hpp
        src/order_book.cpp)

target_include_directories(backtesting_engine PRIVATE include)