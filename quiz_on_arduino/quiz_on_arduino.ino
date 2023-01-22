#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>
Adafruit_SSD1306 display(128, 64, &Wire, -1);
// 'WhatsApp Image 2022-01-14 at 4', 128x45px
const unsigned char r[] PROGMEM = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x3f, 0xff, 0xff, 0xf8, 0x00, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x01, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x1f, 0xf3, 0xff, 0xff, 0x3f, 0xe0, 0x07,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xc7, 0xff, 0xff, 0x87, 0xf8, 0x07,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0x80, 0x7c, 0x1f, 0xff, 0xff, 0xe0, 0xfc, 0x07,
    0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xbf, 0xff, 0x80, 0xc0, 0xf1, 0xff, 0xff, 0x1c, 0x1c, 0x07,
    0xff, 0xff, 0x3f, 0xc1, 0xf8, 0x3f, 0xdf, 0xff, 0x80, 0xfe, 0x3e, 0x1f, 0xe3, 0xe1, 0xfc, 0x07,
    0xff, 0xff, 0x3f, 0x80, 0xf0, 0x1f, 0x8f, 0xff, 0x80, 0x78, 0xfe, 0x07, 0x8f, 0xe0, 0x78, 0x07,
    0xff, 0xfe, 0x1f, 0x9c, 0xf3, 0x9f, 0x8f, 0xff, 0x80, 0x11, 0xfc, 0x03, 0x9f, 0xc0, 0x20, 0x07,
    0xff, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0x0f, 0xff, 0x80, 0x10, 0x00, 0x03, 0x80, 0x00, 0x20, 0x07,
    0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x18, 0x03, 0x07, 0x80, 0x30, 0x60, 0x07,
    0xff, 0xff, 0x01, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0x80, 0x0f, 0x00, 0x3f, 0xf0, 0x03, 0xc0, 0x07,
    0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0x00, 0x07,
    0xff, 0xff, 0xe0, 0x1f, 0xff, 0x80, 0x7f, 0xff, 0x80, 0x00, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x07,
    0xff, 0xff, 0xf8, 0x01, 0xf0, 0x01, 0xff, 0xff, 0x80, 0x00, 0x3f, 0xff, 0xff, 0xf0, 0x00, 0x07,
    0xff, 0xff, 0xfe, 0x00, 0x00, 0x0f, 0xff, 0xff, 0x80, 0x00, 0x01, 0xf8, 0x3e, 0x00, 0x00, 0x07,
    0xff, 0xff, 0xff, 0xf0, 0x00, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf8, 0x00, 0xff, 0xfc, 0x00, 0x7f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xf0, 0x0f, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x00, 0x7f, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff,
    0xff, 0xff, 0xf8, 0xff, 0xff, 0x87, 0xff, 0xff, 0xfc, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff,
    0xff, 0xff, 0xc7, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x7f,
    0xff, 0xff, 0x00, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xf0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f,
    0xff, 0xfc, 0x01, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f,
    0xff, 0xf8, 0x08, 0x1f, 0xfe, 0x00, 0x07, 0xff, 0xc1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f,
    0xff, 0xf8, 0xe0, 0x03, 0xf8, 0x01, 0xc7, 0xff, 0xc3, 0xff, 0xf8, 0x3f, 0xf0, 0xff, 0xff, 0x0f,
    0xff, 0xf3, 0xe3, 0x03, 0xf9, 0x61, 0xf3, 0xff, 0xc3, 0xff, 0xc0, 0x7f, 0xf8, 0x0f, 0xff, 0x07,
    0xff, 0xf3, 0xfb, 0x3f, 0xff, 0x67, 0xf3, 0xff, 0xc3, 0xfc, 0x01, 0xff, 0xfe, 0x00, 0xff, 0x07,
    0xff, 0xf3, 0xfb, 0x03, 0xf9, 0x67, 0xf3, 0xff, 0xc1, 0xe0, 0x3f, 0xff, 0xff, 0xf0, 0x1e, 0x0f,
    0xff, 0xf1, 0xfb, 0x3f, 0xff, 0x63, 0xe3, 0xff, 0xc0, 0x01, 0xff, 0xff, 0xff, 0xfc, 0x80, 0x0f,
    0xff, 0xf8, 0xfb, 0x00, 0x00, 0x63, 0xe7, 0xff, 0xe0, 0x00, 0x3e, 0x1f, 0xc3, 0xe0, 0x00, 0x1f,
    0xff, 0xfc, 0x7b, 0x00, 0x00, 0x63, 0xcf, 0xff, 0xe0, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x1f,
    0xff, 0xfe, 0x33, 0x00, 0x00, 0x63, 0x1f, 0xff, 0xf0, 0x00, 0x3f, 0xff, 0xff, 0xf8, 0x00, 0x3f,
    0xff, 0xff, 0x8b, 0x01, 0xe0, 0x60, 0x3f, 0xff, 0xfd, 0x00, 0x7f, 0xff, 0xff, 0xfc, 0x00, 0xff,
    0xff, 0xff, 0xee, 0x1f, 0xff, 0x60, 0xff, 0xff, 0xfe, 0x60, 0x1f, 0xc0, 0x0f, 0xf0, 0x09, 0xff,
    0xff, 0xff, 0x7f, 0x05, 0xe9, 0xe0, 0x3f, 0xff, 0xff, 0xf8, 0x0f, 0xc7, 0x1f, 0xc0, 0x67, 0xff,
    0xff, 0xff, 0xde, 0x00, 0x0b, 0xc0, 0xff, 0xff, 0xff, 0xf7, 0x80, 0x6f, 0xe0, 0x03, 0xbf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x70, 0x00, 0x00, 0x79, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 736)
