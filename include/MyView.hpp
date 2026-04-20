#pragma once
#include "custom-types/shared/macros.hpp"
#include "MonkeComputer/shared/ViewLib/View.hpp"

DECLARE_CLASS_CODEGEN(MyMod, MyView, GorillaUI::Components::View,
    DECLARE_OVERRIDE_METHOD(void, DidActivate, il2cpp_utils::FindMethodUnsafe("GorillaUI::Components", "View", "DidActivate", 0));
    DECLARE_OVERRIDE_METHOD(void, OnKeyPressed, il2cpp_utils::FindMethodUnsafe("GorillaUI::Components", "View", "OnKeyPressed", 1), int key);
)