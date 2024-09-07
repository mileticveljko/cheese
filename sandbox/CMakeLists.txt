set(TARGET sandbox)

set(SRC
    src/sandbox.cpp
)

set(INC
    ../cheese/include
)

set(LIB
    cheese
)

add_executable(${TARGET} ${SRC})
target_include_directories(${TARGET} PRIVATE ${INC})
target_link_libraries(${TARGET} PRIVATE ${LIB})