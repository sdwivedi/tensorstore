// Copyright 2020 The TensorStore Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "tensorstore/kvstore/generation.h"

#include <ostream>

#include "absl/time/time.h"
#include "tensorstore/util/quote_string.h"

namespace tensorstore {

std::ostream& operator<<(std::ostream& os, const StorageGeneration& g) {
  return os << QuoteString(g.value);
}

std::ostream& operator<<(std::ostream& os,
                         const TimestampedStorageGeneration& x) {
  return os << "{generation=" << x.generation << ", time=" << x.time << "}";
}

}  // namespace tensorstore
