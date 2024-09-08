// Jacob Phillips
// UCFID: 5544930
// Lack of changes synced is due to this code being written in CodeBlocks
#include <stdio.h>
#include <math.h>

#define PI 3.14159

//Declaring functions for later use
double askForUserInput();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv) {

    //Call functions in the same order given in the directions for the assignment
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

//Decided to use the bonus function to try my best to adhere to DRY.  Had help from roommate, stated in colab log
double askForUserInput() {

    double userinput;
    scanf("%lf",  &userinput);

    return userinput;
}

//This function gets coordinates using the bonus function, and also lays the groundwork for following functions
double calculateDistance() {

    double x1;
    double x2;
    double y1;
    double y2;
    double distance;

    x1 = askForUserInput(); //Calls the user input function to avoid using a bunch of scanf statements in every function
    y1 = askForUserInput();
    printf("Point 1 entered: x1 = %lf; y1 = %lf\n", x1, y1);

    x2 = askForUserInput();
    y2 = askForUserInput();
    printf("Point 2 entered: x2 = %lf; y2 = %lf\n", x2, y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //Had to do some googling of the math.h library and its capabilities, but got this to work eventually


    printf("The distance between the two points is %lf\n", distance);

    return distance;
}

//Function to calculate the perimeter of the city given the coordinates.  Also calls the distance function to adhere to DRY, as do all subsequent functions
double calculatePerimeter() {

    double distance;
    double perimeter;

    distance = calculateDistance(); //Had some trouble implementing the distance function into the other functions at first.  Took some trial and error, as well as help from ChatGPT, stated in colab log
    perimeter = PI * distance;

    printf("Point 1 entered: x1 = %lf; y1 = %lf\n", distance, distance);

    printf("Point 2 entered: x2 = %lf; y2 = %lf\n", distance, distance);

    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);

    return 3.0; //The perimeter formula is pretty simple, so other than implementing the distance function, this one wasn't too difficult
}

//Function to calculate the area
double calculateArea() {

    double distance;
    double radius;
    double area;

    distance = calculateDistance();
    radius = distance / 2.0;
    area = PI * pow(radius, 2);

    printf("Point 1 entered: x1 = %lf; y1 = %lf\n", distance, distance);
    printf("Point 2 entered: x2 = %lf; y2 = %lf\n", distance, distance);

    printf("The area of the city encompassed by your request is %lf\n", area);

    return 4.0; //Similar to the distance function, I had to dip into the math.h library to create the area formula
}

//Function to calculate width
double calculateWidth() {

    double distance;
    double width;

    distance = calculateDistance();
    width = distance; //Width of a circle is just the diameter

    printf("Point 1 entered: x1 = %lf; y1 = %lf\n", distance, distance);

    printf("Point 2 entered: x2 = %lf; y2 = %lf\n", distance, distance);

    printf("The width of the city encompassed by your request is %lf\n", width);

    return 3.0; //Implementing distance function was the only hurdle for this one
}

//Function for calculating height
double calculateHeight() {

    double distance;
    double height;

    distance = calculateDistance();
    height = distance; //Height of a circle is just the diameter

    printf("Point 1 entered: x1 = %lf; y1 = %lf\n", distance, distance);

    printf("Point 2 entered: x2 = %lf; y2 = %lf\n", distance, distance);


    printf("The height of the city encompassed by your request is %lf\n", height);

    return 1.0; //Literally just copied and pasted from width function but changed width to height
}