#pragma once

#include <stdint.h>
#include <stdbool.h>

enum // PUSHBUTTONS
{
	// reserved
	PB_RES_1,
	PB_RES_2,
	PB_RES_3,
	PB_RES_4,
	PB_RES_5,
	PB_RES_6,
	PB_RES_7,
	PB_RES_8,

	// POSITION EDITOR
	PB_POSED_POS_UP,
	PB_POSED_POS_DOWN,
	PB_POSED_INS,
	PB_POSED_PATT_UP,
	PB_POSED_PATT_DOWN,
	PB_POSED_DEL,
	PB_POSED_LEN_UP,
	PB_POSED_LEN_DOWN,
	PB_POSED_REP_UP,
	PB_POSED_REP_DOWN,

	// SONG/PATTERN
	PB_BPM_UP,
	PB_BPM_DOWN,
	PB_SPEED_UP,
	PB_SPEED_DOWN,
	PB_EDITADD_UP,
	PB_EDITADD_DOWN,
	PB_PATT_UP,
	PB_PATT_DOWN,
	PB_PATTLEN_UP,
	PB_PATTLEN_DOWN,
	PB_PATT_EXPAND,
	PB_PATT_SHRINK,

	// LOGO
	PB_LOGO,
	PB_BADGE,

	// MAIN MENU
	PB_ABOUT,
	PB_NIBBLES,
	PB_KILL,
	PB_TRIM,
	PB_EXTEND_VIEW,
	PB_TRANSPOSE,
	PB_INST_ED_EXT,
	PB_SMP_ED_EXT,
	PB_ADV_EDIT,
	PB_ADD_CHANNELS,
	PB_SUB_CHANNELS,
	PB_PLAY_SONG,
	PB_PLAY_PATT,
	PB_STOP,
	PB_RECORD_SONG,
	PB_RECORD_PATT,
	PB_DISK_OP,
	PB_INST_ED,
	PB_SMP_ED,
	PB_CONFIG,
	PB_HELP,
	PB_EXIT_EXT_PATT,

	// INSTRUMENT SWITCHER
	PB_RANGE1,
	PB_RANGE2,
	PB_RANGE3,
	PB_RANGE4,
	PB_RANGE5,
	PB_RANGE6,
	PB_RANGE7,
	PB_RANGE8,
	PB_RANGE9,
	PB_RANGE10,
	PB_RANGE11,
	PB_RANGE12,
	PB_RANGE13,
	PB_RANGE14,
	PB_RANGE15,
	PB_RANGE16,
	PB_SWAP_BANK,
	PB_SAMPLE_LIST_UP,
	PB_SAMPLE_LIST_DOWN,

	// NIBBLES SCREEN
	PB_NIBBLES_PLAY,
	PB_NIBBLES_HELP,
	PB_NIBBLES_HIGHS,
	PB_NIBBLES_EXIT,

	// ADVANCED EDIT
	PB_REMAP_TRACK,
	PB_REMAP_PATTERN,
	PB_REMAP_SONG,
	PB_REMAP_BLOCK,

	// ABOUT SCREEN
	PB_EXIT_ABOUT,

	// HELP SCREEN
	PB_HELP_EXIT,
	PB_HELP_SCROLL_UP,
	PB_HELP_SCROLL_DOWN,

	// PATTERN EDITOR
	PB_CHAN_SCROLL_LEFT,
	PB_CHAN_SCROLL_RIGHT,

	// TRANSPOSE
	PB_TRANSP_CUR_INS_TRK_UP,
	PB_TRANSP_CUR_INS_TRK_DN,
	PB_TRANSP_CUR_INS_TRK_12UP,
	PB_TRANSP_CUR_INS_TRK_12DN,
	PB_TRANSP_ALL_INS_TRK_UP,
	PB_TRANSP_ALL_INS_TRK_DN,
	PB_TRANSP_ALL_INS_TRK_12UP,
	PB_TRANSP_ALL_INS_TRK_12DN,
	PB_TRANSP_CUR_INS_PAT_UP,
	PB_TRANSP_CUR_INS_PAT_DN,
	PB_TRANSP_CUR_INS_PAT_12UP,
	PB_TRANSP_CUR_INS_PAT_12DN,
	PB_TRANSP_ALL_INS_PAT_UP,
	PB_TRANSP_ALL_INS_PAT_DN,
	PB_TRANSP_ALL_INS_PAT_12UP,
	PB_TRANSP_ALL_INS_PAT_12DN,
	PB_TRANSP_CUR_INS_SNG_UP,
	PB_TRANSP_CUR_INS_SNG_DN,
	PB_TRANSP_CUR_INS_SNG_12UP,
	PB_TRANSP_CUR_INS_SNG_12DN,
	PB_TRANSP_ALL_INS_SNG_UP,
	PB_TRANSP_ALL_INS_SNG_DN,
	PB_TRANSP_ALL_INS_SNG_12UP,
	PB_TRANSP_ALL_INS_SNG_12DN,
	PB_TRANSP_CUR_INS_BLK_UP,
	PB_TRANSP_CUR_INS_BLK_DN,
	PB_TRANSP_CUR_INS_BLK_12UP,
	PB_TRANSP_CUR_INS_BLK_12DN,
	PB_TRANSP_ALL_INS_BLK_UP,
	PB_TRANSP_ALL_INS_BLK_DN,
	PB_TRANSP_ALL_INS_BLK_12UP,
	PB_TRANSP_ALL_INS_BLK_12DN,

