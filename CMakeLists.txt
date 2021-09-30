/cmake-build-debug/
*.idea
cmake_minimum_required(VERSION 3.20)
project(first)

set(CMAKE_CXX_STANDARD 17)

add_executable(first main.cpp Examples/Adapter.cpp Examples/Adapter.h task_1.cpp task_1.h task_2.cpp task_2.h task_3.cpp task_3.h task_4.cpp task_4.h Examples/Singleton.cpp Examples/Singleton.h task_5.cpp task_5.h StrategySort.cpp StrategySort.h task_6.cpp task_6.h Progression.cpp Progression.h task_7.cpp task_7.h task_8.cpp task_8.h task_9.cpp task_9.h task_10.cpp task_10.h)
