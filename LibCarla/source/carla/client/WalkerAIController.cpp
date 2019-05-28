// Copyright (c) 2019 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#include "carla/client/WalkerAIController.h"

namespace carla {
namespace client {

  WalkerAIController::WalkerAIController(ActorInitializer init)
    : Actor(std::move(init)) {}

} // namespace client
} // namespace carla