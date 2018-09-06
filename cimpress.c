#include<stdio.h>
#include<stdlib.h>
#include<X11/Xlib.h>
#include<X11/keysym.h>
#include<math.h>
#include<stdarg.h>
#include<time.h>

//-adobe-courier-medium-r-normal--25-180-100-100-m-150-iso10646-1

#define ArrayCount(a) (sizeof(a) / sizeof(a[0]))
#define StringArrayCount(a) (ArrayCount(a) -1)


typedef unsigned int  uint32;
typedef unsigned char uint8;


uint32 lenstring(char *str){
  if (str == NULL) return 0U;
  uint32 len = 0U;
  while (*str != '\0'){
    len++;
    str++;
  }
  return len;
}

void writetostring(char *buffer, int N, char *str,...){
  if (str == NULL) return;
  va_list vv;
  va_start(vv,str);
  char *tmp = buffer;
  int counter = 0;
  while(*str!='\0'){
    if (counter < N){
      *tmp = *str;
      tmp++;
    }
    counter++;
    str++;
  }
  while((str=va_arg(vv,char *)) != NULL){
    while(*str!='\0'){
      if (counter < N ){
	*tmp = *str;
        tmp++;
      }
      counter++;
      str++;
    }
  }
  va_end(vv);
  return;
}


int main(void){
 
  Display *dsp;
  Window win;
  int screen_num;
  GC gc;
  int NX = 800; 
  int NY = 800;
  dsp = XOpenDisplay((char *)0);
  screen_num = DefaultScreen(dsp);
  Visual *visual=DefaultVisual(dsp, 0);
  win    = XCreateSimpleWindow (dsp, DefaultRootWindow (dsp),0, 0, NX,NY,0,0xffffffff,0xffffffff);
  XSelectInput(dsp, win, ExposureMask | StructureNotifyMask | KeyPressMask | ButtonPressMask | PointerMotionMask);        // We want to get MapNotify events  
  XGCValues gr_values;
  //XFontStruct *fontinfo = XLoadQueryFont(dsp,"-adobe-courier-medium-r-normal--25-180-100-100-m-150-iso10646-1");
  XFontStruct *fontinfo = XLoadQueryFont(dsp,"-adobe-helvetica-bold-r-normal--18-180-75-75-p-103-iso8859-15");
  //XFontStruct *fontinfo = XLoadQueryFont(dsp,"10x20");
  gr_values.font =   fontinfo->fid;
  gr_values.function =   GXcopy;
  gr_values.plane_mask = AllPlanes;
  gr_values.foreground = BlackPixel(dsp,screen_num);
  gr_values.background = WhitePixel(dsp,screen_num);
  gc=XCreateGC(dsp,win,GCFont | GCFunction | GCPlaneMask | GCForeground | GCBackground,&gr_values);
  XSetForeground(dsp, gc, 0x00A9A9A9);
  XMapWindow(dsp, win);
  // "Map" the window (that is, make it appear on the screen)                                                                                                                     
  for(;;){XEvent e; XNextEvent(dsp,&e); if(e.type == MapNotify) break;} //Wait for the MapNotify event  
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x00A9A9A9);
  char *title = "Validation tools for oceanography data  SMHI";
  XDrawString(dsp, win, gc, 175 , 400  , title,lenstring(title));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x000000ff);
  char *page = "1";
  XDrawString(dsp, win, gc, 380 , 780  ,page , lenstring(page));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x00ffff00);
  XFillRectangle(dsp, win, gc, 200, 100, 400, 100);
  XFlush(dsp);
  char *title1 = "SMHI VALIDATION TOOLS";
  XSetForeground(dsp, gc, 0x0);
  XDrawString(dsp, win, gc, 275 , 150,title1,lenstring(title1));
  XFlush(dsp);
  XSetForeground(dsp, gc, 0x000000ff);
  XEvent e;
  char BUFFER[80] = {'\0'};
  KeySym keysym;
  int ncount = 0;
  int done = 1;
  for(;done;){
    XNextEvent(dsp,&e);
    if (e.type == KeyPress){
      XSetForeground(dsp, gc, 0x00A9A9A9);
      ncount = XLookupString (&e.xkey,BUFFER,lenstring(BUFFER), &keysym, NULL);
      if ((keysym == XK_Up) || (keysym == XK_Page_Up)){
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
    
      }
      if ((keysym == XK_Down) || (keysym == XK_Page_Down)){
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
	char *page = "1";
	XDrawString(dsp, win, gc, 380 , 780  ,page , lenstring(page));
	XFlush(dsp);
      }
      if (keysym == XK_q){
	done = 0;
      }
    }
  }
  
  XDestroyWindow(dsp,win);
  XCloseDisplay(dsp);

  return 0;
}