	// SAMPLE EDITOR
	PB_SAMP_SCROLL_LEFT,
	PB_SAMP_SCROLL_RIGHT,
	PB_SAMP_PNOTE_UP,
	PB_SAMP_PNOTE_DOWN,
	PB_SAMP_STOP,
	PB_SAMP_PWAVE,
	PB_SAMP_PRANGE,
	PB_SAMP_PDISPLAY,
	PB_SAMP_SHOW_RANGE,
	PB_SAMP_RANGE_ALL,
	PB_SAMP_CLR_RANGE,
	PB_SAMP_ZOOM_OUT,
	PB_SAMP_SHOW_ALL,
	PB_SAMP_SAVE_RNG,
	PB_SAMP_CUT,
	PB_SAMP_COPY,
	PB_SAMP_PASTE,
	PB_SAMP_CROP,
	PB_SAMP_VOLUME,
	PB_SAMP_XFADE,
	PB_SAMP_EXIT,
	PB_SAMP_CLEAR,
	PB_SAMP_MIN,
	PB_SAMP_REPEAT_UP,
	PB_SAMP_REPEAT_DOWN,
	PB_SAMP_REPLEN_UP,
	PB_SAMP_REPLEN_DOWN,

	// SAMPLE EDITOR EXTENSION
	PB_SAMP_EXT_CLEAR_COPYBUF,
	PB_SAMP_EXT_CONV,
	PB_SAMP_EXT_ECHO,
	PB_SAMP_EXT_BACKWARDS,
	PB_SAMP_EXT_CONV_W,
	PB_SAMP_EXT_MORPH,
	PB_SAMP_EXT_COPY_INS,
	PB_SAMP_EXT_COPY_SMP,
	PB_SAMP_EXT_XCHG_INS,
	PB_SAMP_EXT_XCHG_SMP,
	PB_SAMP_EXT_RESAMPLE,
	PB_SAMP_EXT_MIX_SAMPLE,

	// INSTRUMENT EDITOR
	PB_INST_VDEF1,
	PB_INST_VDEF2,
	PB_INST_VDEF3,
	PB_INST_VDEF4,
	PB_INST_VDEF5,
	PB_INST_VDEF6,
	PB_INST_PDEF1,
	PB_INST_PDEF2,
	PB_INST_PDEF3,
	PB_INST_PDEF4,
	PB_INST_PDEF5,
	PB_INST_PDEF6,
	PB_INST_VP_ADD,
	PB_INST_VP_DEL,
	PB_INST_VS_UP,
	PB_INST_VS_DOWN,
	PB_INST_VREPS_UP,
	PB_INST_VREPS_DOWN,
	PB_INST_VREPE_UP,
	PB_INST_VREPE_DOWN,
	PB_INST_PP_ADD,
	PB_INST_PP_DEL,
	PB_INST_PS_UP,
	PB_INST_PS_DOWN,
	PB_INST_PREPS_UP,
	PB_INST_PREPS_DOWN,
	PB_INST_PREPE_UP,
	PB_INST_PREPE_DOWN,
	PB_INST_VOL_DOWN,
	PB_INST_VOL_UP,
	PB_INST_PAN_DOWN,
	PB_INST_PAN_UP,
	PB_INST_FTUNE_DOWN,
	PB_INST_FTUNE_UP,
	PB_INST_FADEOUT_DOWN,
	PB_INST_FADEOUT_UP,
	PB_INST_VIBSPEED_DOWN,
	PB_INST_VIBSPEED_UP,
	PB_INST_VIBDEPTH_DOWN,
	PB_INST_VIBDEPTH_UP,
	PB_INST_VIBSWEEP_DOWN,
	PB_INST_VIBSWEEP_UP,
	PB_INST_EXIT,
	PB_INST_OCT_UP,
	PB_INST_HALFTONE_UP,
	PB_INST_OCT_DOWN,
	PB_INST_HALFTONE_DOWN,

	// INSTRUMENT EDITOR EXTENSION
	PB_INST_EXT_MIDI_CH_DOWN,
	PB_INST_EXT_MIDI_CH_UP,
	PB_INST_EXT_MIDI_PRG_DOWN,
	PB_INST_EXT_MIDI_PRG_UP,
	PB_INST_EXT_MIDI_BEND_DOWN,
	PB_INST_EXT_MIDI_BEND_UP,

	// TRIM SCREEN
	PB_TRIM_CALC,
	PB_TRIM_TRIM,

