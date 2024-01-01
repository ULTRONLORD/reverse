#include <iostream>

using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);

    for(int i=sentence.size()-1; i>=0; i--)
    {
        cout << sentence[i];
    }

    return 0;
}
