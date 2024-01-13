#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

// struct
struct hexx{
    string resc; int num;
};

// print the hex with the passed in variables
void print_hexx(string r, int n){
    cout << "      *     " << endl;
    cout << endl;
    cout << "*          *" << endl;
    cout << "    " << r << "  "<< endl; // 4 spaces
    cout << "      " << n << "  " << endl; // 4 spaces
    cout << "*          *" << endl;
    cout << endl;
    cout << "      *     " << endl;
}

// check if a number is in vector
bool is_in(vector<int> v, int r){
    for (auto i : v){
        if (i == r){
            return true;
        }    
    }

    return false;
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

    // element chosen vectors
    vector<int> r_selector; vector<int> n_selector;

    while (r_selector.size() != 21){
        int temp = rand() % 21;
        if (is_in(r_selector, temp) == false){
            r_selector.push_back(temp);
        }
    }

    while (n_selector.size() != 21){
        int temp2 = rand() % 21;
        if (is_in(n_selector, temp2) == false){
            n_selector.push_back(temp2);
        }
    }

    ofstream outf("test.txt");

    outf << "howdy";
    outf.close();


    // struct implementation
    
}
