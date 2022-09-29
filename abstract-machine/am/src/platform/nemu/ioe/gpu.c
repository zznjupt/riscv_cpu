#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

// void *memcpy_(void *out, const void *in, size_t n) {
//   char *cin  = (char* )in;
//   char *cout = (char* )out;
//   for(int i = 0; i < n; i++) cout[i] = cin[i];
//   return out; 
// }

void __am_gpu_init() {
  int i;
  int w = 400;  // TODO: get the correct width
  int h = 300;  // TODO: get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = 400, .height = 300,
    .vmemsz = 32
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  // int W = 400, H = 300;
  // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  // int x = ctl->x;
  // int y = ctl->y;
  // int w = ctl->w;
  // int h = ctl->h;
  // uint32_t* pixels = ctl->pixels;
  // int cp_len = sizeof(uint32_t)*(w < W-x? w : W-x);
  // for(int i = 0; i < h && y+i < H; i++) {
  //   memcpy_(&fb[(y+i) * W + x], pixels, cp_len);
  // }
  // if (ctl->sync) {
  //   outl(SYNC_ADDR, 1);
  // }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
