#include <iostream>
#include <cmath>
class Shape {
public:
 static const double PI;
 virtual double calculate_area() const = 0;
 virtual void display_area() const = 0;
};
const double Shape::PI = 3.14159;
class TwoDimensional : public Shape {
public:
 virtual double calculate_perimeter() const = 0;
 virtual void display_perimeter() const = 0;
};
class ThreeDimensional : public Shape {
public:
 virtual double calculate_volume() const = 0;
 virtual void display_volume() const = 0;
};
class Triangle : public TwoDimensional {
private:
 double side1, side2, side3;
public:
 Triangle(double side1, double side2, double side3) : side1(side1),
side2(side2),side3(side3) {}
 virtual double calculate_area() const override {
 double s = (side1 + side2 + side3) / 2;
 return pow(s * (s - side1) * (s - side2) * (s - side3),0.5);
 }
 virtual void display_area() const override {
 std::cout << "»ï°¢Çü ³ÐÀÌ: " << calculate_area() << std::endl;
 }
 virtual double calculate_perimeter() const override {
 return side1+side2+side3;
 }
 virtual void display_perimeter() const override {
 std::cout << "»ï°¢Çü µÑ·¹: " << calculate_perimeter() << std::endl;
 }
};
class Rectangle : public TwoDimensional {
private:
 double base;
 double height;
public:
 Rectangle(double base, double height) : base(base), height(height) {}
 virtual double calculate_area() const override {
 return base * height;
 }
 virtual void display_area() const override {
 std::cout << "Á÷»ç°¢Çü ³ÐÀÌ: " << calculate_area() << std::endl;
 }
 virtual double calculate_perimeter() const override {
 return 2*(height+base);
 }
 virtual void display_perimeter() const override {
 std::cout << "Á÷»ç°¢Çü µÑ·¹: " << calculate_perimeter() << std::endl;
 }
};
class Circle : public TwoDimensional {
private:
 double radius;
public:
 Circle(double radius) : radius(radius){}
 virtual double calculate_area() const override {
 return radius*radius*PI;
 }
 virtual void display_area() const override {
 std::cout << "¿ø ³ÐÀÌ: " << calculate_area() << std::endl;
 }
 virtual double calculate_perimeter() const override {
 return 2 * radius*PI;
 }
 virtual void display_perimeter() const override {
 std::cout << "¿ø µÑ·¹: " << calculate_perimeter() << std::endl;
 }
};
class Cube : public ThreeDimensional {
private:
 double base,height,base2;
public:
 Cube(double base, double height, double base2) :
base(base),base2(base2),height(height) {}
 virtual double calculate_area() const override {
 return 2*(height*base2+base2*base+height*base);
 }
 virtual void display_area() const override {
 std::cout << "Á¤À°¸éÃ¼ ÃÑ¸éÀû: " << calculate_area() << std::endl;
 }
 virtual double calculate_volume() const override {
 return height * base2 * base;
 }
 virtual void display_volume() const override {
 std::cout << "Á¤À°¸éÃ¼ ºÎÇÇ: " << calculate_volume() << std::endl;
 }
};
class Sphere : public ThreeDimensional {
private:
 double radius;
public:
 Sphere(double radius) : radius(radius){}
 virtual double calculate_area() const override {
 return 4*PI*radius*radius;
 }
 virtual void display_area() const override {
 std::cout << "±¸ ÃÑ¸éÀû: " << calculate_area() << std::endl;
 }
 virtual double calculate_volume() const override {
 return 4/3*PI*pow(radius,3);
 }
 virtual void display_volume() const override {
 std::cout << "±¸ ºÎÇÇ: " << calculate_volume() << std::endl;
 }
};
int main() {
 Triangle triangle(5.0, 4.0,3.0);
 triangle.display_area();
 triangle.display_perimeter();
 Rectangle rec(5.0, 4.0);
 rec.display_area();
 rec.display_perimeter();
 Circle c(5.0);
 c.display_area();
 c.display_perimeter();
 Sphere sp(5.0);
 sp.display_area();
 sp.display_volume();
 Cube cub(5.0, 4.0,3.0);
 cub.display_area();
 cub.display_volume();
 return 0;
 /*
 »ï°¢Çü ³ÐÀÌ: 6
»ï°¢Çü µÑ·¹: 12
Á÷»ç°¢Çü ³ÐÀÌ: 20
Á÷»ç°¢Çü µÑ·¹: 18
¿ø ³ÐÀÌ: 78.5397
¿ø µÑ·¹: 31.4159
±¸ ÃÑ¸éÀû: 314.159
±¸ ºÎÇÇ: 392.699
Á¤À°¸éÃ¼ ÃÑ¸éÀû: 94
Á¤À°¸éÃ¼ ºÎÇÇ: 60
*/
}