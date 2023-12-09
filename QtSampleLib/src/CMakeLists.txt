set(target qt-sample-lib)

add_library(${target} 
    ../include/QtSampleLib/TestClass.h

    TestClass.cpp
)

target_include_directories(${target} PUBLIC ../include)

target_link_libraries(${target} Qt::Core)