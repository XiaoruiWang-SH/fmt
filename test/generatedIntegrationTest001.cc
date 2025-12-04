#include <gtest/gtest.h>
#include "fmt/chrono.h"

class GeneratedIntegrationTest001 : public ::testing::Test {
protected:
    void SetUp() override {}
};

TEST_F(GeneratedIntegrationTest001, IntegrationScenario) {
    auto year = fmt::year(2024);
    auto month = fmt::month(1);
    auto day = fmt::day(1);
    auto ymd = fmt::year_month_day(year, month, day);

    auto y = ymd.year();
    auto m = ymd.month();
    auto d = ymd.day();

    fmt::format("{}", y);
    fmt::format("{:%Y}", y);
    fmt::format("{:%y}", y);

    fmt::format("{}", m);
    fmt::format("{:%m}", m);
    fmt::format("{:%b}", m);
    fmt::format("{:%B}", m);

    fmt::format("{}", d);
    fmt::format("{:%d}", d);

    fmt::format("{}", ymd);
    fmt::format("{:%Y-%m-%d}", ymd);
    fmt::format("{:%Y-%b-%d}", ymd);
    fmt::format("{:%Y-%B-%d}", ymd);

    auto loc = std::locale("es_ES.UTF-8");
    fmt::format(loc, "{:L}", m);
    fmt::format(loc, "{:L%b}", m);
}