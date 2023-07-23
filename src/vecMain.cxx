// main function to tie program together
/*	- create vectors
	- run dot product
	- run cross product
	- test dot product
	- test cross product

*/


#include <iostream>
#include <stdlib.h>
#include <eigen3/Eigen/Dense>
#include "vecDot.h"
#include "vecMulTest.h"
#include "vecCross.h"
#include "vecCrossTest.h"

//using namespace Eigen;

using namespace std; // normal namespace

using Eigen::MatrixXf; // import type from Eigen
using Eigen::VectorXf; // import type from Eigen

int main(int argc, const char* argv[]) {
	cout << "Legacy Code to show matrix ops:" << endl;
	MatrixXf m = MatrixXf::Random(3,3);
	m = (m * 10);
	cout << "m: " << endl << m << endl;
	VectorXf v(3);
	v << 1, 2, 3 ;
	cout << "m*v: " << endl << m*v << endl;

	// create x and y vectors for dot product
	VectorXf x(3);
	x << m(0),m(1),m(2);
	VectorXf y(3); 
	y = v;

	cout << "Program to show dot and cross with tests: " << endl << endl;

	// Dot
	cout << "x: " << endl << x << endl; // show x
	cout << "y: " << endl << y << endl; // show y
	cout << "Dot product of x and y: " << endl;
	cout << dot_product(x,y,3) << endl;

	// Cross 
	Eigen::Vector3d p(1,2,3); // works with .cross
	Eigen::Vector3d q(1,0,0); // 
	/* Eigen::VectorXf p(3);  // works with cross_product
	Eigen::VectorXf q(3);
	p << 1,2,3;
	q << 1,0,0;
	*/ // alternate type scheme - saving code
	cout << "p vector:" << endl << p << endl; // show p
	cout << "q vector:" << endl << q << endl; // show q
	cout << "p cross q with manual function:" << endl;
	cout << cross_product(p,q) << endl; // 
	cout << "p cross q with Eigen namespace function:" << p.cross(q) << endl;

	// Test the methods
	if (test_dot(x, y, 3)) {
		printf("Dot Test passed\n");
		//return 0; do not need to return yet...
	}
	else {
		printf("Dot Test failed\n");
		return 1;
	}


	if (test_cross(p, q)) {
                printf("Cross test passed\n");
                return 0;
        }
        else {
                printf("Cross test failed\n");
                return 1;
        }
	
}
