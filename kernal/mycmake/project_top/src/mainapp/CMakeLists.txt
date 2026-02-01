add_executable(mainapp main.c)
include_directories(
	${CMAKE_SOURCE_DIR}/inc/disp
	)
target_link_libraries(mainapp display)
