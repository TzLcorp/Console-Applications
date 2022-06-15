/*
    You can change and use as you wish.
    (Provided that the source is specified)
*/

#include <iostream>
#include <fstream>
#include <Windows.h>

char fileName[20], fileName2[20], ch; // Ch is the Encrypting variable.
unsigned int x; // Alphabet key.

FILE *file1, *file2; // Files

void encryption(); // Encryption function.
void decryption(); // Decryption function.

class keyint { // Alphabet

public:

    char key[26] = {'A', 'B',   
                    'C', 'D', 
                    'E', 'F', 
                    'G', 'H', 
                    'I', 'J', 
                    'K', 'L', 
                    'M', 'N', 
                    'O', 'P', 
                    'Q', 'R', 
                    'S', 'T', 
                    'U', 'V', 
                    'W', 'X',
                    'Y', 'Z'};
};

int main() {

    std::string choice;

    std::cout << "[1] Encryption" << std::endl;
    std::cout << "[2] Decryption" << std::endl;

    label:
    std::cout << "Choose the action you want to do: ";
    std::cin >> choice;

    if (choice == "1")
    {
        encryption();
    }
    else if (choice == "2")
    {
        decryption();
    }
    else
    {
        std::cout << "Please select a valid option.";
        goto label;
    }

    return 0;
}

void encryption() {

    keyint encrypt;

    label2:
    std::cout << "Enter key: ";
    std::cin >> x;

    if (x >= 26)
    {
        std::cout << "The key must be less than 26 or cannot be negative.\n";
        goto label2;
    }

    fileLabel:

    std::cout << "Enter the file to be encrypted: ";

    std::cin >> fileName;

    file1 = fopen(fileName, "r"); // Opens file to read mode.

    if (!file1)
    {
        MessageBoxA(0, "File not found.", "ERROR", MB_ICONERROR); // If file doesn't exist.
        goto fileLabel;
    }

    std::cout << "File name to be stored: ";

    std::cin >> fileName2;

    file2 = fopen(fileName2, "w");

    while (1) {

        ch = fgetc(file1);

        if (ch == EOF) { // When it reaches the End Of File, it exits the loop.

            break;

        }

        ch += encrypt.key[x];

        fputc(ch, file2);

    }

    fclose(file1);

    fclose(file2);
}

void decryption() {

    label2:
    std::cout << "Enter key: ";
    std::cin >> x;

    if (x >= 26)
    {
        std::cout << "The key must be less than 26 or cannot be negative.\n";
        goto label2;
    }

    keyint decrypt;

    fileLabel:

    std::cout << "Enter the File to be decrypted: ";

    std::cin >> fileName;

    file1 = fopen(fileName, "r"); // Opens file to read mode.

    if (!file1)
    {
        MessageBoxA(0, "File not found.", "ERROR", MB_ICONERROR); // If file doesn't exist.
        goto fileLabel;
    }

    std::cout << "(if you don't want to, type in the same filename.) New filename: ";

    std::cin >> fileName2;

    file2 = fopen(fileName2, "w"); // Opens file to write mode.

    while (1) {

        ch = fgetc(file1);

        if (ch == EOF) { // When it reaches the End Of File, it exits the loop.

            break;

        }

        ch -= decrypt.key[x];

        fputc(ch, file2);

    }

    fclose(file1);

    fclose(file2);
}
