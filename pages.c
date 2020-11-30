static
void page1(void){

  Pixmap pixmap = XCreatePixmap(dsp, win, NX, NY, DefaultDepth(dsp,screen_num));
  XSetForeground(dsp, gc, 0xffffffff);
  XFillRectangle(dsp, pixmap, gc, 0, 0, NX, NY);
  XSetForeground(dsp, gc, 0x00A9A9A9);
  char *title = "Validation tools for oceanography data  SMHI";
  XDrawString(dsp, pixmap, gc, 175 , 400  , title,lenstring(title));
  XSetForeground(dsp, gc, 0x00ffff00);
  XFillRectangle(dsp, pixmap, gc, NX / 4, NY / 10, NX / 2, NY / 10);
  char *title1 = "SMHI VALIDATION TOOLS";
  XSetForeground(dsp, gc, 0x0);
  XDrawString(dsp, pixmap, gc, NX / 4 + NX / 8 , NY / 10 + NY /20,title1,lenstring(title1));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x000000ff);
  char pageinfo1[2] = "1";
  XDrawString(dsp, pixmap, gc, NX /2, NY - 20  ,pageinfo1 , 1);
  XCopyArea (dsp, pixmap, win, gc,0, 0,NX, NY,0, 0);
  XFreePixmap(dsp,pixmap);
}


static
void page2(void){

  Pixmap pixmap = XCreatePixmap(dsp, win, NX, NY, DefaultDepth(dsp,screen_num));
  XSetForeground(dsp, gc, 0xffffffff);
  XFillRectangle(dsp, pixmap, gc, 0, 0, NX, NY);
  XSetForeground(dsp, gc, 0x00A9A9A9);
  char *title = "Validation tools for oceanography data  SMHI";
  XDrawString(dsp, pixmap, gc, 175 , 400  , title,lenstring(title));
  XSetForeground(dsp, gc, 0x00ffff00);
  XFillRectangle(dsp, pixmap, gc, NX / 4, NY / 10, NX / 2, NY / 10);
  char *title1 = "SMHI VALIDATION TOOLS";
  XSetForeground(dsp, gc, 0x0);
  XDrawString(dsp, pixmap, gc, NX / 4 + NX / 8 , NY / 10 + NY /20,title1,lenstring(title1));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x000000ff);
  char pageinfo1[2] = "2";
  XDrawString(dsp, pixmap, gc, NX /2, NY - 20  ,pageinfo1 , 1);
  XCopyArea (dsp, pixmap, win, gc,0, 0,NX, NY,0, 0);
  XFreePixmap(dsp,pixmap);
}

static
void page3(void){

  Pixmap pixmap = XCreatePixmap(dsp, win, NX, NY, DefaultDepth(dsp,screen_num));
  XSetForeground(dsp, gc, 0xffffffff);
  XFillRectangle(dsp, pixmap, gc, 0, 0, NX, NY);
  XSetForeground(dsp, gc, 0x00A9A9A9);
  char *title = "Validation tools for oceanography data  SMHI";
  XDrawString(dsp, pixmap, gc, 175 , 400  , title,lenstring(title));
  XSetForeground(dsp, gc, 0x00ffff00);
  XFillRectangle(dsp, pixmap, gc, NX / 4, NY / 10, NX / 2, NY / 10);
  char *title1 = "SMHI VALIDATION TOOLS";
  XSetForeground(dsp, gc, 0x0);
  XDrawString(dsp, pixmap, gc, NX / 4 + NX / 8 , NY / 10 + NY /20,title1,lenstring(title1));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x000000ff);
  char pageinfo1[2] = "3";
  XDrawString(dsp, pixmap, gc, NX /2, NY - 20  ,pageinfo1 , 1);
  XCopyArea (dsp, pixmap, win, gc,0, 0,NX, NY,0, 0);
  XFreePixmap(dsp,pixmap);
}

static
void page4(void){

  Pixmap pixmap = XCreatePixmap(dsp, win, NX, NY, DefaultDepth(dsp,screen_num));
  XSetForeground(dsp, gc, 0xffffffff);
  XFillRectangle(dsp, pixmap, gc, 0, 0, NX, NY);
  XSetForeground(dsp, gc, 0x00A9A9A9);
  char *title = "Validation tools for oceanography data  SMHI";
  XDrawString(dsp, pixmap, gc, 175 , 400  , title,lenstring(title));
  XSetForeground(dsp, gc, 0x00ffff00);
  XFillRectangle(dsp, pixmap, gc, NX / 4, NY / 10, NX / 2, NY / 10);
  char *title1 = "SMHI VALIDATION TOOLS";
  XSetForeground(dsp, gc, 0x0);
  XDrawString(dsp, pixmap, gc, NX / 4 + NX / 8 , NY / 10 + NY /20,title1,lenstring(title1));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x000000ff);
  char pageinfo1[2] = "4";
  XDrawString(dsp, pixmap, gc, NX /2, NY - 20  ,pageinfo1 , 1);
  XCopyArea (dsp, pixmap, win, gc,0, 0,NX, NY,0, 0);
  XFreePixmap(dsp,pixmap);
}



