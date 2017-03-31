/** @file test.cpp
 *  @brief Arbitrary tests to verify that class subfunctions behave correctly.
 *
 *  
 *
 *  @author Yi-ting Lei
 *  @copyright University of Maryland (ENPM808X)
 * 
 */

#include <gtest/gtest.h>
#include <lqrControl.hpp>

TEST(lqrMethod, should_pass)
{
	lqrControl LQR;
	LQR.convertStateSpace();
    	EXPECT_EQ(40, LQR.lqr(40,500));
}


