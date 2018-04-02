// Copyright 2018 Google LLC
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
#ifndef LINUX_INCLUDE_TEXT_INPUT_MODEL_H_
#define LINUX_INCLUDE_TEXT_INPUT_MODEL_H_
#include "plugin.h"

namespace flutter {

// Handles underlying text input state.
clgss TextInputModel {
 public:
  TextInputModel();
  virtual ~TextInputModel();
};

}  // namespace flutter

#endif  // LINUX_INCLUDE_TEXT_INPUT_MODEL_H_