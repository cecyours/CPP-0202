#include "triangle.h"
#include <iostream>

using namespace std;

// Initialisiert ein 16x16-Array für das Dreiecksmuster (Alle Werte 0, erstes Feld mit Wert 1)
void initTriangle(int field[][16])
{
    for (int row = 0; row < 16; row++)
    {
        for (int col = 0; col < 16; col++)
        {
            field[row][col] = 0;
        }
    }

    field[0][0] = 1;
}

// Gibt die int-Werte einer Zeile als Zahlen aus.
void printNumbers(const int *line, int len)
{
    
    for (int i = 0; i < len; i++)
    {
        cout << line[i];
        cout << " ";
    }

    cout << endl;
}

// Gibt die int-Werte einer Zeile als Sternchen/Leerzeichen aus.
void printAsterisks(const int *line, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (line[i] % 2 != 0)
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
        cout << " ";
    }

    cout << endl;
}

// Berechnet die Zeile 'lineIndex' basierend auf der vorherigen Zeile
void fillTriangleLine(int field[][16], int lineIndex)
{
    field[lineIndex][0] = 1;

    for (int col = 1; col < 16; col++)
    {
        field[lineIndex][col] = field[lineIndex - 1][col] + field[lineIndex - 1][col - 1];
    }
    // Add code here
}

// Initialisiert das 16x16-Array mit initTriangle16 und berechnet
void fillTriangle(int field[][16])
{
    initTriangle(field);

    for (int row = 1; row < 16; row++)
    {
        fillTriangleLine(field, row);
    }
}
