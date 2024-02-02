// Author: Ryan Vickramasinghe
#include <string>

#include "librdkafka/rdkafkacpp.h"

typedef rd_kafka_conf_s KafkaConfig;

// Loads a Kafka configuration group.
static void load_config_group(const std::string &key,
                              const std::string &value, KafkaConfig *kafka_config);
