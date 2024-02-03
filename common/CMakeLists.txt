target_sources(common PRIVATE common.cc PUBLIC common.h)
target_link_libraries(common abseil::abseil modern-cpp-kafka::modern-cpp-kafka RdKafka::rdkafka++)
