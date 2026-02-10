#ifndef TRIANGLE_H
#define TRIANGLE_H

// Initialisiert ein 16x16-Array für das Dreiecksmuster (Alle Werte 0, erstes Feld mit Wert 1)
void initTriangle(int field[][16]);

// Gibt die int-Werte einer Zeile als Zahlen aus.
void printNumbers(const int* line, int len);

// Gibt die int-Werte einer Zeile als Sternchen/Leerzeichen aus.
void printAsterisks(const int* line, int len);

// Berechnet die Zeile 'lineIndex' basierend auf der vorherigen Zeile 
void fillTriangleLine(int field[][16], int lineIndex);

// Initialisiert das 16x16-Array mit initTriangle16 und berechnet 
void fillTriangle(int field[][16]);

#endif // TRIANGLE_H
