/***************************************
AUTHOR: Harmanpreet Cheema
FILE: hcheema.cpp
DATE: September 30, 2021 
****************************************/

#include "fonts.h"

void show_hcheema_credits(int x, int y) {
    Rect r;
    r.bot = y;
    r.left = x;
    r.center = 1;
    ggprint8b(&r, 16, 0x00ff0000, "Harman did a bit of programming");

}