#include <gtest/gtest.h>
#include "fmt/chrono.h"
#include <vector>

class generatedIntegrationTest003 : public ::testing::Test {
protected:
    void SetUp() override {}
};

TEST_F(generatedIntegrationTest003, IntegrationScenario) {
    auto year = fmt::year(2024);
    auto month = fmt::month(1);
    auto day = fmt::day(1);
    auto ymd = fmt::year_month_day(year, month, day);

    (void)ymd.year();
    (void)ymd.month();
    (void)ymd.day();

    (void)static_cast<int>(year);
}