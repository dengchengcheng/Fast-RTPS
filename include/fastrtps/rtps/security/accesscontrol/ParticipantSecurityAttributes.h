// Copyright 2018 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

/*!
 * @file ParticipantSecurityAttributes.h
 */
#ifndef __RTPS_SECURITY_ACCESSCONTROL_PARTICIPANTSECURITYATTRIBUTES_H__
#define __RTPS_SECURITY_ACCESSCONTROL_PARTICIPANTSECURITYATTRIBUTES_H__

namespace eprosima {
namespace fastrtps {
namespace rtps {
namespace security {

struct ParticipantSecurityAttributes
{
    ParticipantSecurityAttributes() : is_access_protected(true), is_discovered_protected(false),
    is_rtps_protected(false) {}

    bool is_access_protected;

    bool is_discovered_protected;

    bool is_rtps_protected;
};

}
}
}
}

#endif // __RTPS_SECURITY_ACCESSCONTROL_PARTICIPANTSECURITYATTRIBUTES_H__
