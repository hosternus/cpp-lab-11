#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Реверсивное отображение данных: Разработайте программу, которая считывает
// список данных (например, имен или дат) и выводит их в обратном порядке с
// помощью обратных итераторов

int main(void) {

    vector<string> data;

    string input = "";

    cout << "Enter data (type 'end' to finish):" << endl;

    while (true) {
        cin >> input;
        if (input == "end") { break; }
        data.push_back(input);
    }

    for (vector<string>::reverse_iterator i = data.rbegin(); i != data.rend(); i++) { cout << *i << endl; }

    return 0;
}
