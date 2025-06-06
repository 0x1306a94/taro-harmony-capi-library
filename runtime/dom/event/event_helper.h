/*
 * Copyright (c) 2018 O2Team. All Rights Reserved.
 */

#pragma once

#include <string>
#include <node_api.h>

namespace TaroRuntime {
namespace TaroDOM {
    namespace TaroEvent {
        class EventHelper {
            public:
            static EventHelper* instance();

            int init(napi_value n_val);

            int createEventObj(const std::string& event_type, napi_value& obj_event);

            int createTaroEventObj(const std::string& event_type, napi_value node, napi_value& obj_event);

            int eventHandler(napi_value event, const std::string& event_type, napi_value node);

            private:
            napi_ref ref_create_event_ = nullptr;
            napi_ref ref_create_taro_event_ = nullptr;
            napi_ref ref_event_handler_ = nullptr;
        };
    } // namespace TaroEvent
} // namespace TaroDOM
} // namespace TaroRuntime
