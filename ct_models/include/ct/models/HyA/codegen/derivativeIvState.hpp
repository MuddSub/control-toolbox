/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

/*! \file
 *	\brief		Auto-generated code for computing the derivative of qdd with respect to state and input
 *  \author	    Michael Neunert
 *
 *  @example 	timingFullvsSeparateJacobian.cpp
 *  This is an example of how to use the generated code.
 *
 *  @example 	timingFullJacobian.cpp
 *  This is an example of how to use the generated code.
 */

#pragma once

#include <ct/core/core.h>

namespace ct_HyA {

Eigen::Matrix<double, 12, 6> computeDIvdqCodegen(const Eigen::Matrix<double, 12, 1>& state);
}
