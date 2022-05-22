//
// Created by beloin on 21/05/2022.
//

#include <Manager.h>
#include "iostream"
#include "utils/DefaultException.h"

using namespace std;

void testS(){
    auto manager = new Manager();
    try {
        manager->interpret("STRING BLUE \"AZUL\"");
        manager->interpret("STRING TYREX \"LAST\"");
        manager->interpret("SHOW BLUE");
        manager->interpret("SHOW \"\n\"");
        manager->interpret("SHOW TYREX");
        manager->interpret("SHOW \"\n\"");
        manager->interpret("CONCAT BLUE \"LOL\"");
        manager->interpret("SHOW BLUE");
    }catch (DefaultException e) {
        cout << e.getMessage();
    }
}

void showHelp() {
    cout << "Welcome to the most simple Language Interpreter! ";
    cout << "You can already start your coding experience." << endl;
    cout << "You can create an instance writing: 'VAR', 'STRING', 'FLOAT' or 'INTEGER' plus the variable name and value.\nExamples:\n\t- VAR VAR1 \"LUCIUS\"\n\t- STRING VAR2 \"MY STRING\"" << endl;
    cout << "You have the next actions to work with your variables: 'ADD', 'MINUS' , 'CONCAT', 'SHOW', 'DELETE'" << endl;
    cout << "Examples:\n\t- CONCAT VAR1 \"LUCIUS\"\n\t- ADD VAR1 12" << endl;
    cout << "Show the variable in console, or print a string using 'SHOW'." << endl;
    cout << "Exit by writing 'EXIT'" << endl << endl;
}

int main() {
    auto manager = new Manager();

    showHelp();
    string input;
    while (input != "EXIT") {
        cout << ">>> ";
        cin.clear();
        getline(cin, input);

        try {
            manager->interpret(input);
        } catch (DefaultException e) {
            cout << e.getMessage() << endl;
        }
    }



    return 0;
}