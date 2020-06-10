#include <iostream>


class Place {

};

class PlaceManager {

    int rows, columns;

public:
    Place **places{};

    PlaceManager(int rows, int columns) {
        this->rows = rows;
        this->columns = columns;
    }

};


PlaceManager placeManager;

int main() {

    int rows, columns;

    std::cout << "Wie viele Reihen gibt es?" << std::endl;
    std::cin >> rows;
    std::cout << "Wie viele Sitzplätze hat eine Reihe?" << std::endl;
    std::cin >> columns;

    placeManager.


    return 0;
}
