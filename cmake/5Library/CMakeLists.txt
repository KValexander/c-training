# Задать минимальную версию cmake
# которая может быть использована
cmake_minimum_required(VERSION 3.23.0)

# Имя проекта
project(main)

# Создание библиотеки добавляет
# дополнительное время для сборки

# Создание библиотеки
# --------------------

# Добавление библиотеки

# Статическая библиотека
# add_library(library STATIC
#     src/functions.c
# )

# Общая библиотека
add_library(library SHARED
    src/functions.c
)
add_library(functions::library ALIAS library)

# Папка, которая должна быть включена
# в команду сборки библиотеки
target_include_directories(library
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

# Создание исполняемого файла
# --------------------

# Создание переменной с ресурсами
set(SOURCES
    src/main.c
)

# Добавление исполняемых файлов (исходников)
add_executable(main ${SOURCES})

# Связать библиотеку с исполняемыми файлами (исходниками)
target_link_libraries(main
    PRIVATE
        # library # для статической библиотеки
        functions::library # для общей библиотеки
)