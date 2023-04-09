# mylib1のCMakeLists.txt

# mylib1のビルドに必要な最低限のバージョンを指定
cmake_minimum_required(VERSION 3.5)

# mylib1の名前を指定
project(mylib1)


# Windowsの場合にはLIB_EXPORTSを定義する
if(WIN32)
    add_definitions(-DLIB1_EXPORTS)
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(-fvisibility=hidden)
endif()

# mylib1のソースファイルを指定
set(SOURCES
    lib1.cpp
)

# mylib1のヘッダーファイルを指定
set(HEADERS
    include/lib1.h
)


# mylib1をビルドするためのターゲットを作成
add_library(${PROJECT_NAME} SHARED ${SOURCES} ${HEADERS})

# mylib1のヘッダーファイルが含まれるディレクトリをインクルードディレクトリに追加
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
