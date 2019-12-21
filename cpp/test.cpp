#include <iostream>
#include <cstdlib>

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area (void);
} rect;

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int Rectangle::area () {
  return width * height;
}

int main () {
  rect.set_values(3,4);
  std::cout << rect.area() << std::endl;

  return 0;
}