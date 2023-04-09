cmake_minimum_required(VERSION 3.5)

# プロジェクト名を指定
project(myapp_project)

# myapp、mylib1、mylib2のCMakeLists.txtファイルをインクルード
add_subdirectory(myapp)
add_subdirectory(mylib1)
add_subdirectory(mylib2)