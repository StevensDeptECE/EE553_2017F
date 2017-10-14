//
// Created by dkruger on 10/13/2017.
//
#include <vector>
#include <iostream>
void fill2(int m[10][10], int r, int c, int newColor, int startColor) {
    if (m[r][c] != startColor)
        return;
    m[r][c] = newColor;
    if (r > 0)
        fill2(m, r-1, c, newColor, startColor);
    if (r < 10-1)
        fill2(m, r+1, c, newColor, startColor);
    if (c > 0)
        fill2(m, r, c-1, newColor, startColor);
    if (c < 10-1)
        fill2(m, r, c+1, newColor, startColor);
}

void fill(int m[10][10], int r, int c, int val) {
    int startColor = m[r][c];
    fill2(m, r, c, val, startColor);
}

void fill3(int m[10*10], int r, int c, int newVal) {
  vector<int> todo;
    int here = r * 10 + c;
    int startColor = m[here];
    todo.push_back(here);
    while (todo.size() > 0) {
        int pixPos = todo.back();
        todo.pop_back();
        if (m[pixPos] == startColor) {
            m[pixPos] = newVal;
            if (posPos % 10 < 9 && m[pixPos+1] == startColor)

        }
    }



}

int main() {
    int m[10][10] = {0}; // row major order m[0][0]  -> m[0][1] -> m[0][2] ...
    m[0][0] = 5;
    m[8][3]= 2;
    fill(m, 5, 5, 1);

    fill3(m, 5, 5, 1);





}

