#include "Clock.hpp"
#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>

using namespace std;

Clock::Clock(int h, int m, int s)
  : hour(h), minute(m), seconds(s)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    defaultAttr = csbi.wAttributes;
}

void Clock::setColor(WORD color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void Clock::display() {
               // Set the color to blue
                cout << setfill('0') << setw(2) << hour << ":";
                cout << setw(2) << minute << ":";

                setColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
                cout << setw(2) << seconds << endl;
                setColor(defaultAttr); 
                cout << "\n\nPress Ctrl+C to exit." << endl;
}

void Clock::tick() {
    if (seconds++ >= 59) {
        seconds = 0;
        if (minute++ >= 59) {
            minute = 0;
            if (hour++ >= 23) hour = 0;
        }
    }
}


void Clock::run() {
    while (true) {
        system("cls");
        display();
        this_thread::sleep_for(chrono::seconds(1));
        tick();
    }
}





