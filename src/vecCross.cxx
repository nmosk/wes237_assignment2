#include "vecCross.h"

Eigen::Vector3d cross_product(Eigen::Vector3d vec1, Eigen::Vector3d vec2) {
        // Note: This function does not use Eigen; it simply uses the Eigen
        // vector type to keep this example simple. A STL vector would work the
        // same for the implementation approach.

        Eigen::Vector3d res(3);
        
        res(0) = vec1[1]*vec2[2] - vec1[2]*vec2[1];
        res(1) = vec1[2]*vec2[0] - vec1[0]*vec2[2];
        res(2) = vec1[0]*vec2[1] - vec1[1]*vec2[0];

        return res;
}
