#include <iostream>

int main(){
	
	const float PI = 22.0f/7.0f;
	
	std::cout << "Area and Volume Problems: " << std::endl;
	
	std::cout << "Enter Radius of Sphere: ";
	float sphere_radius {0.0};
	std::cin >> sphere_radius;
	
	float sphere_volume = (4.0f/3) * PI * (sphere_radius * sphere_radius * sphere_radius);
	float sphere_surface_area = 4 * PI * sphere_radius * sphere_radius;
	
	std::cout << "Volume of the sphere with given radius is " << sphere_volume << std::endl;
	std::cout << "Surface Area of the sphere with given radius is " << sphere_surface_area << std::endl;

	std::cout << "Enter side length of Cube: ";
	float cube_side_length {0.0f};
	std::cin >> cube_side_length;
	
	float cube_volume = cube_side_length * cube_side_length * cube_side_length;
	float cube_surface_area = 6 * cube_side_length * cube_side_length;
	
	std::cout << "Volume of the cube with given side length is " << cube_volume << std::endl;
	std::cout << "Surface Area of the cube with given side length is " << cube_surface_area << std::endl;
	
	std::cout << "Enter Radius of Cylinder: ";
	float cylinder_radius {0.0f};
	std::cin >> cylinder_radius;
	
	std::cout << "Enter Height of Cylinder: ";
	float cylinder_height {0.0f};
	std::cin >> cylinder_height;
	
	float cylinder_volume = PI * cylinder_radius * cylinder_radius * cylinder_height;
	float cylinder_surface_area = 2 * PI * cylinder_radius * cylinder_height;
	
	std::cout << "Volume of the cylinder with given radius and height is " << cylinder_volume << std::endl;
	std::cout << "Surface Area of the cylinder with given radius and height is " << cylinder_surface_area << std::endl;
	
	std::cout << "Enter Length of Rectangle: ";
	float rect_length {0.0f};
	std::cin >> rect_length;
	
	std::cout << "Enter Width of Rectangle: ";
	float rect_width {0.0f};
	std::cin >> rect_width;
	
	float rect_perimeter = 2 * (rect_width + rect_length);
	float rect_area = rect_length * rect_width;
	
	std::cout << "Perimeter of the rectangle with given length and width is " << rect_perimeter << std::endl;
	std::cout << "Area of the rectangle with given length and width is " << rect_area << std::endl;
}
