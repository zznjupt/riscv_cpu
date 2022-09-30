#include <am.h>
#include <nemu.h>
#include <klib.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

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
  uint16_t width_  = (uint16_t)(info >> 16);
  uint16_t height_ = (uint16_t)(info & 0xffff);
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = width_, .height = height_,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
  uint32_t width   = inl(VGACTL_ADDR) >> 16;
  uint32_t *pixels = (uint32_t *)ctl->pixels;
  int i = 0;
  for(int y0 = y; y0 < y + h; y0++)
    for(int x0 = x; x0 <x+w; x0++, i++)
      outl(FB_ADDR + 4*y0 * width + 4*x0, pixels[i]);
  if(ctl->sync) outl(SYNC_ADDR, 1);
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
