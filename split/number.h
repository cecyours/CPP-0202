#ifndef NUMBERS_H
#define NUMBERS_H
// Task 3.1: Prints all values from start to end, 2 decimal places, spaceseparated
void printArray(double *start, double *end);
// Task 3.2: Partitions array around threshold using loops (iterative)
// Returns pointer to first element >= threshold, or nullptr if none exists
double *sortAndSplit(double *start, double *end, double threshold);
// Task 3.3: Same as sortAndSplit but implemented recursively (no loops)
double *sortAndSplitRecursive(double *start, double *end, double threshold);
#endif // NUMBERS_H
