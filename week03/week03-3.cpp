#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "�п�J�@�Ӧr��,�������঳�Ů�: ";
    cin >> s;
    cout << "�r��s:"<< s << "�����׬O:" << s.lenght() << "\n";
    for(int i=0; i<s.lenght(); i++){
        cout << s[i] << "\n";
    }
}
