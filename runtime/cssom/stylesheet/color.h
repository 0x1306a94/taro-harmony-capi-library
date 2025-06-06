/*
 * Copyright (c) 2018 O2Team. All Rights Reserved.
 */

#ifndef TARO_CAPI_HARMONY_DEMO_COLOR_H
#define TARO_CAPI_HARMONY_DEMO_COLOR_H

#include <arkui/native_node.h>
#include <arkui/native_type.h>
#include <napi/native_api.h>

#include "helper/Optional.h"
#include "runtime/cssom/stylesheet/attribute_base.h"

namespace TaroRuntime::TaroCSSOM::TaroStylesheet {
// NODE_BORDER_COLOR
class Color : public AttributeBase<TColor> {};

} // namespace TaroRuntime::TaroCSSOM::TaroStylesheet

#endif // TARO_CAPI_HARMONY_DEMO_COLOR_H
