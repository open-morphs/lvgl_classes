#pragma once

#include "LVGLBase.hpp"
#include "LVGLPage.hpp"

class LVGLTabView : public LVGLBase {

    public:
        explicit LVGLTabView(LVGLBase* const parent = NULL);
        explicit LVGLTabView(lv_obj_t* const parent);

        LVGLPage* addTab(const std::string& title);
        void setNavigationBarsPosition(const uint8_t position);
        void setAnimationTime(const size_t ms);
};