// Author: Ryan Vickramasinghe
#ifndef COMMON_H

#include <string>

#include "absl/status/statusor.h"
#include "kafka/Properties.h"

namespace kafka_learning {
namespace util {

absl::StatusOr<kafka::Properties> GetProperties();

absl::StatusOr<kafka::Topic> GetTopic();

}  // util
}  // kafka_learning

#endif /* COMMON_H */
