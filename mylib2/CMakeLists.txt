# mylib2のCMakeLists.txt

# mylib2のビルドに必要な最低限のバージョンを指定
cmake_minimum_required(VERSION 3.5)

# mylib2の名前を指定
project(mylib2)


# Windowsの場合にはLIB_EXPORTSを定義する
if(WIN32)
    add_definitions(-DLIB2_EXPORTS)
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(-fvisibility=hidden)
endif()

# mylib2のソースファイルを指定
set(SOURCES
    lib2.cpp
)

# mylib2のヘッダーファイルを指定
set(HEADERS
    include/lib2.h
)


# mylib2をビルドするためのターゲットを作成
add_library(${PROJECT_NAME} SHARED ${SOURCES} ${HEADERS})

# mylib2のヘッダーファイルが含まれるディレクトリをインクルードディレクトリに追加
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
