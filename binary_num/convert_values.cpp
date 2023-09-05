#include <iostream>
#include <sstream>
#include <string>
#include <bitset>

using namespace std;


string str_to_upper(const string str_origin)
{
    string str = str_origin;
    for (auto& c : str)
        c = toupper(c);

    return str;
}

string to_hex(const string str, const int base)
{
    const int num = stoi(str, nullptr, base);
    stringstream ss;
    ss << hex << num;

    return ss.str();
}


string to_binary(const string str, const int base)
{
    const int num = stoi(str, nullptr, base);
    stringstream ss;
    ss << bitset<16>(num);

    return ss.str();
}


int main(void)
{
    const string str = "1A11";
    cout << "num(origin): " << str << endl;
    cout << "num(bin): " << to_binary(str, 16) << endl;
    cout << "num(hex): " << str_to_upper(to_hex(to_binary(str, 16), 2)) << endl;
    return 0;
}
