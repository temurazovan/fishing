#include <iostream>
#include <fstream>

int main() {
    std::string usersFish;
    std::string riverFish;
    int fishCount = 0;

    std::cout << "what kind of fish will you catch?" << std::endl;
    std::cin >> usersFish;

    std::ifstream river("../Volga.txt");
    std::ofstream basket("../basket.txt", std::ios::app);

    while (!river.eof()) {
        getline(river, riverFish);
        if (usersFish == riverFish) {
            basket << riverFish << std::endl;
            fishCount++;
        }
    }

    std::cout << fishCount << " fish were caught" << std::endl;

    river.close();
    basket.close();

    return 0;
}
