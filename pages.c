void page1(void){
  XClearWindow(dsp,win);
  XSetForeground(dsp, gc, 0x00ffff00);
  XFillRectangle(dsp, win, gc, 200, 100, 400, 100);
  XFlush(dsp);
  char *title1 = "SMHI VALIDATION TOOLS";
  XSetForeground(dsp, gc, 0x0);
  XDrawString(dsp, win, gc, 275 , 150,title1,lenstring(title1));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x00A9A9A9);
  char *title = "Validation tools for oceanography data  SMHI";
  XDrawString(dsp, win, gc, 175 , 400  , title,lenstring(title));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x000000ff);
  char *pageinfo = "1";
  XDrawString(dsp, win, gc, 380 , 780  ,pageinfo , lenstring(pageinfo));
  XFlush(dsp);
  return;
}

void page2(void){
  XClearWindow(dsp,win);
  char *line1 = "We started developing our tools.";
  XDrawString(dsp, win, gc, 100 , 100  , line1, lenstring(line1));
  XFlush(dsp);
  char *line2 = "SSHVALIDATION and COCEAN";
  XDrawString(dsp, win, gc, 100 , 200  , line2, lenstring(line2));
  XFlush(dsp);
  char *line3 = "It is based on python 2.7 and using matplotlib for figures";
  XDrawString(dsp, win, gc, 100 , 300  , line3, lenstring(line3));
  XFlush(dsp);
  char *line4 = "The configuration file is in json data format.";
  XDrawString(dsp, win, gc, 100 , 400  , line4, lenstring(line4));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x000000ff);
  char *page = "2";
  XDrawString(dsp, win, gc, 380 , 780  ,page , lenstring(page));
  XFlush(dsp);
  return;
}

void page3(void){
  XClearWindow(dsp,win);
  char *title1 = "Welcome to page 3";
  XSetForeground(dsp, gc, 0x0);
  XDrawString(dsp, win, gc, 275 , 150,title1,lenstring(title1));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x00A9A9A9);
  char *title = "To be added later";
  XDrawString(dsp, win, gc, 175 , 400  , title,lenstring(title));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x000000ff);
  char *page = "3";
  XDrawString(dsp, win, gc, 380 , 780  ,page , lenstring(page));
  XFlush(dsp);
  return;
}

void page4(void){
  XClearWindow(dsp,win);
  char *title1 = "Welcome to page 4";
  XSetForeground(dsp, gc, 0x0);
  XDrawString(dsp, win, gc, 275 , 150,title1,lenstring(title1));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x00A9A9A9);
  char *title = "To be added later";
  XDrawString(dsp, win, gc, 175 , 400  , title,lenstring(title));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x000000ff);
  char *page = "4";
  XDrawString(dsp, win, gc, 380 , 780  ,page , lenstring(page));
  XFlush(dsp);
  return;
}

void page5(void){
  XClearWindow(dsp,win);
  char *title1 = "Welcome to page 5";
  XSetForeground(dsp, gc, 0x0);
  XDrawString(dsp, win, gc, 275 , 150,title1,lenstring(title1));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x00A9A9A9);
  char *title = "To be added later";
  XDrawString(dsp, win, gc, 175 , 400  , title,lenstring(title));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x000000ff);
  char *page = "5";
  XDrawString(dsp, win, gc, 380 , 780  ,page , lenstring(page));
  XFlush(dsp);
  return;
}

void page6(void){
  XClearWindow(dsp,win);
  char *title1 = "Welcome to page 6";
  XSetForeground(dsp, gc, 0x0);
  XDrawString(dsp, win, gc, 275 , 150,title1,lenstring(title1));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x00A9A9A9);
  char *title = "To be added later";
  XDrawString(dsp, win, gc, 175 , 400  , title,lenstring(title));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x000000ff);
  char *page = "6";
  XDrawString(dsp, win, gc, 380 , 780  ,page , lenstring(page));
  XFlush(dsp);
  return;
}

void page7(void){
  XClearWindow(dsp,win);
  char *title1 = "Welcome to page 7";
  XSetForeground(dsp, gc, 0x0);
  XDrawString(dsp, win, gc, 275 , 150,title1,lenstring(title1));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x00A9A9A9);
  char *title = "To be added later";
  XDrawString(dsp, win, gc, 175 , 400  , title,lenstring(title));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x000000ff);
  char *page = "7";
  XDrawString(dsp, win, gc, 380 , 780  ,page , lenstring(page));
  XFlush(dsp);
  return;
}

void page8(void){
  XClearWindow(dsp,win);
  char *title1 = "Welcome to page 8";
  XSetForeground(dsp, gc, 0x0);
  XDrawString(dsp, win, gc, 275 , 150,title1,lenstring(title1));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x00A9A9A9);
  char *title = "To be added later";
  XDrawString(dsp, win, gc, 175 , 400  , title,lenstring(title));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x000000ff);
  char *page = "8";
  XDrawString(dsp, win, gc, 380 , 780  ,page , lenstring(page));
  XFlush(dsp);
  return;
}

void page9(void){
  XClearWindow(dsp,win);
  char *title1 = "Welcome to page 9";
  XSetForeground(dsp, gc, 0x0);
  XDrawString(dsp, win, gc, 275 , 150,title1,lenstring(title1));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x00A9A9A9);
  char *title = "To be added later";
  XDrawString(dsp, win, gc, 175 , 400  , title,lenstring(title));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x000000ff);
  char *page = "9";
  XDrawString(dsp, win, gc, 380 , 780  ,page , lenstring(page));
  XFlush(dsp);
  return;
}

void page10(void){
  XClearWindow(dsp,win);
  char *title1 = "Welcome to page 10";
  XSetForeground(dsp, gc, 0x0);
  XDrawString(dsp, win, gc, 275 , 150,title1,lenstring(title1));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x00A9A9A9);
  char *title = "To be added later";
  XDrawString(dsp, win, gc, 175 , 400  , title,lenstring(title));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x000000ff);
  char *page = "10";
  XDrawString(dsp, win, gc, 380 , 780  ,page , lenstring(page));
  XFlush(dsp);
  return;
}
