#include <boost/logic/tribool.hpp>
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Example test") {
  boost::tribool t = true;
  REQUIRE(static_cast<bool>(t));
}
