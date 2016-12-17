#include "console_draw3.h"
#include "windows.h"
#include "font.h"
#include "image.h"
#include "kb_input2.h"
void printFont();
int main()
{
    int flag = 0;


    Font *large_Font = read_font("font.txt");
    Image *mc = read_image("mc.pixel", "mc.color");
    while(1)
    {
        clearScreen();

        putString(2, 2, "s104022222", 12, 15);

        flag++;
        if(flag % 2 == 0)
            show_image(mc, 30, 5);
        else
            show_image(mc, 40, 5);

        putStringLarge(large_Font, 10, 25, "Mcdonald", 6);

        drawCmdWindow();
        Sleep(300);
    }
//    drawCmdWindow();
//    Sleep(100000);
}

void printFont()
{
    Font *large_Font = read_font("font.txt");
    putStringLarge(large_Font, 10, 10, "Mcdonald's", 10);
//    putStringLarge(large_Font, 3, 3, "h", 10);
}
