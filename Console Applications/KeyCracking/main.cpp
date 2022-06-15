/*
    You can change and use as you wish.
    (Provided that the source is specified)
*/

#include <iostream>
#include <ctime>
#include <conio.h> // If you want to use "getch()" function instead of "sleep(time)".
#include <string>
#include <windows.h>

using namespace std;

// change the line color (from windows.h)
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); // I do not recommend using the "system(color x)" function because the entire console color changes.

char crack[] = {'Q','W','E','R','T','Y','U','I','O','P','A','S',
                'D','F','G','H','I','J','K','L','Z','X','C','V',
                'B','N','M','1','2','3','4','5','6','7','8','9'}; // Random Words

int colors[] = {15,12}; // Random Colors, white and red
int i, a, randomColor; // The "randomColor" named variable, picks the random color on colors[] array

string code; // User Input
string ky1,ky2,ky3,ky4,ky5; // First loop variables.
string ky6,ky7,ky8,ky9,ky10; // Second ...
string ky11,ky12,ky13,ky14,ky15; // (...)
string ky16,ky17,ky18,ky19,ky20;
string ky21,ky22,ky23,ky24,ky25;
string keyCode; // Key Code

int main()
{
    for(i = 0; i < 15; i++){ // the loop repeats 15 times
        system("CLS"); // Starting
        cout << "\n\n";
        srand(time(0)); // Current Time
        a = rand() % 36; // 36, the number of letters and numbers in the array
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << "\t" << crack[a];
        ky1 = crack[a];
        if(randomColor == 1)
        {
            keyCode = ky1; // variable is determined
        }
        else
        {
            keyCode = ""; // if randomColor equal to 0, the "keyCode's" first word is NULL ("")
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]); // Words and numbers' colors.
        cout << crack[a];
        ky2 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky2; // adding strings EXAMPLE -> A+B (first line) A = ky1, B = ky2
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky3 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky3;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky4 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky4;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky5 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky5;
        }
        cout << endl;

        // SECOND LOOP

        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << "\t" << crack[a];
        ky6 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky6;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky7 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky7;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky8 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky8;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky9 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky9;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky10 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky10;
        }
        cout << endl;

        // THIRD LOOP

        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << "\t" << crack[a];
        ky11 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky11;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky12 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky12;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky13 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky13;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky14 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky14;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky15 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky15;
        }
        cout << endl;

        // FOURTH LOOP

        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << "\t" << crack[a];
        ky16 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky16;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky17 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky17;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky18 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky18;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky19 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky19;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky20 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky20;
        }
        cout << endl;

        // FIFTH LOOP

        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << "\t" << crack[a];
        ky21 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky21;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky22 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky22;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky23 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky23;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky24 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky24;
        }
        a = rand() % 36;
        randomColor = rand() % 2;
        SetConsoleTextAttribute(h,colors[randomColor]);
        cout << crack[a];
        ky25 = crack[a];
        if(randomColor == 1)
        {
            keyCode += ky25;
        }
        Sleep(1000); // For srand(time(0)
    }

    SetConsoleTextAttribute(h,10);
    cout << "\n\nPlease Enter the Key Code: ";
    SetConsoleTextAttribute(h,15);
    cin >> code;
    if (code == keyCode)
    {
        SetConsoleTextAttribute(h,10);
        cout << "\nThe Key Code is correct. >> " << keyCode << endl;
    }
    else
    {
        SetConsoleTextAttribute(h,12);
        cout << "\n\nWrong Key Code.";
        cout << "\n\nKey Code:  ";
        SetConsoleTextAttribute(h,10);
        cout << keyCode << endl;
    }


    return 0;
}
