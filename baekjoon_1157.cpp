#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int alpha[26] = { 0, };
    string str;
    int max=0, index = 0;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        index = toupper(str[i]);
        alpha[index - 65]++;

    }
    int max_index = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] > max)
        {
            max = alpha[i];
            max_index = i;
        }
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == max)
        {
            count++;
            if (count >= 2)
            {
                cout << "?" << endl;
                return 0;
            }
        }
        
    }
    cout << (char)(max_index + 65) << endl;
    return 0;
}

