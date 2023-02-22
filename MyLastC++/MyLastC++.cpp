#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <iostream>
#include <string>
#define NULL 0
#define NOMINMAX 
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

using namespace std;
DWORD WINAPI executeShell(LPVOID lpThreadParameter)
{
    system(reinterpret_cast<const char*>(lpThreadParameter));
    return 0;
}

int32_t main()
{
    system("color b0");
    setlocale(LC_ALL, "Russian");


    int a;
    cout << "Добро пожаловать в программу для назначения горячих клавиш\n"
        << "В связи с некоторыми событиями, функционал, пока что, достаточно отсталый\n";
    cout << "Введите 5. чтобы добавить хоткей\nCTRL+INS\n";
    cout << "Введите 7. чтобы добавить хоткей\nCTRL+TAB\n";
    cout << "Введите 10. чтобы добавить хоткей\nCTRL+SHIFT+F12\n";
    cin >> a;



    if (a == 5)
    {
        /*
        std::string a;
        cout << "Если хотите открывать какую то программу, тыкая на\n эту комбинацию клавиш, то вставьте\nпуть к экзешнику программы ниже,\n как показанно на примере с гуглом:"     "\"C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe\""    "\n";
        cin >> a;
        std::getline(std::cin, a);
        */

        //if (!a.empty())

        int a;
        cout << "Введите 1, если хотите открывать Google";
        cin >> a;
        if (a == 1)
        {


            if (!RegisterHotKey(NULL, 2, MOD_CONTROL | MOD_NOREPEAT, VK_INSERT))
            {
                printf_s("Failed to register hotkey!\n");
                return -1;
            }



            MSG msg;
            while (GetMessageA(&msg, NULL, 0, 0))
            {
                if (msg.message == WM_HOTKEY)
                {
                    const char cheOtkryt[] = "\"C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe\"";

                    //CloseHandle(CreateThread(NULL, 0, executeShell, reinterpret_cast<PVOID>(const_cast<char*>(a.c_str())), 0, NULL));
                    CloseHandle(CreateThread(NULL, 0, executeShell, reinterpret_cast<PVOID>(const_cast<char*>(cheOtkryt)), 0, NULL));
                }
            }
        }
    }


    if (a == 7)
    {

        int a;
        cout << "Введите 1, если хотите открывать Google";
        cin >> a;
        if (a == 1)
        {


            if (!RegisterHotKey(NULL, 2, MOD_CONTROL | MOD_NOREPEAT, VK_TAB))
            {
                printf_s("Failed to register hotkey!\n");
                return -1;
            }



            MSG msg;
            while (GetMessageA(&msg, NULL, 0, 0))
            {
                if (msg.message == WM_HOTKEY)
                {
                    const char cheOtkryt[] = "\"C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe\"";

                    //CloseHandle(CreateThread(NULL, 0, executeShell, reinterpret_cast<PVOID>(const_cast<char*>(a.c_str())), 0, NULL));
                    CloseHandle(CreateThread(NULL, 0, executeShell, reinterpret_cast<PVOID>(const_cast<char*>(cheOtkryt)), 0, NULL));
                }
            }
        }

    }

    if (a == 10) {

        int a;
        cout << "Введите 1, если хотите открывать Google";
        cin >> a;
        if (a == 1)
        {


            if (!RegisterHotKey(NULL, 2, MOD_CONTROL | MOD_SHIFT | MOD_NOREPEAT, VK_F12))
            {
                printf_s("Failed to register hotkey!\n");
                return -1;
            }



            MSG msg;
            while (GetMessageA(&msg, NULL, 0, 0))
            {
                if (msg.message == WM_HOTKEY)
                {
                    const char cheOtkryt[] = "\"C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe\"";

                    //CloseHandle(CreateThread(NULL, 0, executeShell, reinterpret_cast<PVOID>(const_cast<char*>(a.c_str())), 0, NULL));
                    CloseHandle(CreateThread(NULL, 0, executeShell, reinterpret_cast<PVOID>(const_cast<char*>(cheOtkryt)), 0, NULL));
                }
            }
        }

    }


    if (a == 99)
    {
    
                std::string b;
                cout << "Если хотите открывать какую то программу, тыкая на\n эту комбинацию клавиш, то вставьте\nпуть к экзешнику программы ниже,\n как показанно на примере с гуглом:"     "\"C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe\""    "\n";
                cin >> b;
                std::getline(std::cin, b);
                   

            


                if (!RegisterHotKey(NULL, 2, MOD_CONTROL | MOD_SHIFT | MOD_NOREPEAT, VK_F12))
                {
                    printf_s("Failed to register hotkey!\n");
                    return -1;
                }



                MSG msg;
                while (GetMessageA(&msg, NULL, 0, 0))
                {
                    if (msg.message == WM_HOTKEY)
                    {
                        const char cheOtkryt[] = "\"C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe\"";

                        CloseHandle(CreateThread(NULL, 0, executeShell, reinterpret_cast<PVOID>(const_cast<char*>(b.c_str())), 0, NULL));
                        //CloseHandle(CreateThread(NULL, 0, executeShell, reinterpret_cast<PVOID>(const_cast<char*>(cheOtkryt)), 0, NULL));
                    }
                }
            

        }

}