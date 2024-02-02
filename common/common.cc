#include "common.h"

#include <string>

#include "kafka/KafkaProducer.h"

static absl::StatusOr<kafka::Properties> GetProperties() {
    const std::string broker_list = getenv("KAFKA_BROKER_LIST");
    if (broker_list.empty()) {
        return absl::InvalidArgumentError(
            "No KAFKA_BROKER_LIST environment variable was specified.");
    }

    const kafka::Properties properties({{"bootstrap.servers", broker_list}});
    return properties;
}

static absl::StatusOr<kafka::Topic> GetTopic() {
    const std::string topic = getenv("TOPIC");
    if (topic.empty()) {
        return absl::InvalidArgumentError(
            "No TOPIC environment variable was specified.");
    }

    return kafka::Topic(topic);
}
