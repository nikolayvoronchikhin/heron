/*
 * Copyright 2015 Twitter, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

////////////////////////////////////////////////////////////////
//
// metrics-sinks-vars.h
//
// This is the metrics sinks configuration parameter names
//
///////////////////////////////////////////////////////////////
#ifndef METRICS_SINKS_VARS_H_
#define METRICS_SINKS_VARS_H_

namespace heron {
namespace config {

class MetricsSinksVars {
 public:
  static const sp_string METRICS_SINKS_TMASTER_SINK;
  static const sp_string METRICS_SINKS_TMASTER_METRICS;
};
}  // namespace config
}  // namespace heron

#endif
