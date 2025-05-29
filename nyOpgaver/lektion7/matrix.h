#pragma once
#include <vector>
#include <string>
class Matrix {
  friend Matrix operator+(Matrix m1, Matrix m2);
  friend Matrix operator*(double scalar, Matrix m1);
  friend Matrix operator*(Matrix m1, Matrix m2);
  friend bool operator==(Matrix m1, Matrix m2);

  private:
  std::vector<double> data;

  public:
  std::string to_string();
  Matrix(double n1,double n2,double n3,double n4);
  Matrix();
};