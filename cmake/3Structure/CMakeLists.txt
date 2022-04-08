# Задать минимальную версию cmake
# которая может быть использована
cmake_minimum_required(VERSION 3.23.0)

# Имя проекта
project(main)

# Создание переменной исполняемых файлов
set(SOURCES
    src/functions.c
    src/main.c
)

# Добавление исполняемых файлов
add_executable(main ${SOURCES})

# Папка, которая должна быть включена в команду сборки
target_include_directories(main
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)