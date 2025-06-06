/*
 * Copyright (c) 2018 O2Team. All Rights Reserved.
 */

#ifndef TARO_CAPI_HARMONY_DEMO_BACKGROUNDSIZE_H
#define TARO_CAPI_HARMONY_DEMO_BACKGROUNDSIZE_H

#include <arkui/native_node.h>
#include <arkui/native_type.h>
#include <napi/native_api.h>

#include "./params/background_size_param/background_size_param.h"
#include "attribute_base.h"
#include "helper/Optional.h"

namespace TaroRuntime::TaroCSSOM::TaroStylesheet {

class BackgroundSize : public AttributeBase<BackgroundSizeParam> {
    public:
    BackgroundSize() = default;
    BackgroundSize(const napi_value&);
    void setValueFromStringView(std::string_view str);
    void setValueFromNapi(const napi_value&);

    private:
    BackgroundSizeParam param_;
};

} // namespace TaroRuntime::TaroCSSOM::TaroStylesheet
#endif // TARO_CAPI_HARMONY_DEMO_BACKGROUNDSIZE_H
