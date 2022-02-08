// Copyright 2021 The WebNN-native Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef WEBNN_WIRE_CLIENT_NAMED_OUTPUTS_H_
#define WEBNN_WIRE_CLIENT_NAMED_OUTPUTS_H_

#include <webnn/webnn.h>

#include "webnn_wire/WireClient.h"
#include "webnn_wire/client/ObjectBase.h"

#include <map>
#include <string>

namespace webnn_wire { namespace client {

    class NamedOutputs final : public ObjectBase {
      public:
        using ObjectBase::ObjectBase;

        void Set(char const* name, MLArrayBufferView const* resource);
        void Get(size_t index, MLArrayBufferView const* resource);
        bool OutputResult(char const* name,
                          uint8_t const* buffer,
                          size_t byteLength,
                          size_t byteOffset);

      private:
        // std::string mName;
        // uint8_t* mBuffer;
        // size_t mByteLength;
        // size_t mByteOffset;
    };

}}  // namespace webnn_wire::client

#endif  // WEBNN_WIRE_CLIENT_NAMED_OUTPUTS_H_