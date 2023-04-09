# myappのCMakeLists.txt

# myappのビルドに必要な最低限のバージョンを指定
cmake_minimum_required(VERSION 3.5)

# myappの名前を指定
project(myapp)

# myappのソースファイルを指定
set(SOURCES
    main.cpp
)

# myappをビルドするためのターゲットを作成
add_executable(${PROJECT_NAME} ${SOURCES})

# mylib1のヘッダーファイルが含まれるディレクトリをインクルードディレクトリに追加
target_include_directories(${PROJECT_NAME} PUBLIC ../mylib1/include)
target_include_directories(${PROJECT_NAME} PUBLIC ../mylib2/include)

# myappが使用するライブラリをリンクする
target_link_libraries(myapp mylib1 mylib2)