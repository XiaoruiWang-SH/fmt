#include <gtest/gtest.h>
#include "fmt/format.h"

class generatedIntegrationTest006 : public ::testing::Test {
 protected:
  void SetUp() override {}
};

TEST_F(generatedIntegrationTest006, IntegrationScenario) {
  fmt::memory_buffer buffer;
  fmt::format_to(std::back_inserter(buffer), "value={}, hex={:x}", 42, 255);

  std::string result(buffer.data(), buffer.size());
  fmt::format("{}", result);
}

