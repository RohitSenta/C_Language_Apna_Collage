// Write a function to calculate area of a circle, a square and a rectangle

#include<stdio.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float length, float width);

int main(){
    float side = 4;
    float radius = 5;
    float height = 3;
    float width = 6;

    printf("Area of Square is : %.2f\n", squareArea(side));
    printf("Area of Circle is : %.2f\n", circleArea(radius));
    printf("Area of Ractangle is : %.2f\n", rectangleArea(height, width));

    return 0;
}

float squareArea(float side){
    return side * side;
}
float circleArea(float radius){
    return 3.14 * radius * radius;
}
float rectangleArea(float length, float width){
    return length * width;
}