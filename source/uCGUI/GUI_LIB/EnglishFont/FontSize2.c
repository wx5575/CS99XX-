/****************************************************************************** 
 *  项目名称 :                      
 *                                                               
 *  项目功能 :  
 *                                                                          
 *  应用软件 :                                                 
 *                                                                       
 *  版    本 :  
 *                                                          
 *  硬    件 :  
 *                                                                
 *  创建时间 :  
 *               
 *  编    写 :             
 *               
 *  附    注 :                                                                 
 *                                                                                     
 *                                                                                           
******************************************************************************/ 

/******************************************************************************
 *                          本文件所引用的头文件
******************************************************************************/ 
 
#include "Font_DIY.h"

/******************************************************************************
 *                            本文件内部宏定义
******************************************************************************/ 

#ifndef GUI_FLASH
   #define GUI_FLASH 
#endif

/******************************************************************************
 *                       本文件所定义的静态全局变量
******************************************************************************/ 

/******************************************************************************/


//'V'
static GUI_FLASH  const unsigned char acFontSize2_0056[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0x7E,0xFC,0x00,0x7E,0xFC,0x00,0x7E,0x7E,0x00,
0xFC,0x7E,0x00,0xFC,0x7E,0x00,0xFC,0x3F,0x01,0xF8,0x3F,0x01,0xF8,0x1F,0x01,0xF0,
0x1F,0x83,0xF0,0x1F,0x83,0xF0,0x0F,0x83,0xE0,0x0F,0xC7,0xE0,0x0F,0xC7,0xE0,0x07,
0xC7,0xC0,0x07,0xEF,0xC0,0x07,0xEF,0xC0,0x03,0xEF,0x80,0x03,0xFF,0x80,0x03,0xFF,
0x80,0x01,0xFF,0x00,0x01,0xFF,0x00,0x01,0xFF,0x00,0x00,0xFE,0x00,0x00,0xFE,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
//'k'
static GUI_FLASH  const unsigned char acFontSize2_006B[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x1F,0x00,0x00,0x1F,0x00,0x00,0x1F,0x00,
0x00,0x1F,0x00,0x00,0x1F,0x00,0x00,0x1F,0x0F,0xE0,0x1F,0x1F,0xC0,0x1F,0x1F,0x80,
0x1F,0x3F,0x00,0x1F,0x7E,0x00,0x1F,0x7E,0x00,0x1F,0xFC,0x00,0x1F,0xF8,0x00,0x1F,
0xFC,0x00,0x1F,0xFC,0x00,0x1F,0xFE,0x00,0x1F,0xFE,0x00,0x1F,0xBF,0x00,0x1F,0x3F,
0x00,0x1F,0x1F,0x80,0x1F,0x1F,0x80,0x1F,0x0F,0xC0,0x1F,0x0F,0xC0,0x1F,0x07,0xE0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
//'m'
static GUI_FLASH  const unsigned char acFontSize2_006D[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x3C,0xFE,0x0F,0xE0,0x3D,0xFF,0xBF,0xF0,0x3F,0xFF,0xFF,0xF8,
0x3F,0xFF,0xFF,0xF8,0x3F,0xDF,0xFB,0xF8,0x3F,0x0F,0xE1,0xF8,0x3F,0x07,0xE0,0xF8,
0x3F,0x07,0xE0,0xF8,0x3E,0x07,0xC0,0xF8,0x3E,0x07,0xC0,0xF8,0x3E,0x07,0xC0,0xF8,
0x3E,0x07,0xC0,0xF8,0x3E,0x07,0xC0,0xF8,0x3E,0x07,0xC0,0xF8,0x3E,0x07,0xC0,0xF8,
0x3E,0x07,0xC0,0xF8,0x3E,0x07,0xC0,0xF8,0x3E,0x07,0xC0,0xF8,0x3E,0x07,0xC0,0xF8,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00
};
//'A'
static GUI_FLASH  const unsigned char acFontSize2_0041[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0xFE,0x00,0x01,0xFF,0x00,0x01,0xFF,0x00,0x03,0xFF,
0x00,0x03,0xFF,0x80,0x03,0xFF,0x80,0x03,0xEF,0x80,0x07,0xEF,0xC0,0x07,0xEF,0xC0,
0x07,0xC7,0xC0,0x0F,0xC7,0xE0,0x0F,0xC7,0xE0,0x0F,0x83,0xE0,0x1F,0x83,0xF0,0x1F,
0x83,0xF0,0x1F,0xFF,0xF0,0x3F,0xFF,0xF8,0x3F,0xFF,0xF8,0x3F,0xFF,0xF8,0x7E,0x00,
0xFC,0x7E,0x00,0xFC,0x7E,0x00,0xFC,0xFC,0x00,0x7E,0xFC,0x00,0x7E,0xFC,0x00,0x7E,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};
//'S'
static GUI_FLASH  const unsigned char acFontSize2_0053[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0x00,0x0F,0xFF,0x80,0x1F,0xFF,0xC0,0x3F,0xFF,
0xE0,0x3F,0xCF,0xF0,0x3F,0x03,0xF0,0x3E,0x03,0xF0,0x3F,0x01,0xF0,0x3F,0x80,0x00,
0x3F,0xF8,0x00,0x1F,0xFF,0x00,0x0F,0xFF,0xC0,0x07,0xFF,0xE0,0x01,0xFF,0xF0,0x00,
0x1F,0xF8,0x00,0x03,0xF8,0x7C,0x01,0xF8,0x7E,0x00,0xF8,0x7E,0x01,0xF8,0x7F,0x01,
0xF8,0x3F,0xC7,0xF8,0x3F,0xFF,0xF0,0x1F,0xFF,0xF0,0x0F,0xFF,0xC0,0x03,0xFF,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};
/******************************************************************************/
/******************************************************************************/

static GUI_FLASH   const GUI_CHARINFO GUI_FontSize2_CharInfo[] = {
    // 'V'
	{  FONT_SIZE2_CAPITAL_XSIZE,  FONT_SIZE2_CAPITAL_XDIST,  FONT_SIZE2_CAPITAL_BYTES_PER_LINE, (const unsigned char *)acFontSize2_0056 },
	// 'k'
	{  FONT_SIZE2_LOWERCASE_XSIZE,  FONT_SIZE2_LOWERCASE_XDIST,  FONT_SIZE2_LOWERCASE_BYTES_PER_LINE, (const unsigned char *)acFontSize2_006B },
	// 'm'
	{  32,                          32,                          4,                                   (const unsigned char *)acFontSize2_006D },
	// 'A'
	{  FONT_SIZE2_CAPITAL_XSIZE,  FONT_SIZE2_CAPITAL_XDIST,  FONT_SIZE2_CAPITAL_BYTES_PER_LINE, (const unsigned char *)acFontSize2_0041 },
	// 'S'
	{  FONT_SIZE2_CAPITAL_XSIZE,  FONT_SIZE2_CAPITAL_XDIST,  FONT_SIZE2_CAPITAL_BYTES_PER_LINE, (const unsigned char *)acFontSize2_0053 },
};
 	    	
/******************************************************************************/
/******************************************************************************/

// 'S'
static GUI_FLASH  const GUI_FONT_PROP GUI_FontSize2_Propa5= {
      0x0053, 
      0x0053, 
      &GUI_FontSize2_CharInfo[4], 
      (const GUI_FONT_PROP *)0//&GUI_FontSize2_Propa6
};
// 'A'
static GUI_FLASH  const GUI_FONT_PROP GUI_FontSize2_Propa4= {
      0x0041, 
      0x0041, 
      &GUI_FontSize2_CharInfo[3], 
      (const GUI_FONT_PROP *)&GUI_FontSize2_Propa5
};
// 'm'
static GUI_FLASH  const GUI_FONT_PROP GUI_FontSize2_Propa3= {
      0x006D, 
      0x006D, 
      &GUI_FontSize2_CharInfo[2], 
      (const GUI_FONT_PROP *)&GUI_FontSize2_Propa4
};
// 'k'
static GUI_FLASH  const GUI_FONT_PROP GUI_FontSize2_Propa2= {
      0x006B, 
      0x006B, 
      &GUI_FontSize2_CharInfo[1], 
      (const GUI_FONT_PROP *)&GUI_FontSize2_Propa3
};
// 'V'
static GUI_FLASH  const GUI_FONT_PROP GUI_FontSize2_Propa1= {
      0x0056, 
      0x0056, 
      &GUI_FontSize2_CharInfo[0], 
      (const GUI_FONT_PROP *)&GUI_FontSize2_Propa2
};

/******************************************************************************/
/******************************************************************************/

/* Arial字体 粗体 一号  */
GUI_FLASH const GUI_FONT GUI_FontSize2 = {
      GUI_FONTTYPE_PROP_SJIS, 
      FONT_SIZE2_YSIZE, 
      FONT_SIZE2_YDIST, 
      1,  
      1,  
      (void GUI_FLASH *)&GUI_FontSize2_Propa1
};

/******************************************************************************/
/******************************************************************************
 *                             END  OF  FILE                                                                          
******************************************************************************/

