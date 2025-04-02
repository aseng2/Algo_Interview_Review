#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(){
    ifstream input_file;
    string line; 
    input_file.open("algo.txt");
    if(input_file.is_open()){
        while(getline(input_file, line)){
            cout << line << endl;
        }
    }
    input_file.close();
    cout << "Please select one algorithm";
}