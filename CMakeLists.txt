cmake_minimum_required(VERSION 3.15)
project(KafkaLearning)

# include_directories(".")

find_package(absl REQUIRED)
find_package(modern-cpp-kafka REQUIRED)
find_package(RdKafka REQUIRED)

add_library(common "")
add_subdirectory("common")
add_executable(${PROJECT_NAME} producer/producer_main.cc)

target_link_libraries(${PROJECT_NAME} common abseil::abseil modern-cpp-kafka::modern-cpp-kafka RdKafka::rdkafka++)
