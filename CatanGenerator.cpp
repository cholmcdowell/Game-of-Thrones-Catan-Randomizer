#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;


// print hex row
void print_row(ofstream& of, vector<string> r, vector<int> r_s,
    vector<int> n, vector<int> n_s, int num_spaces, int hexes, int s, int e){
    for (int i = 0; i < num_spaces; i++){
        of << " ";
    }
    for (int i = 0; i < hexes; i++){
        of << "      *     ";
    }
    of << endl;
    for (int i = 0; i < num_spaces; i++){
            of << " ";
    }
    for (int i = 0; i < hexes; i++){
        
        if (i == 0){
            of << "*          *";
        }
        else{
            of << "           *";
        }
    }
    of << endl;
    for (int i = 0; i < num_spaces; i++){
            of << " ";
    }
    for (int i = s; i < e; i++){
        if (r.at(r_s.at(i)) == "WOOD"){
            of << "    " << r.at(r_s.at(i)) << "    ";
        }
        else{
            of << "    " << r.at(r_s.at(i)) << "   ";
        }
        
    }
    of << endl;
    for (int i = 0; i < num_spaces; i++){
            of << " ";
    }
    for (int i = s; i < e; i++){
        if (n.at(n_s.at(i)) < 10){
            of << "      " << n.at(n_s.at(i)) << "     ";
        }
        else{
            of << "     " << n.at(n_s.at(i)) << "     ";
        }    
    }
    of << endl;
    for (int i = 0; i < num_spaces; i++){
            of << " ";
    }
    for (int i = 0; i < hexes; i++){\
        if (i == 0){
            of << "*          *";
        }
        else{
            of << "           *";

        }
    }
    of << endl;
    for (int i = 0; i < num_spaces; i++){
            of << " ";
    }
    for (int i = 0; i < hexes; i++){
        of << "      *     ";
    }
    of << endl;
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

    // create map
    ofstream outf("test.txt");

    // top 4 hexes
    print_row(outf, resources, r_selector, numbers, n_selector, 15,4,0,4);

    // top-middle 5 hexes
    print_row(outf, resources, r_selector, numbers, n_selector, 10,5,4,9);

    // bot-middle 6 hexes
    print_row(outf, resources, r_selector, numbers, n_selector, 5,6,9,15);

    // bot6 hexes
    print_row(outf, resources, r_selector, numbers, n_selector, 0,6,15,21);
    
    outf.close();  
}
