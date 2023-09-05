#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    string ofname;
    if (argc < 2)
        ofname = "output.csv";
    else
        ofname = argv[1];

    ofstream ofs(ofname);
    if (!ofs) {
        cerr << "\033[31mE: faild to open a file.\033[m" << endl;
        exit(1);
    }

    ofs << "no,name,value" << endl;
    ofs << 1 << ',' << "apple" << ',' << 100 << endl;

    return 0;
}
