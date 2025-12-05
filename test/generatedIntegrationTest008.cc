#include <gtest/gtest.h>
#include "fmt/chrono.h"

class generatedIntegrationTest008 : public ::testing::Test {
 protected:
  void SetUp() override {}
};

TEST_F(generatedIntegrationTest008, IntegrationScenario) {
  using namespace std::chrono;

  auto d = seconds(42);
  auto h = hours(1);
  auto total = d + h;

  fmt::format("{}", d);
  fmt::format("{}", total);

  auto tp = system_clock::now();
  fmt::format("{:%Y-%m-%d %H:%M:%S}", tp);
}

