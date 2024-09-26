///codeblock-settings-compiler-把-std=c++11年的C++開起來
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(char c : s){
        cout << c << "\n";
    }
}
