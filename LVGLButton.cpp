#include "LVGLButton.hpp"

LVGLButton::LVGLButton(const std::string& txt, lv_obj_t* const parent)
    :   LVGLBase(lv_btn_create(parent, NULL), parent),
        _lbl{new LVGLLabel(txt, this)} {
    applyTheme();
}

LVGLButton::LVGLButton(const std::string& txt, LVGLBase* const parent)
    :   LVGLBase(lv_btn_create(parent? parent->innerData() : lv_disp_get_scr_act(NULL), NULL), parent),
        _lbl{new LVGLLabel(txt, this)} {
    applyTheme();
}

LVGLButton::LVGLButton(lv_obj_t* const src, LVGLBase* const parent)
    :   LVGLBase(src, parent),
        _lbl{new LVGLLabel("", this)} {
    applyTheme();
}

// void LVGLButton::setSize(const size_t w, const size_t h) {

//     lv_btn_set_fit(_obj, LV_FIT_NONE);
//     lv_obj_set_auto_realign(_obj, false);
//     LVGLBase::setSize(w, h);
// }

void LVGLButton::disable() {
    setState(LV_STATE_DISABLED);
    _lbl->setState(LV_STATE_DISABLED);
}

void LVGLButton::enable() {
    setState(LV_BTN_STATE_RELEASED);
    _lbl->setState(LV_STATE_DEFAULT);
}