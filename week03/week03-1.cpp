///codeblock-settings-compiler-��-std=c++11�~��C++�}�_��
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
