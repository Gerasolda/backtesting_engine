#include <iostream>
#include <vector>
#include "market_event.hpp"
#include "order.hpp"
#include "order_book.hpp"
#include "execution_engine.hpp"



using namespace std;

std::vector<MarketEvent> load_data();

int main() {
    Position pos;

    Order buy{1, Side::Buy, 100, 5};
    Order sell{2, Side::Sell, 101, 2};

    execute(buy, pos);
    execute(sell, pos);

    std::cout << pos.inventory << '\n';



}