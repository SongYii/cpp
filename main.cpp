#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cin >> s;
    std::cout << s << std::endl;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'a')
        {
            s[i] = 'b';
        }
        else if(s[i] == 'b')
        {
            s[i] = 'a';
        }
    }
    return 0;
}
