#include <iostream>
#include <string>

using namespace std;

/**
 * Checks if origin string is a subtring of target string
 * @param origin Origin string
 * @param target Target string
 * @returns If the origin string is a substring of the target string returns true otherwise false
 */
bool is_substring(string origin, string target)
{
    int i;
    int targetLength = 0;
    int originLength = origin.length();

    for (i = 0; i < originLength; i++)
    {
        if (targetLength == target.length()) break;

        if (origin.at(i) == target.at(targetLength))
        {
            targetLength++;
        }
        else
        {
            targetLength = 0;
        }
    }

    return targetLength < target.length();
}

/**
 * Checks if origin string is a rotation of target string
 * @param origin Origin string
 * @param target Target string
 * @returns If the origin string is a rotation of the target string returns true otherwise false
 */
bool is_rotation(string origin, string target)
{
    int originLength = origin.length();

    if (originLength == target.length() && originLength > 0)
    {
        string concatenated = origin + origin;
        return is_substring(concatenated, target);
    }

    return false;
}

int main()
{
    cout << "THIS PROGRAM TAKES TWO STRINGS AND PRINTS IF ONE IS A ROTATION OF OTHER" << endl;
    cout << "Enter the origin string: ";
    
    string origin;
    cin >> origin;

    cout << "Enter the target string: ";

    string target;
    cin >> target;

    cout << "Is the original a rotation of target?: " << is_rotation(origin, target);

    return 0;
}