/*
 * Copyright (C) 2019 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/
#ifndef GZ_SIM_COMPONENTS_MAGNETOMETER_HH_
#define GZ_SIM_COMPONENTS_MAGNETOMETER_HH_

#include <sdf/Sensor.hh>

#include <gz/sim/config.hh>
#include <gz/sim/Export.hh>

#include <gz/sim/components/Component.hh>
#include <gz/sim/components/Factory.hh>
#include <gz/sim/components/Serialization.hh>

namespace gz
{
namespace sim
{
// Inline bracket to help doxygen filtering.
inline namespace GZ_SIM_VERSION_NAMESPACE {
namespace components
{
  /// \brief A component type that contains a magnetometer sensor,
  /// sdf::Magnetometer, information.
  using Magnetometer = Component<sdf::Sensor, class MagnetometerTag,
                                 serializers::SensorSerializer>;

  IGN_GAZEBO_REGISTER_COMPONENT(
      "gz_sim_components.Magnetometer", Magnetometer)
}
}
}
}
#endif
