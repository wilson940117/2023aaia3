#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "請輸入一個字串,中間不能有空格: ";
    cin >> s;
    cout << "字串s:"<< s << "的長度是:" << s.lenght() << "\n";
    for(int i=0; i<s.lenght(); i++){
        cout << s[i] << "\n";
    }
}
