#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
#include <stdexcept>
#include <iostream>

class Matrix {
private:
    std::vector<std::vector<double>> data;
    int rows, cols;

public:
    Matrix(int r, int c);
    void set(int r, int c, double value);
    double get(int r, int c) const;
    Matrix add(const Matrix& other) const;
    Matrix multiply(const Matrix& other) const;
    void print() const;
};
#endif
