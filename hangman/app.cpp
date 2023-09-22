#include <iostream>

using namespace std;
void PrintMessage(string message, bool printTop = true, bool printBottom = true)
{
    if (printTop)
    {
        cout << "+--------------------------------------------------+" << endl;
        cout << "|";
    }
    else
    {
        cout << "|";
    }
    bool front = true;
    for (int i = message.length(); i < 50; i++)
    {
        if (front)
        {
            message = " " + message;
        }
        else
        {
            message = message + " ";
        }
        front = !front;
    }
    cout << message.c_str();
    if (printBottom)
    {
        cout << "|" << endl;
        cout << "+--------------------------------------------------+" << endl;
    }
    else
    {
        cout << "|" << endl;
    }
}
void DrawHangman(int guessCout = 0)
{
    if (guessCout >= 1)
        PrintMessage("|", false, false);
    else
        PrintMessage("", false, false);

    if (guessCout >= 2)
        PrintMessage("|", false, false);
    else
        PrintMessage("", false, false);

    if (guessCout >= 3)
        PrintMessage("0", false, false);
    else
        PrintMessage("", false, false);

    if (guessCout == 4)
        PrintMessage("/", false, false);

    if (guessCout == 5)
        PrintMessage("/|", false, false);

    if (guessCout >= 6)
        PrintMessage("/|\\", false, false);
    else
        PrintMessage("", false, false);

    if (guessCout >= 7)
        PrintMessage("|", false, false);
    else
        PrintMessage("", false, false);

    if (guessCout == 8)
        PrintMessage("/", false, false);

    if (guessCout >= 9)
        PrintMessage("/ \\", false, false);
    else
        PrintMessage("", false, false);
}
void PrintLetters(string input, char from, char to)
{

    string s;
    for (char i = from; i <= to; i++)
    {

        if (input.find(i) == string::npos)
        {
            s += i;
            s += i + " ";
        }
        else
            s += " ";
    }
    PrintMessage(s, false, false);
}
int main()
{

    string guesses;

    PrintMessage("Hangman");
    DrawHangman(9);
    PrintLetters("ALEXA", 'A', 'M');
    PrintLetters("ALEXA", 'N', 'Z');
    getchar();
    return 0;
}
