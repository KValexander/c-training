# Минимальная версия
cmake_minimum_required(VERSION 3.23.0)

# Название проекта
project(main)

# Этот CMakeLists написан на основе
# https://github.com/tsoding/nothing/blob/master/CMakeLists.txt

# Только для WINDOWS

# Без этого не работает и я не знаю почему
# При чём обязательно в самое начало
if(MINGW)
    # https://stackoverflow.com/a/25089610
    add_compile_definitions(SDL_MAIN_HANDLED)
    # https://github.com/trink/symtseries/issues/49#issuecomment-160843756
    add_compile_definitions(__USE_MINGW_ANSI_STDIO)
endif()

# Определение разрядности системы
# для подключения SDL2
if(${CMAKE_SIZEOF_VOID_P} MATCHES 8)
    set(SDL2_WIN "x86_64-w64-mingw32")
else()
    set(SDL2_WIN "i686-w64-mingw32")
endif()

# Пути подключения SDL2
set(SDL2_INCLUDE_DIRS "${CMAKE_SOURCE_DIR}/SDL2/${SDL2_WIN}/include/SDL2")
set(SDL2_LIBRARIES "${CMAKE_SOURCE_DIR}/SDL2/${SDL2_WIN}/lib/libSDL2.a;${CMAKE_SOURCE_DIR}/SDL2/${SDL2_WIN}/lib/libSDL2main.a")

# Подключение папки SDL2
include_directories(${SDL2_INCLUDE_DIRS})

# Исполняемые файлы
add_executable(main
    main.c
)

# Подключение библиотеки SDL2
target_link_libraries(main ${SDL2_LIBRARIES})

# Без этого не работает и я не знаю почему x2
if(MINGW)
    target_link_libraries(main hid setupapi Imm32 Version winmm)
elseif(WIN32)
    target_link_libraries(main Imm32 Version winmm)
endif()