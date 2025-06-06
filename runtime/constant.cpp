/*
 * Copyright (c) 2018 O2Team. All Rights Reserved.
 */

#include "constant.h"

namespace TaroRuntime {
std::map<std::string, TAG_NAME> TAG_NAME_MAP = {
    {"DOCUMENT", TAG_NAME::DOCUMENT},
    {"HTML", TAG_NAME::HTML},
    {"HEAD", TAG_NAME::HEAD},
    {"BODY", TAG_NAME::BODY},
    {"CONTAINER", TAG_NAME::CONTAINER},
    {"APP", TAG_NAME::APP},
    {"TARO-PAGE", TAG_NAME::PAGE},
    {"VIEW", TAG_NAME::VIEW},
    {"SCROLL-VIEW", TAG_NAME::SCROLL_VIEW},
    {"TEXT", TAG_NAME::TEXT},
    {"SPAN", TAG_NAME::SPAN},
    {"IMAGE", TAG_NAME::IMAGE},
    {"BUTTON", TAG_NAME::BUTTON},
    {"INPUT", TAG_NAME::INPUT},
    {"TEXT-AREA", TAG_NAME::TEXTAREA},
    {"SWIPER", TAG_NAME::SWIPER},
    {"ICON", TAG_NAME::ICON},
    {"MOVABLE-AREA", TAG_NAME::MOVABLE_AREA},
    {"MOVABLE-VIEW", TAG_NAME::MOVABLE_VIEW},
    {"LIST", TAG_NAME::LIST},
    {"LIST-ITEM", TAG_NAME::LIST_ITEM},
    {"WATER-FLOW", TAG_NAME::WATER_FLOW},
    {"FLOW-SECTION", TAG_NAME::FLOW_SECTION},
    {"FLOW-ITEM", TAG_NAME::FLOW_ITEM},
    {"SWIPER-ITEM", TAG_NAME::SWIPER_ITEM},
    {"CUSTOM-WRAPPER", TAG_NAME::VIEW}, // TODO 暂时把小程序优化用的 CustomWrapper 映射成 View
    {"PROGRESS", TAG_NAME::PROGRESS},
    {"PICKER", TAG_NAME::PICKER},
    {"STICKY-SECTION", TAG_NAME::STICKY_SECTION},
    {"STICKY-HEADER", TAG_NAME::STICKY_HEADER},
    {"SLIDER", TAG_NAME::SLIDER},
    {"CHECKBOX", TAG_NAME::CHECKBOX},
    {"CHECKBOX-GROUP", TAG_NAME::CHECKBOX_GROUP},
    {"RADIO", TAG_NAME::RADIO},
    {"RADIO-GROUP", TAG_NAME::RADIO_GROUP},
    {"LABEL", TAG_NAME::LABEL},
    {"FORM", TAG_NAME::FORM},
    {"ENTRY-ASYNC", TAG_NAME::ENTRY_ASYNC},
    {"CANVAS", TAG_NAME::CANVAS},
};

std::map<std::string, ATTRIBUTE_NAME> ATTRIBUTE_NAME_MAP = {
    {"id", ATTRIBUTE_NAME::ID},
    {"uid", ATTRIBUTE_NAME::UID},
    {"class", ATTRIBUTE_NAME::CLASS},
    {"className", ATTRIBUTE_NAME::CLASS},
    {"style", ATTRIBUTE_NAME::STYLE},
    {"src", ATTRIBUTE_NAME::SRC},
    {"errorHolder", ATTRIBUTE_NAME::ERROR_HOLDER},
    {"lazyLoad", ATTRIBUTE_NAME::LAZY_LOAD},
    {"mode", ATTRIBUTE_NAME::MODE},
    {"alt", ATTRIBUTE_NAME::ALT},
    {"width", ATTRIBUTE_NAME::WIDTH},
    {"height", ATTRIBUTE_NAME::HEIGHT},
    {"value", ATTRIBUTE_NAME::VALUE},
    {"placeholder", ATTRIBUTE_NAME::PLACEHOLDER},
    {"type", ATTRIBUTE_NAME::TYPE},
    {"name", ATTRIBUTE_NAME::NAME},
    {"disabled", ATTRIBUTE_NAME::DISABLED},
    {"readonly", ATTRIBUTE_NAME::READONLY},
    {"required", ATTRIBUTE_NAME::REQUIRED},
    {"maxlength", ATTRIBUTE_NAME::MAX_LENGTH},
    {"textContent", ATTRIBUTE_NAME::TEXT_CONTENT},
    {"size", ATTRIBUTE_NAME::SIZE},
    {"color", ATTRIBUTE_NAME::COLOR},
    {"animation", ATTRIBUTE_NAME::ANIMATION},
    {"reuseId", ATTRIBUTE_NAME::REUSE_ID},
    {"scrollX", ATTRIBUTE_NAME::SCROLL_X},
    {"scrollY", ATTRIBUTE_NAME::SCROLL_Y},
    {"scrollLeft", ATTRIBUTE_NAME::SCROLL_LEFT},
    {"scrollTop", ATTRIBUTE_NAME::SCROLL_TOP},
    {"showScrollbar", ATTRIBUTE_NAME::SHOW_SCROLL_BAR},
    {"scrollWithAnimation", ATTRIBUTE_NAME::SCROLL_WITH_ANIMATION},
    {"scrollAnimationDuration", ATTRIBUTE_NAME::SCROLL_ANIMATION_DURATION},
    {"current", ATTRIBUTE_NAME::INDEX},
    {"circular", ATTRIBUTE_NAME::LOOP},
    {"duration", ATTRIBUTE_NAME::DURATION},
    {"interval", ATTRIBUTE_NAME::INTERVAL},
    {"vertical", ATTRIBUTE_NAME::VERTICAL},
    {"autoplay", ATTRIBUTE_NAME::AUTOPLAY},
    {"indicatorDots", ATTRIBUTE_NAME::INDICATOR},
    {"indicatorColor", ATTRIBUTE_NAME::INDICATOR_COLOR},
    {"indicatorActiveColor", ATTRIBUTE_NAME::INDICATOR_ACTIVE_COLOR},
    {"nextMargin", ATTRIBUTE_NAME::NEXT_MARGIN},
    {"adjustHeight", ATTRIBUTE_NAME::ADJUST_HEIGHT},
    {"previousMargin", ATTRIBUTE_NAME::PREV_MARGIN},
    {"displayMultipleItems", ATTRIBUTE_NAME::DISPLAY_COUNT},
    {"direction", ATTRIBUTE_NAME::DIRECTION},
    {"outOfBounds", ATTRIBUTE_NAME::OUT_OF_BOUNDS},
    {"x", ATTRIBUTE_NAME::POSITION_X},
    {"y", ATTRIBUTE_NAME::POSITION_Y},
    {"scale", ATTRIBUTE_NAME::SCALE},
    {"scaleMin", ATTRIBUTE_NAME::SCALE_MIN},
    {"scaleMax", ATTRIBUTE_NAME::SCALE_MAX},
    {"scaleValue", ATTRIBUTE_NAME::SCALE_VALUE},
    {"scaleArea", ATTRIBUTE_NAME::SCALE_AREA},
    {"password", ATTRIBUTE_NAME::PASSWORD},
    {"confirmType", ATTRIBUTE_NAME::CONFIRM_TYPE},
    {"maxLength", ATTRIBUTE_NAME::MAX_LENGTH},
    {"focus", ATTRIBUTE_NAME::FOCUS},
    {"placeholderStyle", ATTRIBUTE_NAME::PLACEHOLDER_STYLE},
    {"placeholderTextColor", ATTRIBUTE_NAME::PLACEHOLDER_TEXT_COLOR},
    {"adjustPosition", ATTRIBUTE_NAME::ADJUST_POSITION},
    {"editing", ATTRIBUTE_NAME::EDITING},
    {"autoHeight", ATTRIBUTE_NAME::AUTO_HEIGHT},
    {"catchMove", ATTRIBUTE_NAME::CATCH_MOVE},
    {"percent", ATTRIBUTE_NAME::PERCENT},
    {"showInfo", ATTRIBUTE_NAME::SHOW_INFO},
    {"borderRadius", ATTRIBUTE_NAME::BORDER_RADIUS},
    {"fontSize", ATTRIBUTE_NAME::FONT_SIZE},
    {"strokeWidth", ATTRIBUTE_NAME::STROKE_WIDTH},
    {"activeColor", ATTRIBUTE_NAME::ACTIVE_COLOR},
    {"backgroundColor", ATTRIBUTE_NAME::BACKGROUND_COLOR},
    {"active", ATTRIBUTE_NAME::ACTIVE},
    {"activeMode", ATTRIBUTE_NAME::ACTIVE_MODE},

    {"range", ATTRIBUTE_NAME::RANGE},
    {"rangeKey", ATTRIBUTE_NAME::RANGE_KEY},
    {"okText", ATTRIBUTE_NAME::OKText},
    {"cancelText", ATTRIBUTE_NAME::CANCELText},
    {"start", ATTRIBUTE_NAME::START},
    {"end", ATTRIBUTE_NAME::END},
    {"level", ATTRIBUTE_NAME::LEVEL},

    {"column", ATTRIBUTE_NAME::COLUMN},
    {"lowerThresholdCount", ATTRIBUTE_NAME::LOWER_THRESHOLD_COUNT},
    {"upperThresholdCount", ATTRIBUTE_NAME::UPPER_THRESHOLD_COUNT},
    {"cacheCount", ATTRIBUTE_NAME::CACHE_COUNT},
    {"rowGap", ATTRIBUTE_NAME::ROW_GAP},
    {"columnGap", ATTRIBUTE_NAME::COLUMN_GAP},
    {"margin", ATTRIBUTE_NAME::MARGIN},
    {"stickyHeader", ATTRIBUTE_NAME::STICKY_HEADER},
    {"space", ATTRIBUTE_NAME::SPACE},
    {"checked", ATTRIBUTE_NAME::CHECKED},
    {"for", ATTRIBUTE_NAME::LABEL_FOR},
    {"shape", ATTRIBUTE_NAME::SHAPE},

    {"step", ATTRIBUTE_NAME::STEP},
    {"showValue", ATTRIBUTE_NAME::SHOW_VALUE},
    {"min", ATTRIBUTE_NAME::MIN},
    {"max", ATTRIBUTE_NAME::MAX},
    {"blockColor", ATTRIBUTE_NAME::BLOCK_COLOR},
    {"blockSize", ATTRIBUTE_NAME::BLOCK_SIZE},

    {"disableTouch", ATTRIBUTE_NAME::DISABLE_TOUCH},
    {"disableProgrammaticAnimation", ATTRIBUTE_NAME::DISABLE_PROGRAMMATIC_ANIMATION}};

std::map<std::string, PROPERTY_NAME> PROPERTY_NAME_MAP = {
    {"clientTop", PROPERTY_NAME::CLIENT_TOP},
    {"clientLeft", PROPERTY_NAME::CLIENT_LEFT},
    {"clientHeight", PROPERTY_NAME::CLIENT_HEIGHT},
    {"clientWidth", PROPERTY_NAME::CLIENT_WIDTH},
    {"scrollTop", PROPERTY_NAME::SCROLL_TOP},
    {"scrollLeft", PROPERTY_NAME::SCROLL_LEFT},
    {"scrollHeight", PROPERTY_NAME::SCROLL_HEIGHT},
    {"scrollWidth", PROPERTY_NAME::SCROLL_WIDTH},
    {"offsetTop", PROPERTY_NAME::OFFSET_TOP},
    {"offsetLeft", PROPERTY_NAME::OFFSET_LEFT},
    {"offsetHeight", PROPERTY_NAME::OFFSET_HEIGHT},
    {"offsetWidth", PROPERTY_NAME::OFFSET_WIDTH},
    {"offsetParent", PROPERTY_NAME::OFFSET_PARENT},
    {"innerText", PROPERTY_NAME::INNER_TEXT},
    {"innerHTML", PROPERTY_NAME::INNER_HTML},
    {"outerHTML", PROPERTY_NAME::OUTER_HTML},
    {"textContent", PROPERTY_NAME::TEXT_CONTENT},
    {"childNodes", PROPERTY_NAME::CHILD_NODES},
    {"children", PROPERTY_NAME::CHILDREN},
    {"dataset", PROPERTY_NAME::DATASET},
    {"firstChild", PROPERTY_NAME::FIRST_CHILD},
    {"firstElementChild", PROPERTY_NAME::FIRST_ELEMENT_CHILD},
    {"lastChild", PROPERTY_NAME::LAST_CHILD},
    {"lastElementChild", PROPERTY_NAME::LAST_ELEMENT_CHILD},
    {"parentElement", PROPERTY_NAME::PARENT_ELEMENT},
    {"parentNode", PROPERTY_NAME::PARENT_NODE},
    {"previousElementSibling", PROPERTY_NAME::PREVIOUS_ELEMENT_SIBLING},
    {"previousSibling", PROPERTY_NAME::PREVIOUS_SIBLING},
    {"nextElementSibling", PROPERTY_NAME::NEXT_ELEMENT_SIBLING},
    {"nextSibling", PROPERTY_NAME::NEXT_SIBLING},
    {"ownerDocument", PROPERTY_NAME::OWNER_DOCUMENT},
};

std::map<std::string, FUNC_CODE> FUNC_CODE_MAP = {
    {"classList.add", FUNC_CODE::CLASSLIST_ADD},
    {"classList.remove", FUNC_CODE::CLASSLIST_REMOVE},
    {"classList.toggle", FUNC_CODE::CLASSLIST_TOGGLE},
    {"classList.contains", FUNC_CODE::CLASSLIST_CONTAINS},
    {"classList.replace", FUNC_CODE::CLASSLIST_REPLACE},
    {"classList.toString", FUNC_CODE::CLASSLIST_TO_STRING},
    {"classList.length", FUNC_CODE::CLASSLIST_LENGTH},
};
} // namespace TaroRuntime
