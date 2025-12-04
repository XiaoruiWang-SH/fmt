#include "fmt/chrono.h"
#include <gtest/gtest.h>

class GeneratedIntegrationTest002 : public ::testing::Test {
protected:
    void SetUp() override {}
};

TEST_F(GeneratedIntegrationTest002, IntegrationScenario) {
    auto year = fmt::year(2024);
    auto month = fmt::month(1);
    auto day_obj = fmt::day(1);
    auto ymd = fmt::year_month_day(year, month, day_obj);

    auto y = ymd.year();
    auto m = ymd.month();
    auto d = ymd.day();

    auto day_value = static_cast<unsigned>(d);
    (void) y;
    (void) m;
    (void) day_value;
}