#include <iostream>
#include <string>

using namespace std;

int main()
{
    for (int i = 0; i < 3; ++i)
    {
        string firstString, secondString;

        // Input for the first string
        cout << "Enter the first string: ";
        getline(cin, firstString);

        // Input for the second string
        cout << "Enter the second string: ";
        getline(cin, secondString);

        // Concatenate the two strings
        string result = firstString + " " + secondString;

        // Print the result
        cout << "Concatenated string: " << result << endl;
    }

    return 0;
}
