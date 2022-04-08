# Задать минимальную версию cmake
# которая может быть использована
cmake_minimum_required(VERSION 3.23.0)

# Имя проекта
project(main)

# Создание переменной исполняемых файлов
# Причём файл src/functions.h можно как добавлять, так и нет
set(SOURCES
    src/functions.h
    src/functions.c
    src/main.c
)

# Добавление исполняемых файлов
add_executable(main ${SOURCES})