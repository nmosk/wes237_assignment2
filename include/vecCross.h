// Include guard, one should be in all headers
// Purpose: Declare cross_product function which will manually perform cross
#ifndef VEC_CROSS_H
#define VEC_CROSS_H

// Include the Eigen pacakge that provides vec classes
#include <eigen3/Eigen/Core>

// Calculate the cross product product between two arbitrary vectors
//  @param     xin First vector
//  @param     yin Second vector
//  No param for length - Length of the vectors 3 only !!!
//  @return        cross product product of the vectors
Eigen::Vector3d cross_product(Eigen::Vector3d xin, Eigen::Vector3d yin);

#endif // VEC_CROSS_H
