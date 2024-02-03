// Author: Ryan Vickramasinghe
#include <iostream>

#include "../common/common.h"

int main() {
    // Get basic configuration from environment variables.
    auto kafka_properties = kafka_learning::util::GetProperties();
    if (!kafka_properties.ok()) {
        std::cerr << kafka_properties.status().message() << std::endl;
        return 1;
    }

    auto output_topic = kafka_learning::util::GetTopic();
    if (!output_topic.ok()) {
        std::cerr << output_topic.status().message() << std::endl;
        return 1;
    }

    // Print brokers and topic
    std::cout << "Brokers are: " << kafka_properties->toString()
        << ", Topic is: " << *output_topic << std::endl;

    return 0;
}
