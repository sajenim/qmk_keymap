#pragma once

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 250

// Activate the modifier when another key is pressed and released while the mod-tap is held.
#define PERMISSIVE_HOLD

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// One Shot Keys
#define ONESHOT_TAP_TOGGLE 5
#define ONESHOT_TIMEOUT 5000

// Caps Word
#define CAPS_WORD_IDLE_TIMEOUT 5000

// Leader Key
#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 500

// Auto Shift
#define AUTO_SHIFT_TIMEOUT 200
#define AUTO_SHIFT_MODIFIERS
#define RETRO_SHIFT 500

