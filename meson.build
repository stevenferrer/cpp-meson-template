project(
    'myproject', 
    'cpp', 
    version: '0.1.0', 
    default_options: [
        'cpp_std=c++17',
        'optimization=2',
        'warning_level=3',
    ],
)

gtest_dep = dependency('gtest_main')
catch2_dep = dependency('catch2-with-main')
boost_dep = dependency('boost')

example_catch2_test = executable(
    'example-catch2-test', 
    ['example_catch2_test.cpp'], 
    dependencies: [catch2_dep, boost_dep],
)
test('example catch2 test', example_catch2_test)

example_gtest_test = executable(
    'example-gtest-test', 
    ['example_gtest_test.cpp'], 
    dependencies: [gtest_dep, boost_dep],
)
test('example gtest test', example_gtest_test)

my_project_exe = executable('myproject', ['main.cpp'])
