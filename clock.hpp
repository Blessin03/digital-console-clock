#pragma once
#include <windows.h>

class Clock {
public:
    Clock(int h, int m, int s);
    void run();

private:
    void tick();
    void display();
    void setColor(WORD color);

    int hour, minute, seconds;
    WORD defaultAttr;
};
