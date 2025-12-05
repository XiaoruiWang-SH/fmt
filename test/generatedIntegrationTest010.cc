#include <gtest/gtest.h>
#include "fmt/format.h"
#include <string>

class generatedIntegrationTest010 : public ::testing::Test {
 protected:
  void SetUp() override {}
};

TEST_F(generatedIntegrationTest010, IntegrationScenario) {
  auto s = fmt::format("answer={} pi={:.2f}", 42, 3.14);
  auto n = fmt::formatted_size("answer={} pi={:.2f}", 42, 3.14);

  EXPECT_EQ(s.size(), n);

  std::string buf;
  buf.resize(n);
  fmt::format_to(buf.begin(), "answer={} pi={:.2f}", 42, 3.14);
}
