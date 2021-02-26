#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;
int main()
{
    std::cout << "Hello World!\n";
    while (1)

    {
        POINT cursorPos;
        GetCursorPos(&cursorPos);
        float x = 0;
        x = cursorPos.x;
        float y = 0;
        y = cursorPos.y;
        if ((GetKeyState(VK_LBUTTON) & 0x8000) != 0)
        {
            std::cout << x << ',' << y;
            Sleep(100);
            
            fstream plik;
            plik.open("zap.txt",ios::out);
            plik<< x << ',' << y;
            
            plik.close();
            return 0;
        }
    }

}
