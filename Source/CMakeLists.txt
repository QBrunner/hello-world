set(MAIN_SOURCES
    main.cpp
    HelloWorld/hello.cpp
    HelloWorld/hello.hpp
)

add_executable(${PROJECT_NAME} ${MAIN_SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE "./")
target_compile_options(${PROJECT_NAME} PRIVATE ${COMPILER_WARNINGS})
