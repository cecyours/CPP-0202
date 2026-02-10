#ifndef BOXES_H
#define BOXES_H

bool readBox(int box[]);

double calculateLiter(const int box[]);


bool fitsInto(int outerBox[], int innerBox[]);
#endif