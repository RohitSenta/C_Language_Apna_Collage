#include<stdio.h>

float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float a, float b);

int main (){
float side = 5;
float rad = 3;
float a = 5;
float b = 10;

printf("area of square is : %f\n", squarearea(side));

printf("area of circle is : %f\n", circlearea(rad));

printf("area of rectangle is : %f\n", rectanglearea(a, b));

return 0;
}

float squarearea(float side){
    return side * side;
}

float circlearea(float rad){
    return 3.14 * rad * rad; 
}

float rectanglearea(float a, float b){
    return a * b;
}
