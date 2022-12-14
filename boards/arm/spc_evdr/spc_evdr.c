#include "lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif
#ifndef LV_ATTRIBUTE_IMG_CHIFFRE
#define LV_ATTRIBUTE_IMG_CHIFFRE
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_CHIFFRE uint8_t chiffre_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0xff, 0xff, 0xff, 0xff, 
  0xbf, 0xe5, 0xfb, 0x7f, 
  0xbd, 0xdd, 0xd6, 0xfd, 
  0xb8, 0xdc, 0xf2, 0x48, 
  0xbb, 0xdd, 0x56, 0xdb, 
  0x8c, 0xe5, 0x56, 0xdc, 
  0xff, 0xff, 0xff, 0xff, 
  0xfe, 0x7f, 0xfe, 0x7f, 
  0xf2, 0x49, 0x92, 0x4f, 
  0x93, 0xc9, 0x93, 0xc9, 
  0x9e, 0x7f, 0xfe, 0x79, 
  0xf2, 0x49, 0x92, 0x4f, 
  0x93, 0xc9, 0x93, 0xc9, 
  0x9e, 0x7f, 0xfe, 0x79, 
  0xf2, 0x49, 0x92, 0x4f, 
  0x93, 0xc9, 0x93, 0xc9, 
  0x9f, 0xff, 0xff, 0xf9, 
  0xfc, 0x41, 0x82, 0x3f, 
  0xfc, 0x41, 0x82, 0x3f, 
  0xff, 0xff, 0xff, 0xff, 
};

const lv_img_dsc_t chiffre_icon = {
  .header.always_zero = 0,
  .header.w = 32,
  .header.h = 20,
  .data_size = 89,
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .data = chiffre_map,
};
