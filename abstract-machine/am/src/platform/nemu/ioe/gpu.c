#include <am.h>
#include <nemu.h>
#include <klib.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

// void *memcpy_(void *out, const void *in, size_t n) {
//   char *cin  = (char* )in;
//   char *cout = (char* )out;
//   for(int i = 0; i < n; i++) cout[i] = cin[i];
//   return out; 
// }

void __am_gpu_init() {
  // int i;
  // int w = inl(VGACTL_ADDR) >> 16;  // TODO: get the correct width
  // int h = inl(VGACTL_ADDR) & 0xffff;  // TODO: get the correct height
  // printf("%d, %d\n", w, h);
  // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  // for (i = 0; i < w * h; i ++) fb[i] = i;
  // outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t info = inl(VGACTL_ADDR);
  uint16_t width  = (uint16_t)(info >> 16);
  uint16_t height = (uint16_t)(info & 0xffff);
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = width, .height = height,
    .vmemsz = 32
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  // int ww = inl(VGACTL_ADDR) >> 16;
  // int x = ctl->x;
  // int y = ctl->y;
  // uint32_t pixels = (uint32_t*) ctl->pixels;
  // int w = ctl->w;
  // int h = ctl->h;
  // uint32_t *fb = (uint32_t*)(uintptr_t)FB_ADDR; 
  // if (ctl->sync) {
  //       outl(SYNC_ADDR, 1);
  // }
  //   for(int i = 0; i < h; i++){
  //     for(int j = 0; j < w; j++){
  //       fb[(i+y) * ww + x + j] = pixels[ i * w + j];
  //     }
  // }
  if(ctl->sync) outl(SYNC_ADDR, 1);
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
