#include <gtest/gtest.h>
#include "fmt/format.h"

struct TestPoint {
  int x;
  int y;
};

template <> struct fmt::formatter<TestPoint> : fmt::formatter<int> {
  template <typename FormatContext>
  auto format(const TestPoint& p, FormatContext& ctx) const {
    return fmt::format_to(ctx.out(), "({}, {})", p.x, p.y);
  }
};

class generatedIntegrationTest007 : public ::testing::Test {
 protected:
  void SetUp() override {}
};

TEST_F(generatedIntegrationTest007, IntegrationScenario) {
  TestPoint p{1, 2};
  auto s = fmt::format("point={}", p);
  fmt::format("{}", s);
}
