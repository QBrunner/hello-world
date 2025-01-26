find_package(Catch2 3 REQUIRED)

set(TestSources
    "${CMAKE_SOURCE_DIR}/Source/HelloWorld/hello.cpp"
)

function(make_test testname)
add_executable(${testname}
    "${testname}.cpp"
    ${TestSources}
)
target_link_libraries(${testname} PRIVATE Catch2::Catch2WithMain)
target_include_directories(${testname} PRIVATE "${CMAKE_SOURCE_DIR}/Source")
endfunction()


make_test(helloTest)
