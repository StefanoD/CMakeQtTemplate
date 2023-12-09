set(target qt-sample-project)

add_executable(${target} src/main.cpp)

target_include_directories(${target} PUBLIC include)