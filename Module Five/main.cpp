#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

int main()
{

    // Storing user input to a file
    std::ofstream fileToAppend("CSC450_CT5_mod5.txt", std::ios::app);

    if (!fileToAppend.is_open())
    {
        std::cerr << "Error opening file for writing." << std::endl;
        return 1;
    }

    std::string userInput;
    std::cout << "Enter text (enter 'exit' to stop):" << std::endl;

    while (true)
    {
        std::getline(std::cin, userInput);

        if (userInput == "exit"){ break;}

        fileToAppend << userInput << std::endl;
    }

    fileToAppend.close();

    // Reversing the file
    std::ifstream fileThatWasAppended("CSC450_CT5_mod5.txt");

    if (!fileThatWasAppended.is_open())
    {
        std::cerr << "Error opening file for reading." << std::endl;
        return 1;
    }

    std::string appendFileContents(
        (std::istreambuf_iterator<char>(fileThatWasAppended)),
        std::istreambuf_iterator<char>());

    fileThatWasAppended.close();

    std::reverse(appendFileContents.begin(), appendFileContents.end());

    std::ofstream reverseOfAppendFile("CSC450-mod5-reverse.txt");

    if (!reverseOfAppendFile.is_open())
    {
        std::cerr << "Error opening file for writing reversed content." << std::endl;
        return 1;
    }

    reverseOfAppendFile << appendFileContents;

    reverseOfAppendFile.close();

    std::cout << "Done." << std::endl;

    return 0;
}
