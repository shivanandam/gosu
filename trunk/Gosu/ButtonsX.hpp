#ifndef GOSU_BUTTONSMAC_HPP
#define GOSU_BUTTONSMAC_HPP

namespace Gosu
{
    //! Enumerates all the named button ids that can be used with Gosu::Input.
    //! This enumeration contains ids for non-character keyboard keys (kb*),
    //! mouse buttons and mouse wheel (ms*) and gamepad buttons (gp*).
    enum ButtonName
    {
        kbRangeBegin = 0x01,
        kbEscape = XK_Escape,
        kbF1 = XK_F1,
        kbF2 = XK_F2,
        kbF3 = XK_F3,
        kbF4 = XK_F4,
        kbF5 = XK_F5,
        kbF6 = XK_F6,
        kbF7 = XK_F7,
        kbF8 = XK_F8,
        kbF9 = XK_F9,
        kbF10 = XK_F10,
        kbF11 = XK_F11,
        kbF12 = XK_F12,
        kb1 = XK_1,
        kb2 = XK_2,
        kb3 = XK_3,
        kb4 = XK_4,
        kb5 = XK_5,
        kb6 = XK_6,
        kb7 = XK_7,
        kb8 = XK_8,
        kb9 = XK_9,
        kb0 = XK_0,
        kbTab = XK_Tab,
        kbReturn = XK_Return,
        kbSpace = XK_space,
        kbLeftShift = XK_Shift_L,
        kbRightShift = XK_Shift_R,
        kbLeftControl = XK_Control_L,
        kbRightControl = XK_Control_R,
        kbLeftAlt = XK_Alt_L,
        kbRightAlt = XK_Alt_R,
        kbLeftMeta = 0,
        kbRightMeta = 0,
        kbBackspace = XK_BackSpace,
        kbLeft = XK_Left,
        kbRight = XK_Right,
        kbUp = XK_Up,
        kbDown = XK_Down,
        kbHome = XK_Home,
        kbEnd = XK_End,
        kbInsert = XK_Insert,
        kbDelete = XK_Delete,
        kbPageUp = XK_Prior,
        kbPageDown = XK_Next,
        kbEnter = XK_KP_Enter,
        kbNumpad1 = XK_KP_1,
        kbNumpad2 = XK_KP_2,
        kbNumpad3 = XK_KP_3,
        kbNumpad4 = XK_KP_4,
        kbNumpad5 = XK_KP_5,
        kbNumpad6 = XK_KP_6,
        kbNumpad7 = XK_KP_7,
        kbNumpad8 = XK_KP_8,
        kbNumpad9 = XK_KP_9,
        kbNumpad0 = XK_KP_0,
        kbNumpadAdd = XK_KP_Add,
        kbNumpadSubtract = XK_KP_Subtract,
        kbNumpadMultiply = XK_KP_Multiply,
        kbNumpadDivide = XK_KP_Divide,
        kbRangeEnd = 0xff,
        
        msRangeBegin,
        msLeft = msRangeBegin,
        msRight,
        msMiddle,
        msWheelUp,
        msWheelDown,
        msRangeEnd,
        
        gpRangeBegin,
        gpLeft = gpRangeBegin,
        gpRight,
        gpUp,
        gpDown,
        gpButton0,
        gpButton1,
        gpButton2,
        gpButton3,
        gpButton4,
        gpButton5,
        gpButton6,
        gpButton7,
        gpButton8,
        gpButton9,
        gpButton10,
        gpButton11,
        gpButton12,
        gpButton13,
        gpButton14,
        gpButton15,
        gpRangeEnd = gpButton15,
        
        kbNum = kbRangeEnd - kbRangeBegin + 1,
        msNum = msRangeEnd - msRangeBegin + 1,
        gpNum = gpRangeEnd - gpRangeBegin + 1,
        
        numButtons = gpRangeEnd,
		noButton = 0xffffffff
    };
}

#endif
