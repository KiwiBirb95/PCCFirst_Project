#include <iostream>
#include <ctime>

using namespace std;

void intro();

int main()
{

    char apps;
    intro();

    apps = false;
    do
    {
        cout << "Main Menu" << endl;
        cout << "1. The Fahrenheit to Celsius Converter" << endl;
        cout << "2. The Celsius to Fahrenheit Converter" << endl;
        cout << "3. Password Generator" << endl;
        cout << "4. Exit" << endl;
        cout << "Please Enter The Corresponding Number to Proceed: " << endl;
        cin >> apps;

        switch (apps)
        {
        case '1':
        {
            int cel;
            int far;

            cout << "Please Enter The Degree Fahrenheit You Wish to Convert: " << endl;
            cin >> cel;
            if (cel < 0)
            {
                cout << "That is an Invalid Number" << endl;
                exit(3);
            }
            else
            {
                far = (cel * 1.8) + 32;
                cout << cel << " Degrees Celsius is " << far << " Degrees Fahrenheit" << endl;
            }
            break;
        }

        case '2':
        {
            int cel;
            int far;
            cout << "Please Enter The Degree Celsius You Wish to Convert: " << endl;
            cin >> far;
            if (far < 0)
            {
                cout << "That is an Invalid Number" << endl;
                exit(3);
            }
            else
            {
                cel = (far - 32) * 5 / 9;
                cout << far << " Degrees Fahrenheit is " << cel << " Degrees Celsius" << endl;
            }
            break;
        }

        case '3':
        {
            char secret[] = "@#%!abcdefghijklmnopqrstuvwxyz0123456789";
            char pass[15];
            srand(time(nullptr));

            for (int y = 0; y < 14; y++)
            {
                pass[y] = secret[rand() % 37];
            }
            cout << "Password Generated is: " << endl;

            for (int x = 0; x < 14; x++)
            {
                cout << pass[x];
            }
            break;
        }

        case '4':
        {
            cout << "Thanks For Using This App" << endl;
            exit(3);
        }

        default:
        {
            cout << "\a";
        }
        }
        cin.ignore();
        cin.get();

        apps = false;
    } while (apps);
    return 0;
}

void intro()
{
    cout << "Welcome to the Conversion App" << endl;
    cout << "To Continue Please Choose an Option from below" << endl;
}
