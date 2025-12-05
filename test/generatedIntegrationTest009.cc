#include <gtest/gtest.h>
#include "fmt/format.h"
#include "fmt/printf.h"

class generatedIntegrationTest009 : public ::testing::Test {
 protected:
  void SetUp() override {}
};

TEST_F(generatedIntegrationTest009, IntegrationScenario) {
  auto s1 = fmt::format("int={}, float={:.2f}", 7, 3.14);
  auto s2 = fmt::sprintf("hex=%x, str=%s", 255, "fmt");

  fmt::format("{}", s1);
  fmt::format("{}", s2);
}

