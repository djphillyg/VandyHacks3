#include <pebble.h>

Window *windowWakeup, *windowWakeup2, *windowWakeup3, *windowWakeup4, *windowWakeup5, *window;

TextLayer *text_layer, *text_layer2, *text_layer3;

void up_click_handler_Wakeup(ClickRecognizerRef recognizer, void *context)
{
  window_stack_push(windowWakeup2, true);
}

void down_click_handler_Wakeup(ClickRecognizerRef recognizer, void *context)
{
   text_layer_set_text(text_layer, "You pressed No");
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

void up_click_handler_Wakeup2(ClickRecognizerRef recognizer, void *context)
{
  window_stack_push(windowWakeup3, true);
}

void down_click_handler_Wakeup2(ClickRecognizerRef recognizer, void *context)
{
   window_stack_push(windowWakeup4, true);
}
 
void select_click_handler_Wakeup2(ClickRecognizerRef recognizer, void *context)
{
   text_layer_set_text(text_layer, "you pressed select");
}

void click_config_provider_Wakeup2(void *context)
{
    window_single_click_subscribe(BUTTON_ID_UP, up_click_handler_Wakeup2);
    window_single_click_subscribe(BUTTON_ID_DOWN, down_click_handler_Wakeup2);
    window_single_click_subscribe(BUTTON_ID_SELECT, select_click_handler_Wakeup2);
}

void up_click_handler_Wakeup3(ClickRecognizerRef recognizer, void *context)
{
  window_stack_push(windowWakeup4, true);
}

void down_click_handler_Wakeup3(ClickRecognizerRef recognizer, void *context)
{
   window_stack_push(windowWakeup5, true);
}
 
void select_click_handler_Wakeup3(ClickRecognizerRef recognizer, void *context)
{
   text_layer_set_text(text_layer, "you pressed select");
}

void click_config_provider_Wakeup3(void *context)
{
    window_single_click_subscribe(BUTTON_ID_UP, up_click_handler_Wakeup3);
    window_single_click_subscribe(BUTTON_ID_DOWN, down_click_handler_Wakeup3);
    window_single_click_subscribe(BUTTON_ID_SELECT, select_click_handler_Wakeup3);
}

void window_load_Wakeup(Window *window)
{
  text_layer = text_layer_create(GRect(0,42,96,84));
  text_layer_set_background_color(text_layer, GColorClear);
  text_layer_set_text_color(text_layer, GColorBlueMoon);
  text_layer_set_font(text_layer, fonts_get_system_font(FONT_KEY_GOTHIC_18_BOLD));
  text_layer2 = text_layer_create(GRect(96,0,48,42));
  text_layer_set_background_color(text_layer2, GColorClear);
  text_layer_set_text_color(text_layer2, GColorBlueMoon);
  text_layer_set_font(text_layer2, fonts_get_system_font(FONT_KEY_GOTHIC_24_BOLD));
  text_layer3 = text_layer_create(GRect(96,126,48,42));
  text_layer_set_background_color(text_layer3, GColorClear);
  text_layer_set_text_color(text_layer3, GColorBlueMoon);
  text_layer_set_font(text_layer3, fonts_get_system_font(FONT_KEY_GOTHIC_24_BOLD));
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
  text_layer_destroy(text_layer2);
  text_layer_destroy(text_layer3);
}

void window_load_Wakeup2(Window *window)
{
  text_layer = text_layer_create(GRect(0,42,96,84));
  text_layer_set_background_color(text_layer, GColorClear);
  text_layer_set_text_color(text_layer, GColorBlueMoon);
  text_layer_set_font(text_layer, fonts_get_system_font(FONT_KEY_GOTHIC_18_BOLD));
  text_layer2 = text_layer_create(GRect(96,0,48,42));
  text_layer_set_background_color(text_layer2, GColorClear);
  text_layer_set_text_color(text_layer2, GColorBlueMoon);
  text_layer_set_font(text_layer2, fonts_get_system_font(FONT_KEY_GOTHIC_24_BOLD));
  text_layer3 = text_layer_create(GRect(96,126,48,42));
  text_layer_set_background_color(text_layer3, GColorClear);
  text_layer_set_text_color(text_layer3, GColorBlueMoon);
  text_layer_set_font(text_layer3, fonts_get_system_font(FONT_KEY_GOTHIC_24_BOLD));
  layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer));
  layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer2));
  layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer3));
  text_layer_set_text(text_layer, "Do you have 10 fingers?");
  text_layer_set_text(text_layer2, "Yes!");
  text_layer_set_text(text_layer3, "No.");
}

void window_unload_Wakeup2(Window *window) 
{
  text_layer_destroy(text_layer);
  text_layer_destroy(text_layer2);
  text_layer_destroy(text_layer3);
}

void window_load_Wakeup3(Window *window)
{
  text_layer = text_layer_create(GRect(0,42,96,84));
  text_layer_set_background_color(text_layer, GColorClear);
  text_layer_set_text_color(text_layer, GColorBlueMoon);
  text_layer_set_font(text_layer, fonts_get_system_font(FONT_KEY_GOTHIC_18_BOLD));
  text_layer2 = text_layer_create(GRect(96,0,48,42));
  text_layer_set_background_color(text_layer2, GColorClear);
  text_layer_set_text_color(text_layer2, GColorBlueMoon);
  text_layer_set_font(text_layer2, fonts_get_system_font(FONT_KEY_GOTHIC_24_BOLD));
  text_layer3 = text_layer_create(GRect(96,126,48,42));
  text_layer_set_background_color(text_layer3, GColorClear);
  text_layer_set_text_color(text_layer3, GColorBlueMoon);
  text_layer_set_font(text_layer3, fonts_get_system_font(FONT_KEY_GOTHIC_24_BOLD));
  layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer));
  layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer2));
  layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer3));
  text_layer_set_text(text_layer, "Can you press your finger through your palm?");
  text_layer_set_text(text_layer2, "Yes!");
  text_layer_set_text(text_layer3, "No.");
}