const int rallArray_LEN = 1;
const unsigned char *rallArray[1] = {
    r};
// 'Capture2', 128x45px
const unsigned char m[] PROGMEM = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x0f, 0xc1, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x07, 0xc1, 0xff, 0xff, 0xff,
    0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x01, 0x83, 0xff, 0xff, 0xff,
    0xff, 0xf0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff,
    0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0xc3, 0xff, 0xff, 0xff,
    0xff, 0xf8, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x01, 0x83, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x01, 0x83, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x03, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x03, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x07, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x1f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x04, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe0, 0x7f, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc1, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6c, 0x0d, 0x1f, 0x05, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 736)
const int aallArray_LEN = 1;
const unsigned char *aallArray[1] = {
    m};

void setup()
{
    // put your setup code here, to run once:
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    pinMode(5, INPUT);
    pinMode(2, INPUT);
    pinMode(3, INPUT);
    pinMode(4, INPUT);
    Serial.begin(9600);
}
bool scores[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
bool flag1 = 0;
bool flag2 = 0;
bool flag3 = 0;
bool flag4 = 0;
bool flag5 = 0;
bool flag6 = 0;
bool flag7 = 0;
bool flag8 = 0;
bool flag9 = 0;
bool flag10 = 0;
bool t = 0;
void loop()
{
    // put your main code here, to run repeatedly:
    int a, b, c, d;

    int score = 0;
    int i;
    if (t == 0)
    {

        if (flag1 == 0)
        {
            display.clearDisplay();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 0);
            display.println("game started");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(80, 0);
            display.println("Score:");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(115, 0);
            display.println(score);
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 9);
            display.println("9/6*7+(14-3)=");
            display.display();
            display.setTextSize(2);
            display.setTextColor(WHITE);
            display.setCursor(0, 20);
            display.println(21.5);
            display.display();
            display.setTextSize(2);
            display.setTextColor(WHITE);
            display.setCursor(65, 20);
            display.println(3.41);
            display.display();
            display.setTextSize(2);
            display.setTextColor(WHITE);
            display.setCursor(0, 45);
            display.println(32);
            display.display();
            display.setTextSize(2);
            display.setTextColor(WHITE);
            display.setCursor(65, 45);
            display.println(1);
            display.display();
            a = digitalRead(5);
            b = digitalRead(2);
            c = digitalRead(3);
            d = digitalRead(4);
            delay(10);
            if (a == HIGH)
            {
                flag1 = 1;
                scores[0] = 1;
            }
        }

        score = score + scores[0];
        Serial.println(score);
        if (flag1 == 1 && flag2 == 0)
        {
            display.clearDisplay();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 0);
            display.println("game started");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(80, 0);
            display.println("Score:");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(115, 0);
            display.println(score);
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 10);
            display.println("12-(14*3)+16*4/8=");
            display.display();
            display.setTextSize(2);
            display.setTextColor(WHITE);
            display.setCursor(0, 20);
            display.println(3.4);
            display.display();
            display.setTextSize(2);
            display.setTextColor(WHITE);
            display.setCursor(65, 20);
            display.println(-22);
            display.display();
            display.setTextSize(2);
            display.setTextColor(WHITE);
            display.setCursor(0, 45);
            display.println(13);
            display.display();
            display.setTextSize(2);
            display.setTextColor(WHITE);
            display.setCursor(65, 45);
            display.println(-10);
            display.display();
            a = digitalRead(5);
            b = digitalRead(2);
            c = digitalRead(3);
            d = digitalRead(4);
            delay(10);
            if (b == HIGH)
            {
                flag2 = 1;
                scores[1] = 1;
            }
        }

        score = score + scores[1];
        Serial.println(score);
        if (flag2 == 1 && flag3 == 0)
        {
            display.clearDisplay();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 0);
            display.println("game started");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(80, 0);
            display.println("Score:");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(115, 0);
            display.println(score);
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 10);
            display.println("Smile emoji?");
            display.display();
            display.drawBitmap(0, 20, r, 128, 64, WHITE);
            display.display();
            a = digitalRead(5);
            b = digitalRead(2);
            c = digitalRead(3);
            d = digitalRead(4);
            delay(10);
            if (a == 1)
            {
                flag3 = 1;
                scores[2] = 1;
            }
        }
        score = score + scores[2];
        Serial.println(score);
        if (flag3 == 1 && flag4 == 0)
        {
            display.clearDisplay();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 0);
            display.println("game started");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(80, 0);
            display.println("Score:");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(115, 0);
            display.println(score);
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 10);
            display.println("innocent emoji?");
            display.display();
            display.drawBitmap(0, 20, r, 128, 64, WHITE);
            display.display();
            a = digitalRead(5);
            b = digitalRead(2);
            c = digitalRead(3);
            d = digitalRead(4);
            delay(10);
            if (b == 1)
            {
                flag4 = 1;
                scores[3] = 1;
            }
        }
        score = score + scores[3];
        Serial.println(score);
        if (flag4 == 1 && flag5 == 0)
        {
            display.clearDisplay();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 0);
            display.println("game started");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(80, 0);
            display.println("Score:");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(115, 0);
            display.println(score);
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 10);
            display.println("cry emoji?");
            display.display();
            display.drawBitmap(0, 20, r, 128, 64, WHITE);
            display.display();
            a = digitalRead(5);
            b = digitalRead(2);
            c = digitalRead(3);
            d = digitalRead(4);
            delay(10);
            if (c == 1)
            {
                flag5 = 1;
                scores[4] = 1;
            }
        }
        score = score + scores[4];
        Serial.println(score);
        if (flag5 == 1 && flag6 == 0)
        {
            display.clearDisplay();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 0);
            display.println("game started");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(80, 0);
            display.println("Score:");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(115, 0);
            display.println(score);
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 10);
            display.println("hi emoji?");
            display.display();
            display.drawBitmap(0, 20, m, 128, 64, WHITE);
            display.display();
            a = digitalRead(5);
            b = digitalRead(2);

            delay(10);
            if (b == 1)
            {
                flag6 = 1;
                scores[5] = 1;
            }
        }
        score = score + scores[5];
        Serial.println(score);
        if (flag6 == 1 && flag7 == 0)
        {
            display.clearDisplay();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 0);
            display.println("game started");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(80, 0);
            display.println("Score:");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(115, 0);
            display.println(score);
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 10);
            display.println("bigger line?");
            display.display();
            display.drawLine(30, 35, 30, 64, WHITE);
            display.display();
            display.drawLine(110, 20, 110, 64, WHITE);
            display.display();
            a = digitalRead(5);
            b = digitalRead(2);

            delay(10);
            if (b == 1)
            {
                flag7 = 1;
                scores[6] = 1;
            }
        }

        score = score + scores[6];
        Serial.println(score);
        if (flag7 == 1 && flag8 == 0)
        {
            display.clearDisplay();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 0);
            display.println("game started");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(80, 0);
            display.println("Score:");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(115, 0);
            display.println(score);
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 10);
            display.println("bigger circle?");
            display.display();
            display.drawCircle(30, 45, 15, WHITE);
            display.display();
            display.drawCircle(110, 40, 10, WHITE);
            display.display();
            a = digitalRead(5);
            b = digitalRead(2);

            delay(10);
            if (a == 1)
            {
                flag8 = 1;
                scores[7] = 1;
            }
        }
        score = score + scores[7];
        Serial.println(score);
        if (flag8 == 1 && flag9 == 0)
        {
            display.clearDisplay();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 0);
            display.println("game started");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(80, 0);
            display.println("Score:");
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(115, 0);
            display.println(score);
            display.display();
            display.setTextSize(1);
            display.setTextColor(WHITE);
            display.setCursor(0, 10);
            display.println("bigger rectangle?");
            display.display();
            display.fillRect(5, 20, 45, 50, WHITE);
            display.display();
            display.fillRect(65, 32, 20, 20, WHITE);
            display.display();
            a = digitalRead(5);
            b = digitalRead(2);

            delay(10);
            if (a == 1)
            {
                flag9 = 1;
                scores[8] = 1;
                t = 1;
            }
            score = score + scores[8];
            Serial.println(score);
        }

        delay(1000);
    }

    if (t == 1)
    {

        display.clearDisplay();
        display.setTextSize(2);
        display.setTextColor(WHITE);
        display.setCursor(0, 25);
        display.println("game");
        display.display();
        display.setTextSize(2);
        display.setTextColor(WHITE);
        display.setCursor(25, 45);
        display.println("ended");
        display.display();
        delay(2000);
    }
}
