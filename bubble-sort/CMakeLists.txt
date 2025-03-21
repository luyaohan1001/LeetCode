
set(PROJECT_NAME bubble_sort)
project(${PROJECT_NAME})
file(GLOB SOURCES "*.c")


add_executable(${PROJECT_NAME} ${SOURCES})
add_test(test1 ${PROJECT_NAME})

add_compile_options(${PROJECT_NAME} PRIVATE -g -pg)

add_custom_target(run_gprof
  COMMAND gprof ${PROJECT_NAME} > prof_analysis.txt
)
add_dependencies(run_gprof ${PROJECT_NAME})