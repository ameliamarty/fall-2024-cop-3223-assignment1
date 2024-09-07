
// Amelia Marty 5538282
// Assignment 1
// COP 3223

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// function declarations
int main(int argc, char **argv);
double calculateDistance(int x1, int x2);
double calculatePerimeter(int x1, int x2, int y1, int y2);
double calculateArea(int x1, int x2, int y1, int y2);
double calculateWidth(int x1, int x2);
double calculateHeight(int y1, int y2);

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

  printf("Distance between the two points is: %.2lf\n", calculateDistance(x1, x2));
  printf("Perimeter of the city encompassed by your request is: %.2lf\n", calculatePerimeter(x1, x2, y1, y2));
  printf("Area of the city encompassed by your request is: %.2lf\n", calculateArea(x1, x2, y1, y2));
  printf("Width of the city encompassed by your request is: %.2lf\n", calculateWidth(x1, x2));
  printf("Height of the city encompassed by your request is: %.2lf\n", calculateHeight(y1, y2));

  return 0;
}

// Function definitions
double calculateDistance(int x1, int x2) {
  return abs(x2 - x1); // Use abs for absolute distance
}

double calculatePerimeter(int x1, int x2, int y1, int y2) {
  return 2 * calculateDistance(x1, x2) + 2 * calculateDistance(y1, y2);
}

double calculateArea(int x1, int x2, int y1, int y2) {
  return calculateDistance(x1, x2) * calculateDistance(y1, y2);
}

double calculateWidth(int x1, int x2) { return calculateDistance(x1, x2); }

double calculateHeight(int y1, int y2) { return calculateDistance(y1, y2); }