	// CONFIG LEFT PANEL
	PB_CONFIG_RESET,
	PB_CONFIG_LOAD,
	PB_CONFIG_SAVE,
	PB_CONFIG_EXIT,

	// CONFIG AUDIO
	PB_CONFIG_AUDIO_RESCAN,
	PB_CONFIG_AUDIO_OUTPUT_DOWN,
	PB_CONFIG_AUDIO_OUTPUT_UP,
	PB_CONFIG_AUDIO_INPUT_DOWN,
	PB_CONFIG_AUDIO_INPUT_UP,
	PB_CONFIG_AMP_DOWN,
	PB_CONFIG_AMP_UP,
	PB_CONFIG_MASTVOL_DOWN,
	PB_CONFIG_MASTVOL_UP,

	// CONFIG LAYOUT
	PB_CONFIG_PAL_R_DOWN,
	PB_CONFIG_PAL_R_UP,
	PB_CONFIG_PAL_G_DOWN,
	PB_CONFIG_PAL_G_UP,
	PB_CONFIG_PAL_B_DOWN,
	PB_CONFIG_PAL_B_UP,
	PB_CONFIG_PAL_CONT_DOWN,
	PB_CONFIG_PAL_CONT_UP,

	// CONFIG MISCELLANEOUS
	PB_CONFIG_TOGGLE_FULLSCREEN,
	PB_CONFIG_QUANTIZE_UP,
	PB_CONFIG_QUANTIZE_DOWN,
	PB_CONFIG_MIDICHN_UP,
	PB_CONFIG_MIDICHN_DOWN,
	PB_CONFIG_MIDITRANS_UP,
	PB_CONFIG_MIDITRANS_DOWN,
	PB_CONFIG_MIDISENS_DOWN,
	PB_CONFIG_MIDISENS_UP,

#ifdef HAS_MIDI
	// CONFIG MIDI
	PB_CONFIG_MIDI_INPUT_DOWN,
	PB_CONFIG_MIDI_INPUT_UP,
#endif

	// DISK OP.
	PB_DISKOP_SAVE,
	PB_DISKOP_DELETE,
	PB_DISKOP_RENAME,
	PB_DISKOP_MAKEDIR,
	PB_DISKOP_REFRESH,
	PB_DISKOP_SET_PATH,
	PB_DISKOP_SHOW_ALL,
	PB_DISKOP_EXIT,
	PB_DISKOP_ROOT,
	PB_DISKOP_PARENT,
#ifdef _WIN32
	PB_DISKOP_DRIVE1,
	PB_DISKOP_DRIVE2,
	PB_DISKOP_DRIVE3,
	PB_DISKOP_DRIVE4,
	PB_DISKOP_DRIVE5,
	PB_DISKOP_DRIVE6,
	PB_DISKOP_DRIVE7,
	PB_DISKOP_DRIVE8,
#endif
	PB_DISKOP_LIST_UP,
	PB_DISKOP_LIST_DOWN,

	// WAV RENDERER
	PB_WAV_RENDER,
	PB_WAV_EXIT,
	PB_WAV_FREQ_UP,
	PB_WAV_FREQ_DOWN,
	PB_WAV_AMP_UP,
	PB_WAV_AMP_DOWN,
	PB_WAV_START_UP,
	PB_WAV_START_DOWN,
	PB_WAV_END_UP,
	PB_WAV_END_DOWN,

	NUM_PUSHBUTTONS
};

enum
{
	PUSHBUTTON_UNPRESSED = 0,
	PUSHBUTTON_PRESSED   = 1
};

#define RADIOBUTTON_W 11
#define RADIOBUTTON_H 11
#define RADIOBUTTON_STATES 3

// amount of frames to wait
#define BUTTON_DOWN_DELAY 16

// font #1/#2 special characters (used for buttons)
#define ARROW_UP_STRING "\x05"
#define ARROW_DOWN_STRING "\x03"
#define ARROW_LEFT_STRING "\x1E"
#define ARROW_RIGHT_STRING "\x1F"
#define SMALL_1_STRING "\x08"
#define SMALL_2_STRING "\x09"
#define SMALL_3_STRING "\x0A"
#define SMALL_4_STRING "\x0B"
#define SMALL_5_STRING "\x0C"
#define SMALL_6_STRING "\x0D"

typedef struct pushButton_t // DO NOT TOUCH!
{
	uint16_t x, y, w, h;
	uint8_t preDelay, delayFrames;
	char *caption, *caption2;
	void (*callbackFuncOnDown)(void);
	void (*callbackFuncOnUp)(void);
	uint8_t state;
	bool bitmapFlag, visible;
	const uint8_t *bitmapUnpressed;
	const uint8_t *bitmapPressed;
} pushButton_t;

void drawPushButton(uint16_t pushButtonID);
void showPushButton(uint16_t pushButtonID);
void hidePushButton(uint16_t pushButtonID);
void handlePushButtonsWhileMouseDown(void);
bool testPushButtonMouseDown(void);
int16_t testPushButtonMouseRelease(bool runCallback);
