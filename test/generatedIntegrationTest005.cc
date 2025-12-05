#include <gtest/gtest.h>
#include "fmt/chrono.h"

class generatedIntegrationTest005 : public ::testing::Test {
 protected:
  void SetUp() override {}
};

TEST_F(generatedIntegrationTest005, IntegrationScenario) {
  // Build a locale_ref from a standard locale.
  std::locale loc("");  // use global locale; guaranteed to exist
  fmt::locale_ref loc_ref(loc);

  // Case 1: localized = true, should materialize the given locale.
  fmt::detail::get_locale gl_true(/*localized=*/true, loc_ref);
  const std::locale& stdloc_true = gl_true;
  (void)stdloc_true;

  // Case 2: localized = false, should fall back to classic locale.
  fmt::detail::get_locale gl_false(/*localized=*/false, loc_ref);
  const std::locale& stdloc_false = gl_false;
  (void)stdloc_false;
}
