#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t kbd_ = inl(KBD_ADDR);
  kbd->keydown = (kbd_ & KEYDOWN_MASK ? true : false);
  kbd->keycode = kbd_ & ~ KEYDOWN_MASK;
  
}
