// auto-generated by yaml_to_cxx.py from test/upstream/regression/767.yaml
#include "testlib.h"
void test_upstream_regression_767() {
    enter_section("test_upstream_regression_767: 767 -- better NaN checking");
    TEST_EQ(R::expr(double("NaN")).run(*conn), (err_regex("ValueError", "Out of range float values are not JSON compliant.*")));
    TEST_EQ(R::expr(double("Infinity")).run(*conn), (err_regex("ValueError", "Out of range float values are not JSON compliant.*")));
}