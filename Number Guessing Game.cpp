//number guessing game

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	// Color of the console 
    HANDLE console_color; 
    console_color = GetStdHandle(STD_OUTPUT_HANDLE); 
        // P is color code of the 
        // corresponding color 
    SetConsoleTextAttribute(console_color, 3);
	cout<<"\n\tNUMBER GUESSING GAME\n\n";
	
	return 0;
}