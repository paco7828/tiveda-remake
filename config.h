
// Define this for various debug features
#define DEBUG 1

// Board version
#define BOARD_VERSION "b1"

// Software version
#define FW_VERSION "1.5"

// Enable / disabled modules
#define ENABLE_STATUSLED 1
#define ENABLE_ALERTLED 1

// GPIO port of the status led
#define CFG_LED_STATUS 5 // Oled!!!

// GPIO port of the alert led
#define CFG_LED_ALERT1 12 // D6
#define CFG_LED_ALERT2 14 // D5
#define CFG_BEEPER 13     // Oled!!!

// GPIO port of the debug button
#define CFG_BTN 0

// GPIO ports connected when in inverted mode
// #define INVERT_OUT 5 // D1 // Oled!!!
// #define INVERT_IN 15 // D8 // Oled!!!

// Tolerance in heading from the requiered in degress
#define CFG_HDG_TOLERANCE 45

// Custom events
#define GPS_STATUS_CHANGED EventManager::kEventUser1

// New message is available
#define GPS_MESSAGE_RECEIVED EventManager::kEventUser2

// GPS coordinates have been updated
#define GPS_UPDATED EventManager::kEventUser3

// Alert status has been changed
// Message parameter is the difference between the current speed and the speed limit
#define ALERT_TRIGGERED EventManager::kEventUser4

// Alert is gone
#define ALERT_RESET EventManager::kEventUser5
