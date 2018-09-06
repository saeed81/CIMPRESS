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


Display *dsp = NULL;
Window win = 0;
int screen_num = 0;
GC gc;
int NX = 800; 
int NY = 800;
Visual *visual = NULL;
XGCValues gr_values;
XFontStruct *fontinfo = NULL;

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
#include"pages.c" 


typedef void (*pagewrap)(void);
pagewrap pages[10] = {&page1,&page2,&page3,&page4,&page5,&page6,&page7,&page8,&page9,&page10};



void pagecall(int *pgnum){
    
  if (*pgnum > 9) {
    //printf("pagenum is %d",*pgnum);
    (*pages[9])();
    *pgnum = 9;
    return;
  }
  if (*pgnum < 0){
    (*pages[0])();
    //printf("pagenum is %d",*pgnum);
    *pgnum = 0;
    return;
  }
  //printf("pagenum is %d",*pgnum);
  (*pages[*pgnum])();

  return;
}  


void setupfirstpage(void){
  XSetForeground(dsp, gc, 0x00A9A9A9);
  char *title = "Validation tools for oceanography data  SMHI";
  XDrawString(dsp, win, gc, 175 , 400  , title,lenstring(title));
  XSetForeground(dsp, gc, 0x00ffff00);
  XFillRectangle(dsp, win, gc, 200, 100, 400, 100);
  char *title1 = "SMHI VALIDATION TOOLS";
  XSetForeground(dsp, gc, 0x0);
  XDrawString(dsp, win, gc, 275 , 150,title1,lenstring(title1));
  XSetForeground(dsp, gc, 0x000000ff);
  char pageinfo1[2] = "1";
  XDrawString(dsp, win, gc, 380 , 780  ,pageinfo1 , 1);
}    



int main(void){
 
  dsp = XOpenDisplay((char *)0);
  screen_num = DefaultScreen(dsp);
  visual=DefaultVisual(dsp, 0);
  win    = XCreateSimpleWindow (dsp, DefaultRootWindow (dsp),0, 0, NX,NY,0,0xffffffff,0xffffffff);
  XSelectInput(dsp, win, ExposureMask | StructureNotifyMask | KeyPressMask | ButtonPressMask | PointerMotionMask);        // We want to get MapNotify events  
  fontinfo = XLoadQueryFont(dsp,"-adobe-helvetica-bold-r-normal--18-180-75-75-p-103-iso8859-15");
  //fontinfo = XLoadQueryFont(dsp,"9x15");
  gr_values.font =   fontinfo->fid;
  gr_values.function =   GXcopy;
  gr_values.plane_mask = AllPlanes;
  gr_values.foreground = BlackPixel(dsp,screen_num);
  gr_values.background = WhitePixel(dsp,screen_num);
  gc=XCreateGC(dsp,win,GCFont | GCFunction | GCPlaneMask | GCForeground | GCBackground,&gr_values);
  //XFontStruct *fontinfo = XLoadQueryFont(dsp,"-adobe-courier-medium-r-normal--25-180-100-100-m-150-iso10646-1");
  //XFontStruct *fontinfo = XLoadQueryFont(dsp,"10x20");
  //XMapRaised(dsp, win);
  XMapWindow(dsp, win);
  // "Map" the window (that is, make it appear on the screen)                                                                                                                     
  for(;;){XEvent e; XNextEvent(dsp,&e); if(e.type == MapNotify) break;} //Wait for the MapNotify event
  XFlush(dsp);
  int first = 1;
  XEvent report;
  for (;first;) {
    XNextEvent(dsp, &report);
    switch (report.type) {
      /* Draw our text first */
    case Expose:{
      printf("%d \n",report.xexpose.count);
      if (report.xexpose.count > 0 ){
	first = 0;
      }
      setupfirstpage();
    }break;
    }
  }
  XFlush(dsp);    
  XEvent e;
  char BUFFER[80] = {'\0'};
  KeySym keysym;
  int ncount = 0;
  int done = 1;
  int npage = 0;
  for(;done;){
    XNextEvent(dsp,&e);
    if (e.type == KeyPress){
      XSetForeground(dsp, gc, 0x00A9A9A9);
      ncount = XLookupString (&e.xkey,BUFFER,lenstring(BUFFER), &keysym, NULL);
      if ((keysym == XK_Up) || (keysym == XK_Page_Up)){
	npage++;
	pagecall(&npage);
      }
      if ((keysym == XK_Down) || (keysym == XK_Page_Down)){
	npage--;
	pagecall(&npage);
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
