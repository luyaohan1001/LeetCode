
set(PROJECT_NAME bubble_sort)


file(GLOB SOURCES "*.c")
add_executable(${PROJECT_NAME} ${SOURCES})


add_compile_options(${PROJECT_NAME} PRIVATE -g)