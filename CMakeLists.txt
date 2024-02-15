cmake_minimum_required(VERSION 3.12)
project (lv_emscripten)

set(USE_FLAGS "-s USE_SDL=2")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${USE_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${USE_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -s INITIAL_MEMORY=83886080 -sLLD_REPORT_UNDEFINED ${USE_FLAGS}")

include_directories(${PROJECT_SOURCE_DIR})

add_subdirectory(lvgl)
add_subdirectory(lv_drivers)

file(GLOB MY_SOURCES "./*.c")
set(SOURCES ${MY_SOURCES})

# Comment out following statements to build project without eez flow support.
# Also, build lvgl-demo-no-flow.eez-project with EEZ Studio.
add_definitions(-DHAS_FLOW_SUPPORT=1)
set (HAS_FLOW_SUPPORT 1)

file(GLOB_RECURSE my_src
    ./src/*.cpp
    ./src/*.c
)
list(APPEND SOURCES ${my_src})
add_executable(index ${SOURCES})

set(CMAKE_EXECUTABLE_SUFFIX ".html")

if (${HAS_FLOW_SUPPORT})
    add_definitions(-DEEZ_FOR_LVGL)

    add_subdirectory(eez-framework)
    
    target_link_libraries(index
        lvgl
        lv_drivers
        eez-framework
   )
else()
    target_link_libraries(index
        lvgl
        lv_drivers
    )
endif(${HAS_FLOW_SUPPORT})

set_target_properties(index PROPERTIES LINK_FLAGS "--shell-file ${PROJECT_SOURCE_DIR}/lvgl_shell.html -s SINGLE_FILE=1")
