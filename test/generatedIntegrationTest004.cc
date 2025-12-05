#include <gtest/gtest.h>
#include "fmt/format.h"

class generatedIntegrationTest004 : public ::testing::Test {
protected:
    void SetUp() override {}
};

TEST_F(generatedIntegrationTest004, IntegrationScenario) {
    const char* sig = "12345";
    fmt::detail::big_decimal_fp decimal{sig, 5, 3};

    fmt::format_specs specs;
    specs.set_align(fmt::align::numeric);
    specs.width = 10;
    specs.precision = 7;

    fmt::detail::size_padding sp(
        decimal.significand_size, unsigned(0) << 24, specs);

    char out_buffer[32];
    char* out_ptr = out_buffer;

    // Mimic formatting big_decimal_fp's significand size with size_padding info
    for (unsigned i = 0; i < sp.padding; ++i) {
        *out_ptr++ = '0';
    }
    for (int i = 0; i < decimal.significand_size; ++i) {
        *out_ptr++ = sig[i];
    }

    size_t total_size = sp.size;
    (void)total_size;
}
