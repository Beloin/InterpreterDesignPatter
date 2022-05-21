//
// Created by beloin on 21/05/2022.
//

#include <Manager.h>
#include "iostream"
#include "utils/DefaultException.h"

using namespace std;

int main() {
    auto manager = new Manager();

    try {
        manager->interpret("STRING BLUE \"AZUL\"");
    }catch (DefaultException e) {
        cout << e.getMessage();
        return 1;
    }

    return 0;
}