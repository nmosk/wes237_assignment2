#ifndef VEC_CROSS_TEST_H
#define VEC_CROSS_TEST_H
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>

/**
 * Test our custom dot product function against Eigen's built in function
 * @param xin First vector
 * @param yin Second vector
 * NO @param length Length of the vector is 3
 * @return True/False if both methods do/do not produce equal outputs
 **/
bool test_cross(Eigen::Vector3d vec1, Eigen::Vector3d vec2);

#endif
