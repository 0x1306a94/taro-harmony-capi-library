/*
 * Copyright (c) 2018 O2Team. All Rights Reserved.
 */

#ifndef TARO_CAPI_HARMONY_DEMO_LINEHEIGHT_H
#define TARO_CAPI_HARMONY_DEMO_LINEHEIGHT_H

#include <regex>
#include <arkui/native_node.h>
#include <arkui/native_type.h>

#include "./attribute_base.h"

namespace TaroRuntime::TaroCSSOM::TaroStylesheet {

// NODE_TEXT_LINE_HEIGHT
class LineHeight : public AttributeBase<Dimension> {
    public:
    void setValueFromStringView(std::string_view value) override {
        if (std::regex_match(value.begin(), value.end(), std::regex(R"(^\d+(?:\.\d+)?$)"))) {
            try {
                auto dimension = Dimension(std::stof(std::string(value)), DimensionUnit::PERCENT);
                this->set(dimension);
            } catch (...) {
                // stof转化报错
            }
        } else {
            AttributeBase<Dimension>::setValueFromStringView(value);
        }
    }
};
} // namespace TaroRuntime::TaroCSSOM::TaroStylesheet

#endif // TARO_CAPI_HARMONY_DEMO_LINEHEIGHT_H
