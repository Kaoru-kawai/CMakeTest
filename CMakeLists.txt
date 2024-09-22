cmake_minimum_required(VERSION 3.15)

project(CMakeTest VERSION 1.0
                  DESCRIPTION "Very nice project"
                  LANGUAGES CXX)

# 静的ライブラリの作成
add_library(greeting STATIC good_morninglib.cpp good_morninglib.hpp)

# 共有ライブラリの作成
# add_library(shared SHARED CMakeTest.cpp CMakeTest.h)

# # ライブラリのインクルードパスの設定
# target_include_directories(greeting PUBILC include)

# 実行ファイルの作成
add_executable(main main.cpp
CMakeTest.cpp)

# ライブラリのリンク
target_link_libraries(main PUBLIC greeting)
# target_link_libraries(main PUBLIC shared)
