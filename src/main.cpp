#include <iostream>
#include <vector>
#include "market_event.hpp"


using namespace std;

std::vector<MarketEvent> load_data();

int main() {

    std::vector<MarketEvent> result = load_data();
    for (auto [f1, f2, f3, f4, f5] : result) {
        cout << f1 << " " << f2 << " " << f3 << " " << f4 << " "<< f5 << "\n";
    }
}