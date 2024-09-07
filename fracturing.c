
// Amelia Marty 5538282
// Assignment 1
// COP 3223

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int x1, x2, y1, y2;

  printf("Enter the x-coordinate of point 1: ");
  scanf("%d", &x1);

  printf("Enter the x-coordinate of point 2: ");
  scanf("%d", &x2);

  printf("Enter the y-coordinate of point 1: ");
  scanf("%d", &y1);

  printf("Enter the y-coordinate of point 2: ");
  scanf("%d", &y2);

  printf("\n");

  printf("The distance between the points: %.2lf\n", calculateDistance(x1, x2));
  printf("Perimeter of the city: %.2lf\n", calculatePerimeter(x1, x2, y1, y2));
  printf("Area of the city: %.2lf\n", calculateArea(x1, x2, y1, y2));
  printf("Width of the city: %.2lf\n", calculateWidth(x1, x2));
  printf("Height of the city: %.2lf\n", calculateHeight(y1, y2));

  return 0;
}


double calculateDistance() {
  return abs(x2 - x1); // Use abs for absolute distance
}

double calculatePerimeter() {
  return 2 * calculateDistance(x1, x2) + 2 * calculateDistance(y1, y2);
}

double calculateArea() {
  return calculateDistance(x1, x2) * calculateDistance(y1, y2);
}

double calculateWidth() { return calculateDistance(x1, x2); }

double calculateHeight() { return calculateDistance(y1, y2); }
