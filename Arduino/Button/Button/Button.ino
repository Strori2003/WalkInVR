#define BUTTON_PIN 3
// одна к земле
void setup() {
    Serial.begin(9600);
    pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
    bool state = !digitalRead(BUTTON_PIN);
    // 1 - нажата, 0 - отпущена
    Serial.println(state);
    delay(100);
}