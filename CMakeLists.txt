cmake_minimum_required(VERSION 3.15)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 17)

include_directories(/usr/local/include)
link_directories(/usr/local/lib)

add_executable(DesignPattern main.cpp)


add_executable(CountingResources CountingResources.cpp)
target_link_libraries(CountingResources benchmark gtest gtest_main)

add_executable(RAII_in_a_nutshell RAII_in_a_nutshell.cpp)
target_link_libraries(RAII_in_a_nutshell benchmark gtest gtest_main)

add_executable(RAII_for_other_resources RAII_for_other_resources.cpp)
target_link_libraries(RAII_for_other_resources gtest gtest_main)

add_executable(Releasing_early Releasing_early.cpp)
target_link_libraries(Releasing_early gtest gtest_main)

add_executable(CarefulImplementationOfRAIIobject CarefulImplementationOfRAIIobject.cpp)
target_link_libraries(CarefulImplementationOfRAIIobject gtest gtest_main)

add_executable(TypeErasureByExample TypeErasureByExample.cpp)
add_executable(TypeErasureinCpp TypeErasureinCpp.cpp)

add_executable(TheOverheadOfTypeErasure TheOverheadOfTypeErasure.cpp)
target_link_libraries(TheOverheadOfTypeErasure benchmark)

add_executable(TemplateFunctions TemplateFunctions.cpp)

add_executable(SFINAE SFINAE.cpp)
add_executable(BasicSFINAE BasicSFINAE.cpp)
add_executable(AdvancedSFINAE AdvancedSFINAE.cpp)
add_executable(AdvancedSFINAE2 AdvancedSFINAE2.cpp)