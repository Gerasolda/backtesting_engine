#include <iostream>
#include <vector>
#include "market_event.hpp"
#include "order.hpp"
#include "order_book.hpp"



using namespace std;

std::vector<MarketEvent> load_data();

int main() {

    OrderBook book;
    book.addOrder({1, Side::Buy, 2, 3});
    book.addOrder({2, Side::Sell, 3, 5});
    std::cout << book.size() << " ";
    book.cancelOrder(1);
    std::cout << book.size();

}