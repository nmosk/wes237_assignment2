#include <cmath>

#include "vecCrossTest.h"
#include "vecCross.h"
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Core>

bool test_cross(Eigen::Vector3d vec1, Eigen::Vector3d vec2) {
        Eigen::Vector3d eigen_result = vec1.cross(vec2);
        Eigen::Vector3d our_result = cross_product(vec1, vec2);
	//Eigen::Vector3d eigen_result(3);
	//eigen_result << 0,3,-2;
        // Only check precision to four decimal places
        // -> Try me! What happens if we don't round? Why?
        //eigen_result = floor(eigen_result * pow(10,4) + .5) / pow(10,4);
        //our_result = floor(our_result * pow(10,4) + .5) / pow(10,4);

        return eigen_result == our_result;
}
