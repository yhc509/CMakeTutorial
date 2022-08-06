# cmake 버전을 지정
cmake_minimum_required(VERSION 3.23.2)

# 프로젝트 이름 설정
project(HelloWorld VERSION 1.0)

# 버전 정보를 소스코드에 전달
configure_file(HelloWorldConfig.h.in HelloWorldConfig.h)

# 실행 파일 추가
add_executable(HelloWorld main.cpp)

# 구성된 파일은 이진 트리에 기록됩니다.
# 파일을 include 하기 위한 이진 트리를 추가합니다.
# tutorialConfig.h를 찾게 될 것입니다.
target_include_directories(HelloWorld PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )
