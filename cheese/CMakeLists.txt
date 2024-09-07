set(TARGET cheese)

set(SRC
    src/core/application.cpp
)

set(INC
    src/core
)

set(LIB

)

add_library(${TARGET} STATIC ${SRC})
target_include_directories(${TARGET} PRIVATE ${INC})
target_link_libraries(${TARGET} PRIVATE ${LIB})