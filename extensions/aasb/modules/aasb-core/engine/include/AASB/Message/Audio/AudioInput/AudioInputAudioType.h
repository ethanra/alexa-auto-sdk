/*
 * Copyright 2017-2020 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/*********************************************************
**********************************************************
**********************************************************

THIS FILE IS AUTOGENERATED. DO NOT EDIT

**********************************************************
**********************************************************
*********************************************************/

#ifndef AUDIOINPUT_AUDIOINPUTAUDIOTYPE_H
#define AUDIOINPUT_AUDIOINPUTAUDIOTYPE_H

#include <string>
#include <vector>

#include <unordered_map>
#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>

namespace aasb {
namespace message {
namespace audio {

//Enum Definition
enum class AudioInputAudioType {
    VOICE,
    COMMUNICATION,
    LOOPBACK,
};

inline std::string toString(AudioInputAudioType enumValue) {
    switch (enumValue) {
        case (AudioInputAudioType::VOICE):
            return "VOICE";
        case (AudioInputAudioType::COMMUNICATION):
            return "COMMUNICATION";
        case (AudioInputAudioType::LOOPBACK):
            return "LOOPBACK";
    }
    throw std::runtime_error("invalidAudioInputAudioTypeType");
}

inline AudioInputAudioType toAudioInputAudioType(const std::string& stringValue) {
    static std::unordered_map<std::string, AudioInputAudioType> map = {
        {"VOICE", AudioInputAudioType::VOICE},
        {"COMMUNICATION", AudioInputAudioType::COMMUNICATION},
        {"LOOPBACK", AudioInputAudioType::LOOPBACK},
    };

    auto search = map.find(stringValue);
    if (search != map.end()) {
        return search->second;
    }
    throw std::runtime_error("invalidAudioInputAudioTypeType");
}

inline void to_json(nlohmann::json& j, const AudioInputAudioType& c) {
    j = toString(c);
}

inline void from_json(const nlohmann::json& j, AudioInputAudioType& c) {
    c = toAudioInputAudioType(j);
}

}  // namespace audio
}  // namespace message
}  // namespace aasb

#endif  // AUDIOINPUT_AUDIOINPUTAUDIOTYPE_H
