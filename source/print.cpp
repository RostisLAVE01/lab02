#include <print.hpp>

using namespace std;

void print(const string& text, ostream& out)
{
out << text;
}

void print(const string& text, ofstream& out)
{
out << text;
}
