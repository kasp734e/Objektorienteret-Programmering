#include "matrix.h"
#include <iostream>

int main() {
  Matrix m1(1, 2, 3, 4);
  Matrix m2(5, 6, 7, 8);

  // Print matrices
  std::cout << "Matrix m1:\n" << m1.to_string() << "\n\n";
  std::cout << "Matrix m2:\n" << m2.to_string() << "\n\n";

  // Test addition
  Matrix sum = m1 + m2;
  std::cout << "m1 + m2:\n" << sum.to_string() << "\n\n";

  // Test scalar multiplication
  Matrix scaled = 2.0 * m1;
  std::cout << "2.0 * m1:\n" << scaled.to_string() << "\n\n";

  // Test matrix multiplication
  Matrix product = m1 * m2;
  std::cout << "m1 * m2:\n" << product.to_string() << "\n\n";

  // Test equality
  std::cout << "m1 == m2: " << (m1 == m2 ? "true" : "false") << "\n";
  std::cout << "m1 == m1: " << (m1 == m1 ? "true" : "false") << "\n";
}