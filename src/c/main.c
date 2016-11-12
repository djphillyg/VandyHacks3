#include <pebble.h>

Window *window;

void window_load(Window *window)
{
  
}

void window_unload(Window *window) 
{
  
}

void init() 
{
  //initialize app elements 
  window = window_create();
  window_set_window_handlers(window, (WindowHandlers) {
    .load = window_load,
    .unload = window_unload,
  });
  window_stack_push(window, true);
}

void deinit() 
{
  //deinitialize app elements
  window_destroy(window);
}

int main(void) 
{
  init();
  app_event_loop();
  deinit();
}






