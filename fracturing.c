// Amelia Marty 
// UCF ID: 5538282
// Assignment 1
// COP 3223

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

// declare the functions
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double askForUserInput(); // this function is located at the end of this program
double calculateWidth();
double calculateHeight();

// main function carries the arguments outlined in rubric- it is declare the functions in this case
int main (int argc, char**argv)
{
  calculateDistance();
  calculatePerimeter();
  calculateArea();
  calculateWidth();
  calculateHeight();
  return 0;
}

// function to calculate the distance between two points
double calculateDistance()
{
// declare the variables
  double x1, x2, y1, y2;
 
// ask the user for the coordinates they desire
  printf("Enter x-coordinate #1: ");
  scanf("%lf", &x1);
 
  printf("Enter y-coordinate #1: ");
  scanf("%lf", &y1);
  
  printf("Enter x-coordinate #2: ");
  scanf("%lf", &x2);
  
  printf("Enter y-coordinate #2: ");
  scanf("%lf", &y2);
  
// print their coordinate requests
  printf("\nPoint #1 entered: x1 = %.1lf; y1 = %.1lf\n", x1, y1);
  printf("Point #2 entered: x2 = %.1lf; y2 = %.1lf\n\n", x2, y2);

// calculate the distance between the two points
  double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); 
 
  printf("The distance between the two points is: %.3lf\n\n", distance);
  return distance; 
}


// function to calculate the perimeter of the city
double calculatePerimeter()
{
// declare the variables
  double diameter, perimeter, difficulty;

// call and initialize the helper function  
  diameter = askForUserInput();

// equation for the perimeter of the circle
  perimeter = PI * diameter;
 
  printf("The perimeter of the city encompassed by your request is: %.3lf\n\n", perimeter);

// returning the double with how difficult this function was 
  difficulty = 5;
  return difficulty;  
}


// function to calculate the total area of the city 
double calculateArea()
{
// declare the variables
  double  area, diameter, radius, difficulty;

// call and initialize the helper function  
  diameter = askForUserInput();

// calculate the radius of the circle using the diameter solved for within the helper function  
  radius = diameter / 2;

// equation for the area of a circle  
  area = 0.5 * PI * pow(radius, 2);
 
  printf("The area of the city encompassed by your request is: %.3lf\n\n", area);

// returning the double with how difficult this function was 
  difficulty = 5;
  return difficulty;
}


// function to calculate the width of the city 
double calculateWidth()
{
// declare the variables
  double width, difficulty;
  
// call and initialize the helper function  
  width = askForUserInput();
  
  printf("The width of the city encompassed by your request is: %.3lf\n\n", width);

// returning the double with how difficult this function was  
  difficulty = 5;
  return difficulty;
}


// function to calculate the height of the city
double calculateHeight()
{
// declare the variables
  double height, difficulty; 

// call and initialize the helper function  
  height = askForUserInput();
  
  printf("The height of the city encompassed by your request is: %.3lf\n\n", height);

// returning the double with how difficult this function was 
  difficulty = 5;
  return difficulty;
}


// this helper function is used to calculate the diameter of the circle which will be called within the other functions, and it asks the user for coordinate values
double askForUserInput()
{
// declare the variables
  double x1, x2, y1, y2, dist;

// ask for the user to input the coordinates they desire
  printf("Enter x-coordinate #1: ");
  scanf("%lf", &x1);

  printf("Enter y-coordinate #1: ");
  scanf("%lf", &y1);

  printf("Enter x-coordinate #2: ");
  scanf("%lf", &x2);

  printf("Enter y-coordinate #2: ");
  scanf("%lf", &y2);

// print their coordinate requests, I know this function shouldn't output anything, but it allows for implication of the DRY method.
  printf("\nPoint #1 entered: x1 = %.1lf; y1 = %.1lf\n", x1, y1);
  printf("Point #2 entered: x2 = %.1lf; y2 = %.1lf\n\n", x2, y2);

// calculate the diameter
  dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
  return dist;
}


