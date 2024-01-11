#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
using namespace std;

// hold the number and resource of hex
struct hexx{
    int num; string resc;
};

// print the hex with the passed in variables
void print_hexx(hexx h){
    cout << "      *     " << endl;
    cout << endl;
    cout << "*          *" << endl;
    cout << "    " << endl; // 4 spaces
    cout << "    " << endl; // 4 spaces
    cout << "*          *" << endl;
    cout << endl;
    cout << "      *     " << endl;
}

int main (){
    cout << "~ GOT Catan Randomizer ~" << endl;

    // hold available variables
    vector<string> resources;
    vector<int> numbers;

    // fill our vectors
    for (int i = 0; i < 5; i++){
        resources.push_back("STONE");
    }

    for (int i = 0; i < 4; i++){
        resources.push_back("BRICK");
    }

    for (int i = 0; i < 4; i++){
        resources.push_back("SHEEP");
    }

    for (int i = 0; i < 4; i++){
        resources.push_back("WHEAT");
    }

    for (int i = 0; i < 4; i++){
        resources.push_back("WOOD");
    }

    numbers.push_back(2); numbers.push_back(12);
    numbers.push_back(3); numbers.push_back(3); numbers.push_back(3);
    numbers.push_back(4); numbers.push_back(4); numbers.push_back(4);
    numbers.push_back(5); numbers.push_back(5);
    numbers.push_back(6); numbers.push_back(6);
    numbers.push_back(8); numbers.push_back(8);
    numbers.push_back(9); numbers.push_back(9);
    numbers.push_back(10); numbers.push_back(10); numbers.push_back(10);
    numbers.push_back(11); numbers.push_back(11);

    // create logic
    int t = time(0);
    srand(t);

    cout << rand() % 21 << endl;
    
}
