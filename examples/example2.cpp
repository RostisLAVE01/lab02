#include <print.hpp>
#include <fstream>
using namespace std;
int main(int argc, char** args)
{
ofstream file("log.txt");
print(string("hello"), file);
}
