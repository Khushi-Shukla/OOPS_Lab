// Casting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Point2d.h"
#include "Triangle.h"
#include"Circle.h"
#include <vector>


int main()
{
     Rectangle rect_(0, Point2d(3.0, -4.0), 1.0, 2.0);

    //upcasting
     Shape* p_shape = &rect_;
     std::cout << p_shape->get_uid() << " ";
    std::cout << rect_.get_area() << "\n";
    std::cout << p_shape->get_area() << "\n";//Q5.  Make this line error-free?
   

    
    Rectangle rect(0, Point2d(3.0, -4.0), 1.0, 2.0);
   
    Triangle tri(1, Point2d(0.0, 0.0), Point2d(0.0, 1.0), Point2d(1.0, 0.0));

    Circle cir(2, Point2d(0.0, 0.0), 1.20);
    
    Shape *tri_shape = &tri;
    Shape *cir_shape = &cir;

    //Q6. Define an array to hold all the shape object defines above? You can use vector for STL in C++.
    std::vector <Shape*> shape; // Q6 is done for you. shape is an array that holds object
    //Q7. Insert all the objects in the array define above?
    


    shape.push_back(p_shape);
    shape.push_back(tri_shape);
    shape.push_back(cir_shape);

   for (size_t i = 0; i < shape.size(); i++)
   {
       std::cout << "\nID: " << shape[i]->get_uid() << ' ';  
       std::cout << "Area: " << shape[i]->get_area() << '\n';   
   }

   /*  Output must be
     ID: 0 Area : 2
     ID : 1 Area : 0.5
     ID : 2 Area : 7.704
    Press any key to continue . . .
    */

   system("pause");
   return 0;
}