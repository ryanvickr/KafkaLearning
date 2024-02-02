// Author: Ryan Vickramasinghe
#include <string>

#include "kafka/KafkaProducer.h"
#include "absl/status/statusor.h"

static absl::StatusOr<kafka::Properties> GetProperties();

static absl::StatusOr<kafka::Topic> GetTopic();

