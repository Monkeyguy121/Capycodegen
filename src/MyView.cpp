#include "MyView.hpp"
#include "MonkeComputer/shared/GorillaUI.hpp"
#include "MonkeComputer/shared/EKeyboardKey.hpp"

DEFINE_TYPE(MyMod, MyView);

void MyMod::MyView::DidActivate() {
    // This is called when your view is shown
    // Set the text displayed on the watch screen
    GorillaUI::Components::View::set_text(
        "<color=#ffff00>== TestMod ==</color>\n\n"
        "Option 1\n"
        "Option 2\n"
        "Option 3\n"
    );
}

void MyMod::MyView::OnKeyPressed(int key) {
    switch((GorillaUI::EKeyboardKey)key) {
        case GorillaUI::EKeyboardKey::Back:
            // Go back to the main watch menu
            GorillaUI::Components::View::ReturnToMainMenu();
            break;
        case GorillaUI::EKeyboardKey::Up:
            // handle up arrow
            break;
        case GorillaUI::EKeyboardKey::Down:
            // handle down arrow
            break;
        case GorillaUI::EKeyboardKey::Enter:
            // handle enter/confirm
            break;
        default:
            break;
    }
}