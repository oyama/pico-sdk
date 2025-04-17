pico_add_library(pico_rand)

target_include_directories(pico_rand_headers SYSTEM INTERFACE ${CMAKE_CURRENT_LIST_DIR}/include)

target_sources(pico_rand INTERFACE
        ${CMAKE_CURRENT_LIST_DIR}/rand.c
        )
