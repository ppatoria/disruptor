Include(FetchContent)
message("Installing dependency catch2...")
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v2.13.6)

FetchContent_MakeAvailable(Catch2)

add_executable (disruptor_test math_tests.cpp)
target_link_libraries      (disruptor_test disruptor Catch2::Catch2)
target_include_directories (disruptor_test PUBLIC ${CMAKE_SOURCE_DIR}/src)
add_test (NAME disruptor_test COMMAND disruptor_test)