void window_unload_Wakeup3(Window *window) 
{
  text_layer_destroy(text_layer);
  text_layer_destroy(text_layer2);
  text_layer_destroy(text_layer3);
}

void window_load_Wakeup4(Window *window)
{
  text_layer = text_layer_create(GRect(0,42,96,84));
  text_layer_set_background_color(text_layer, GColorClear);
  text_layer_set_text_color(text_layer, GColorBlueMoon);
  text_layer_set_font(text_layer, fonts_get_system_font(FONT_KEY_GOTHIC_18_BOLD));
  text_layer2 = text_layer_create(GRect(96,0,48,42));
  text_layer_set_background_color(text_layer2, GColorClear);
  text_layer_set_text_color(text_layer2, GColorBlueMoon);
  text_layer_set_font(text_layer2, fonts_get_system_font(FONT_KEY_GOTHIC_24_BOLD));
  text_layer3 = text_layer_create(GRect(96,126,48,42));
  text_layer_set_background_color(text_layer3, GColorClear);
  text_layer_set_text_color(text_layer3, GColorBlueMoon);
  text_layer_set_font(text_layer3, fonts_get_system_font(FONT_KEY_GOTHIC_24_BOLD));
  layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer));
  layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer2));
  layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer3));
  text_layer_set_text(text_layer, "You are dreaming :)");
  text_layer_set_text(text_layer2, "");
  text_layer_set_text(text_layer3, "");
}

void window_unload_Wakeup4(Window *window) 
{
  text_layer_destroy(text_layer);
  text_layer_destroy(text_layer2);
  text_layer_destroy(text_layer3);
}

void window_load_Wakeup5(Window *window)
{
  text_layer = text_layer_create(GRect(0,42,96,84));
  text_layer_set_background_color(text_layer, GColorClear);
  text_layer_set_text_color(text_layer, GColorBlueMoon);
  text_layer_set_font(text_layer, fonts_get_system_font(FONT_KEY_GOTHIC_18));
  text_layer2 = text_layer_create(GRect(96,0,48,42));
  text_layer_set_background_color(text_layer2, GColorClear);
  text_layer_set_text_color(text_layer2, GColorBlueMoon);
  text_layer_set_font(text_layer2, fonts_get_system_font(FONT_KEY_GOTHIC_24_BOLD));
  text_layer3 = text_layer_create(GRect(96,126,48,42));
  text_layer_set_background_color(text_layer3, GColorClear);
  text_layer_set_text_color(text_layer3, GColorBlueMoon);
  text_layer_set_font(text_layer3, fonts_get_system_font(FONT_KEY_GOTHIC_24_BOLD));
  layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer));
  layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer2));
  layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer3));
  text_layer_set_text(text_layer, "You are  awake :)");
  text_layer_set_text(text_layer2, "");
  text_layer_set_text(text_layer3, "");
}

void window_unload_Wakeup5(Window *window) 
{
  text_layer_destroy(text_layer);
  text_layer_destroy(text_layer2);
  text_layer_destroy(text_layer3);
}

void window_load(Window *window) 
{
  text_layer = text_layer_create(GRect(0,0,144,168));
  text_layer_set_background_color(text_layer, GColorClear);
  text_layer_set_text_color(text_layer, GColorBlack);
  text_layer_set_text(text_layer, "First Wakeup set");
}

void window_unload(Window *window) {
  text_layer_destroy(text_layer);
}

void init() 
{
  if (launch_reason() == APP_LAUNCH_WAKEUP) {
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
    windowWakeup2 = window_create();
    window_set_window_handlers(windowWakeup2, (WindowHandlers) {
      .load = window_load_Wakeup2,
      .unload = window_unload_Wakeup2,
    });
    windowWakeup3 = window_create();
    window_set_window_handlers(windowWakeup3, (WindowHandlers) {
      .load = window_load_Wakeup3,
      .unload = window_unload_Wakeup3,
    });
    windowWakeup4 = window_create();
    window_set_window_handlers(windowWakeup4, (WindowHandlers) {
      .load = window_load_Wakeup4,
      .unload = window_unload_Wakeup4,
    });
    windowWakeup5 = window_create();
    window_set_window_handlers(windowWakeup5, (WindowHandlers) {
      .load = window_load_Wakeup5,
      .unload = window_unload_Wakeup5,
    });
    window_set_click_config_provider(windowWakeup, click_config_provider_Wakeup);
    window_set_click_config_provider(windowWakeup2, click_config_provider_Wakeup2);
    window_set_click_config_provider(windowWakeup3, click_config_provider_Wakeup3);
    window_stack_push(windowWakeup, true);
  } else {

    time_t future_timestamp = time(NULL) + (1 * SECONDS_PER_MINUTE);

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
      
    window = window_create();
    window_set_window_handlers(window, (WindowHandlers) {
      .load = window_load,
      .unload = window_unload,
    });
    window_stack_push(window, true);
    }
  }
}

void deinit() 
{
  //deinitialize app elements
  window_destroy(windowWakeup);
  window_destroy(windowWakeup2);
  window_destroy(windowWakeup3);
  window_destroy(windowWakeup4);
  window_destroy(windowWakeup5);
}

int main(void) 
{
  init();
  app_event_loop();
  deinit();
}






