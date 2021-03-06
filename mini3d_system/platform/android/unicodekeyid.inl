// Copyright (c) <2011-2012> Daniel Peterson
// This file is part of Mini3D <www.mini3d.org>
// It is distributed under the MIT Software License <www.mini3d.org/license.php>

// Hex codes from WinUser.h (VK_**)

#ifdef __ANDROID__

static const unsigned int MINI3D_UKID_NOT_AVAILABLE = 0xFF000000;

enum UnicodeKeyId {
    UKID_NONE       		= 0,

	UKID_BACK				= 0x00000004,
	UKID_SPACE				= 0x0000003e,	

	UKID_0					= 0x00000007,
	UKID_1,
	UKID_2,
	UKID_3,
	UKID_4,
	UKID_5,
	UKID_6,
	UKID_7,
	UKID_8,
	UKID_9,

	UKID_NUMPAD_0			= 0x00000090,
	UKID_NUMPAD_1,
	UKID_NUMPAD_2,
	UKID_NUMPAD_3,
	UKID_NUMPAD_4,
	UKID_NUMPAD_5,
	UKID_NUMPAD_6,
	UKID_NUMPAD_7,
	UKID_NUMPAD_8,
	UKID_NUMPAD_9,
	
	UKID_NUMPAD_DIVIDE 		= 0x0000009a,
	UKID_NUMPAD_MULTIPLY,
	UKID_NUMPAD_SUBTRACT,
	UKID_NUMPAD_ADD,
	UKID_NUMPAD_DOT, 
	UKID_NUMPAD_COMMA,
	UKID_NUMPAD_ENTER,
	UKID_NUMPAD_EQUALS,
	
	UKID_NUM_LOCK 			= 0x0000008f,
	
	UKID_PAGE_UP 		    = 0x0000005c,
	UKID_PAGE_DOWN,
	
	UKID_HOME 			    = 0x0000007a,
	UKID_END,
	UKID_INSERT,

	UKID_DELETE 			= 0x00000070,
	
	UKID_BACKSPACE 		    = 0x00000043,	
	

	UKID_A					= 0x0000001d,
	UKID_B,
	UKID_C,
	UKID_D,
	UKID_E,
	UKID_F,
	UKID_G,
	UKID_H,
	UKID_I,
	UKID_J,
	UKID_K,
	UKID_L,
	UKID_M,
	UKID_N,
	UKID_O,
	UKID_P,
	UKID_Q,
	UKID_R,
	UKID_S,
	UKID_T,
	UKID_U,
	UKID_V,
	UKID_W,
	UKID_X,
	UKID_Y,
	UKID_Z,

    UKID_UP         		= 0x00000013,
    UKID_DOWN,
    UKID_LEFT,
    UKID_RIGHT,
    UKID_CENTER,								// D-PAD Center

    UKID_SHIFT				= 0x0000003b, 		// Left Shift
    UKID_ALT        		= 0x00000039, 		// Left Alt

    UKID_F1         		= 0x00000083,
    UKID_F2,
    UKID_F3,
    UKID_F4,
    UKID_F5,
    UKID_F6,
    UKID_F7,
    UKID_F8,
    UKID_F9,
    UKID_F10,
    UKID_F11,
    UKID_F12,
    
    // NOT AVAILABLE ON ANDROID
    UKID_CTRL       		= MINI3D_UKID_NOT_AVAILABLE + 0x00000000,
    
};

#endif
