#include <iostream>
#include <stdlib.h>

#include <eigen3/Eigen/Dense>
// Or possibly just
// #include <Eigen/Dense>

#include "vecDot.h"
#include "vecMulTest.h"
#include "vecCross.h"
#include "vecCrossTest.h"

//using namespace Eigen;

using namespace std;

using Eigen::MatrixXf;
using Eigen::VectorXf;

int main(int argc, const char* argv[]) {
	MatrixXf m = MatrixXf::Random(3,3);
	m = (m * 10);
	cout << "m: " << endl << m << endl;
	VectorXf v(3);
	v << 1, 2, 3 ;
	cout << "m*v: " << endl << m*v << endl;

	cout << "m first col:" << endl << m(0) << endl;
	cout << m(1) << endl;
	cout << m(2) << endl;

	VectorXf x(3);
	x << m(0),m(1),m(2);
	VectorXf y(3); 
	y = v;

	cout << "x: " << endl << x << endl;
	cout << "y: " << endl << y << endl;
	Eigen::Vector3d p(1,2,3); // works with .cross
	Eigen::Vector3d q(1,0,0);
	/* Eigen::VectorXf p(3);  // works with cross_product
	Eigen::VectorXf q(3);
	p << 1,2,3;
	q << 1,0,0;
	*/
	cout << "p cross q with function:" << endl;
	cout << cross_product(p,q) << endl;
	cout << "test against eigen:" << p.cross(q) << endl;

	//	TODO-- Connect!

	// Test the methods
	if (test_dot(x, y, 3)) {
		printf("Dot Test passed\n");
		//return 0;
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
