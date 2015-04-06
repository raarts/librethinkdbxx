// auto-generated by yaml_to_cxx.py from test/upstream/math_logic/mod.yaml
#include "testlib.h"
void test_upstream_math_logic_mod() {
    enter_section("test_upstream_math_logic_mod: Tests for the basic usage of the mod operation");
    TEST_EQ((R::expr(10) % 3).run(*conn), (1));
    TEST_EQ((R::expr(10) % R::expr(3)).run(*conn), (1));
    TEST_EQ(R::expr(10).mod(3).run(*conn), (1));
    TEST_EQ((R::expr(-10) % -3).run(*conn), (-1));
    TEST_EQ((R::expr(4) % "a").run(*conn), (err("RqlRuntimeError", "Expected type NUMBER but found STRING.", R::Array{1})));
    TEST_EQ((R::expr("a") % 1).run(*conn), (err("RqlRuntimeError", "Expected type NUMBER but found STRING.", R::Array{0})));
    TEST_EQ((R::expr("a") % "b").run(*conn), (err("RqlRuntimeError", "Expected type NUMBER but found STRING.", R::Array{0})));
    exit_section();
}