#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
typedef vector<string> row;
typedef vector<row> matrix;


void show_data(const matrix& mat)
{
    for (const auto row_data : mat) {
        for (const auto str : row_data) {
            cout << str << ",";
        }
        cout << endl;
    }
}


void read_data(ifstream& ifs, matrix& mat)
{
    string line;
    while (getline(ifs, line)) {
        istringstream iss(line);
        string conma_buf;
        row row_data;
        while (getline(iss, conma_buf, ','))
            row_data.push_back(conma_buf);

        mat.push_back(row_data);
    }
}


int main(int argc, char** argv)
{
    string ifname;
    if (argc < 2)
        ifname = "input.csv";
    else
        ifname = argv[1];

    ifstream ifs(ifname);
    if (!ifs) {
        cerr << "\033[31mE: faild to open a file.\033[m" << endl;
        exit(1);
    }

    matrix data;
    read_data(ifs, data);
    show_data(data);

    return 0;
}
