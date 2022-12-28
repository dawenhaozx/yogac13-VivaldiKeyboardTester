//
// NtReadFile Output Buffer record structures for this device.
//

typedef struct _KEYBOARD_INPUT_DATA {
    //
    // Unit number.  E.g., for \Device\KeyboardPort0 the unit is '0',
    // for \Device\KeyboardPort1 the unit is '1', and so on.
    //
    USHORT UnitId;
    //
    // The "make" scan code (key depression).
    //
    USHORT MakeCode;
    //
    // The flags field indicates a "break" (key release) and other
    // miscellaneous scan code information defined below.
    //
    USHORT Flags;
    USHORT Reserved;
    //
    // Device-specific additional information for the event.
    //
    ULONG ExtraInformation;

} KEYBOARD_INPUT_DATA, * PKEYBOARD_INPUT_DATA;

//
// Define the keyboard input data Flags.
//

#define KEY_MAKE  0
#define KEY_BREAK 1
#define KEY_E0    2
#define KEY_E1    4
#define KEY_TERMSRV_SET_LED 8
#define KEY_TERMSRV_SHADOW  0x10
#define KEY_TERMSRV_VKPACKET 0x20
#define KEY_RIM_VKEY 0x40
#define KEY_FROM_KEYBOARD_OVERRIDER 0x80
#define KEY_UNICODE_SEQUENCE_ITEM 0x100
#define KEY_UNICODE_SEQUENCE_END 0x200

#define KEY_TYPES (KEY_E0 | KEY_E1 | KEY_RIM_VKEY | KEY_FROM_KEYBOARD_OVERRIDER)

#define K_LCTRL     0x1D
#define K_LALT      0x38
#define K_LSHFT     0x2A

#define K_BACKSP    0xE
#define K_DELETE    0x53

#define K_UP        0x48
#define K_DOWN      0x50
#define K_LEFT      0x4B
#define K_RIGHT     0x4D

//ALL VIVALDI USES KEY_E0

//values from https://github.com/coreboot/chrome-ec/blob/1b359bdd91da15ea25aaffd0d940ff63b9d72bc5/include/keyboard_8042_sharedlib.h#L116
#define VIVALDI_BACK                0x6A
#define VIVALDI_FWD                 0x69
#define VIVALDI_REFRESH             0x67
#define VIVALDI_FULLSCREEN          0x11
#define VIVALDI_OVERVIEW            0x12
#define VIVALDI_SNAPSHOT            0x13
#define VIVALDI_BRIGHTNESSDN        0x14
#define VIVALDI_BRIGHTNESSUP        0x15
#define VIVALDI_KBD_BKLIGHT_DOWN    0x17
#define VIVALDI_KBD_BKLIGHT_UP      0x18
#define VIVALDI_KBD_BKLIGHT_TOGGLE  0x1e
#define VIVALDI_PLAYPAUSE           0x1A
#define VIVALDI_MUTE                0x20
#define VIVALDI_VOLDN               0x2e
#define VIVALDI_VOLUP               0x30