#include <pebble.h>

Window *windowWakeup;

TextLayer *text_layer, *text_layer2, *text_layer3;

void up_click_handler_Wakeup(ClickRecognizerRef recognizer, void *context)
{
   text_layer_set_text(text_layer, "you pressed Yes");
}
 
void down_click_handler_Wakeup(ClickRecognizerRef recognizer, void *context)
{
   text_layer_set_text(text_layer, "you pressed No");
}
 
void select_click_handler_Wakeup(ClickRecognizerRef recognizer, void *context)
{
   text_layer_set_text(text_layer, "you pressed select");
}

void click_config_provider_Wakeup(void *context)
{
    window_single_click_subscribe(BUTTON_ID_UP, up_click_handler_Wakeup);
    window_single_click_subscribe(BUTTON_ID_DOWN, down_click_handler_Wakeup);
    window_single_click_subscribe(BUTTON_ID_SELECT, select_click_handler_Wakeup);
}

void window_load_Wakeup(Window *window)
{
  text_layer = text_layer_create(GRect(0,42,96,84));
  text_layer_set_background_color(text_layer, GColorClear);
  text_layer_set_text_color(text_layer, GColorBlueMoon);
  text_layer2 = text_layer_create(GRect(96,0,48,42));
  text_layer_set_background_color(text_layer2, GColorClear);
  text_layer_set_text_color(text_layer2, GColorBlueMoon);
  text_layer3 = text_layer_create(GRect(96,126,48,42));
  text_layer_set_background_color(text_layer3, GColorClear);
  text_layer_set_text_color(text_layer3, GColorBlueMoon);
  layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer));
  layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer2));
  layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer3));
  text_layer_set_text(text_layer, "Time for a reality check! Click Yes to start.");
  text_layer_set_text(text_layer2, "Yes!");
  text_layer_set_text(text_layer3, "No.");
}

void window_unload_Wakeup(Window *window) 
{
  text_layer_destroy(text_layer);
}

void init() 
{
  //if (launch_reason() == APP_LAUNCH_WAKEUP) {
    //app was started by wakeup
    // Let the timestamp be 2 hours from now
    time_t future_timestamp = time(NULL) + (2 * 60 * SECONDS_PER_MINUTE);

    // Choose a 'cookie' value representing the reason for the wakeup
    const int cookie = 0;

    // If true, the user will be notified if they missed the wakeup 
    // (i.e. their watch was off)
    const bool notify_if_missed = true;

    // Schedule wakeup event
    WakeupId id = wakeup_schedule(future_timestamp, cookie, notify_if_missed);

    // Check the scheduling was successful
    if(id >= 0) {
      // Persist the ID so that a future launch can query it
      const int wakeup_id_key = 43;
      persist_write_int(wakeup_id_key, id);
    }
    windowWakeup = window_create();
    window_set_window_handlers(windowWakeup, (WindowHandlers) {
      .load = window_load_Wakeup,
      .unload = window_unload_Wakeup,
    });
    window_set_click_config_provider(windowWakeup, click_config_provider_Wakeup);
    window_stack_push(windowWakeup, true);
 // } else {
    
  //}
}

void deinit() 
{
  //deinitialize app elements
  window_destroy(windowWakeup);
}

int main(void) 
{
  init();
  app_event_loop();
  deinit();
}






