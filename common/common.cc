#include "common.h"

#include <string>

#include "absl/status/statusor.h"
#include "kafka/Properties.h"

namespace kafka_learning {
namespace util {

absl::StatusOr<kafka::Properties> GetProperties() {
    const auto broker_list = getenv("KAFKA_BROKER_LIST");
    if (broker_list == NULL) {
        return absl::InvalidArgumentError(
            "No KAFKA_BROKER_LIST environment variable was specified.");
    }

    const kafka::Properties properties({{
        "bootstrap.servers", std::string(broker_list)}});
    return properties;
}

absl::StatusOr<kafka::Topic> GetTopic() {
    const auto topic = getenv("TOPIC");
    if (topic == NULL) {
        return absl::InvalidArgumentError(
            "No TOPIC environment variable was specified.");
    }

    return kafka::Topic(topic);
}

}  // util
}  // kafka_learning
