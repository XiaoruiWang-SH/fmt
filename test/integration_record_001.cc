#include "fmt/chrono.h"
#include <gtest/gtest.h>

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

  auto y_str = fmt::format("{}", y);
  auto y_fmtY = fmt::format("{:%Y}", y);
  auto y_fmty = fmt::format("{:%y}", y);

  auto m_str = fmt::format("{}", m);
  auto m_fmtm = fmt::format("{:%m}", m);
  auto m_fmtb = fmt::format("{:%b}", m);
  auto m_fmtB = fmt::format("{:%B}", m);

  auto d_str = fmt::format("{}", d);
  auto d_fdtd = fmt::format("{:%d}", d);

  auto ymd_str = fmt::format("{}", ymd);
  auto ymd_fmtYmd = fmt::format("{:%Y-%m-%d}", ymd);
  auto ymd_fmtYbd = fmt::format("{:%Y-%b-%d}", ymd);
  auto ymd_fmtYBd = fmt::format("{:%Y-%B-%d}", ymd);

  auto y_int = static_cast<unsigned>(m);
}