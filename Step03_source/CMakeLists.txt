# cmake 버전을 지정
cmake_minimum_required(VERSION 3.23.2)

# 프로젝트 이름 설정
project(HelloWorld)

# C++ 표준 지정
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 실행 파일 추가
add_executable(HelloWorld main.cpp)
