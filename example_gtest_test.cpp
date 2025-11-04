#include <boost/logic/tribool.hpp>
#include <gtest/gtest.h>

TEST(ExampleTest, TriboolCast) {
  boost::tribool t = true;
  EXPECT_EQ(static_cast<bool>(t), true);
}
