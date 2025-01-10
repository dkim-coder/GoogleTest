cmake_minimum_required(VERSION 3.14)
project(MyTestProjects)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


enable_testing()  # 테스트 활성화

add_library(  # add_library(<라이브러리 이름> <소스1> <소스2> ... <소스들>)
  sample1
  sample1.cc
  # sample1.h -> 생략가능
)

add_executable(   # add_executable (<실행 파일 이름> <소스1> <소스2> ... <소스들>)
  sample1_unittest
  sample1_unittest.cc
)

target_link_libraries( # target_link_libraries(<실행 파일> <라이브러리 이름>)
  sample1_unittest
  sample1 # 위에서 만든 커스텀 라이브러리
  GTest::gtest_main # 구글 테스트 메인 라이브러리
)

include(GoogleTest)
gtest_discover_tests(sample1_unittest)