#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <src_loader.hpp>


std::vector<MarketEvent> load_data() {
    std::ifstream file("data/sample.csv");
    std::vector<MarketEvent> res;
    if (file.is_open()) {
        std::string line;
        int cnt = 0;
        while (getline(file, line)) {
            if (cnt) {
                std::stringstream ss(line);
                std::string val;
                MarketEvent ne;
                auto& [timestamp, bid, ask, bid_volume, ask_volume] = ne;

            }
            cnt++;
        }
        file.close();
    }
    return res;
}




